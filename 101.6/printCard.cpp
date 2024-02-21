#include "printCard.h"


void printCard(const Card& card){

	// Вывод масти
	switch (card.advantage) {
	case MyAdvantage::TWO: std::cout << MyAdvantage::TWO; break;
	case MyAdvantage::THREE: std::cout << MyAdvantage::THREE; break;
	case MyAdvantage::FOUR: std::cout << MyAdvantage::FOUR; break;
	case MyAdvantage::FIVE: std::cout << MyAdvantage::FIVE; break;
	case MyAdvantage::SIX: std::cout << MyAdvantage::SIX; break;
	case MyAdvantage::SEVEN: std::cout << MyAdvantage::SEVEN; break;
	case MyAdvantage::EIGHT: std::cout << MyAdvantage::EIGHT; break;
	case MyAdvantage::NINE: std::cout << MyAdvantage::NINE; break;
	case MyAdvantage::TEN: std::cout << MyAdvantage::TEN; break;
	case MyAdvantage::JACK: std::cout << "V"; break;
	case MyAdvantage::QUEEN: std::cout << "Q"; break;
	case MyAdvantage::KING: std::cout << "K"; break;
	}

	// Вывод достоинства
	switch (card.suit) {
	case MySuit::CLUBS: std::cout << "Clubs\n"; break;
	case MySuit::DIAMONDS: std::cout << "Diamonds\n"; break;
	case MySuit::HEARTS: std::cout << "Hearts\n"; break;
	case MySuit::SPADES: std::cout << "Spades\n"; break;
	}
}

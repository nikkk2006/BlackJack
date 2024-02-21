#include "card.h"


Card::Card(Advantages advantage, Suits suit) : m_suit(suit), m_advantage(advantage) {}

void Card::printCard() const{

	switch (m_advantage) {
	case JACK: std::cout << "V"; break;
	case QUEEN: std::cout << "Q"; break;
	case KING: std::cout << "K"; break;
	default:
		std::cout << m_advantage;
		break;
	}

	// Вывод достоинства
	switch (m_suit) {
	case CLUBS: std::cout << "Clubs"; break;
	case DIAMONDS: std::cout << "Diamonds"; break;
	case HEARTS: std::cout << "Hearts"; break;
	case SPADES: std::cout << "Spades"; break;
	}
}

int Card::getCardValue() const{
	return m_advantage;
}

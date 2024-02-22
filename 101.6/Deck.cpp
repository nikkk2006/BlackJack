#include "Deck.h"


Deck::Deck() : m_cardIndex{0} {

	int card = 0;
	for (int suit = 0; suit < Card::Suits::MAX_SUITS; suit++) {
		for (int advantage = 2; advantage < 14; advantage++) {
			m_deck[card] = Card(static_cast<Card::Advantages>(advantage), static_cast<Card::Suits>(suit));
			card++;
		}
	}
}

void Deck::swapCard(Card& card1, Card& card2){
	Card temp = card1;
	card1 = card2;
	card2 = temp;
}

int Deck::getRandomNumber(int min, int max){
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Deck::printDeck() const {
	for (const auto& card : m_deck) {
		card.printCard();
	}
	std::cout << std::endl;
}

void Deck::shuffleDeck() {

	for (int index = 0; index < 52; ++index){
		int swapIndex = getRandomNumber(0, 51);
		swapCard(m_deck[index], m_deck[swapIndex]);
	}
	m_cardIndex = 0;
}

const Card& Deck::dealCard(){
	assert(m_cardIndex < 52);
	return m_deck[m_cardIndex++];
}





#ifndef DECK_H
#define DECK_H


#include <array>
#include <cassert>
#include "card.h"

class Deck{
private:
	std::array<Card, 52> m_deck;
	int m_cardIndex;

	static void swapCard(Card& card1, Card& card2);
	static int getRandomNumber(int min, int max);
public:
	Deck();

	void printDeck() const;
	void shuffleDeck();
	const Card& dealCard();
};

#endif // !DECK_H




#include "printDeck.h"


void printDeck(const std::array<Card, 52>& my_deck){

	for (const auto& deck : my_deck) {
		printCard(deck);
	}
	std::cout << std::endl;
}

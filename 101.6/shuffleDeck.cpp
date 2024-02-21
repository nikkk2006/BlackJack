#include "shuffleDeck.h"


void shuffleDeck(std::array<Card, 52>& deck){

	for (int i = 0; i < 52; i++) {
		int random_numb = rand() % 51 + 0;

		swapCard(deck[i], deck[random_numb]);
	}
}

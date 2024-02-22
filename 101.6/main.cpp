#include <iostream>
#include <ctime>
#include "Deck.h"
#include "playBlackJack.h"


int main() {
	srand(static_cast<unsigned int>(time(0)));
	rand();

	Deck deck;
	deck.shuffleDeck();

	if(playBlackJack(deck))
		std::cout << "You win!\n";
	else
		std::cout << "You lose!\n";

	return 0;
}




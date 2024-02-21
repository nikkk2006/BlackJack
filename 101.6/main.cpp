#include <array>
#include <ctime>
#include "card.h"
#include "deckInit.h"
#include "shuffleDeck.h"
#include "playBlackJack.h"


int main() {
	srand(time(NULL));

	std::array<Card, 52> deck;

	deckInit(deck);
	shuffleDeck(deck);

	BlackJackResult result = playBlackJack(deck);

	switch (result) {
	case BlackJackResult::USER_WIN: std::cout << "You win" << std::endl; break;
	case BlackJackResult::DEALER_WIN: std::cout << "Dealer win" << std::endl; break;
	case BlackJackResult::NOBODY_WIN: std::cout << "Draw" << std::endl; break;
	}

	return 0;
}




#include "playBlackJack.h"


bool playBlackJack(Deck& deck) {

	int userResult = 0;
	int dealerResult = 0;

	dealerResult += deck.dealCard().getCardValue();
	std::cout << "The dealer is showing: " << dealerResult << '\n';

	userResult += deck.dealCard().getCardValue();
	userResult += deck.dealCard().getCardValue();

	do {
		std::cout << "You have: " << userResult << '\n';

		if (userResult > 21)
			return false;

		userResult += deck.dealCard().getCardValue();
	} while (userChoice());

	while (dealerResult < 17) {

		dealerResult += deck.dealCard().getCardValue();
		std::cout << "The dealer now has: " << dealerResult << '\n';
	}

	if (dealerResult > 21) {
		return true;
	}

	return 0;
}



#include "playBlackJack.h"


BlackJackResult playBlackJack(std::array<Card, 52>& deck) {

	Card* cardPtr = &deck[0];

	int userResult = 0;
	int dealerResult = 0;

	dealerResult += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerResult << '\n';

	userResult += getCardValue(*cardPtr++);
	userResult += getCardValue(*cardPtr++);

	do {
		std::cout << "You have: " << userResult << '\n';

		if (userResult > 21)
			return BlackJackResult::DEALER_WIN;

		userResult += getCardValue(*cardPtr++);
	} while (userChoice());

	while (dealerResult < 17) {

		dealerResult += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerResult << '\n';
	}

	if (dealerResult == userResult) {
		return BlackJackResult::NOBODY_WIN;
	}

	if (dealerResult > 21) {
		return BlackJackResult::USER_WIN;
	}

	return (userResult > dealerResult) ? BlackJackResult::USER_WIN : BlackJackResult::DEALER_WIN;
}

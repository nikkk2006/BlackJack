#include "swapCard.h"


void swapCard(Card& card1, Card& card2){

	Card temp = card1;
	card1 = card2;
	card2 = temp;
}

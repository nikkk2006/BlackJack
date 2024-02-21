#include "deckInit.h"


void deckInit(std::array<Card, 52>& deck){

	int card = 0;
	for (int suit = 0; suit < MySuit::MAX_SUITS; suit++) {
		for (int advantage = 2; advantage < 14; advantage++) {  // 14 - нумерация карт идёт до 13(Король)
			deck[card].suit = static_cast<MySuit::Suits>(suit);
			deck[card].advantage = static_cast<MyAdvantage::Advantages>(advantage);
			card++;
		}
	}
}

#ifndef CARD_H
#define CARD_H


#include "suits.h"
#include "advantages.h"

struct Card {
	MySuit::Suits suit;
	MyAdvantage::Advantages advantage;
};

#endif // !CARD_H


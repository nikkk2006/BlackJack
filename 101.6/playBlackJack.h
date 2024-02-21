#ifndef PLAYBLACKJACK_H
#define PLAYBLACKJACK_H


#include <iostream>
#include <array>
#include "card.h"
#include "getCardValue.h"
#include "userChoice.h"
#include "BlackJackResult.h"

BlackJackResult playBlackJack(std::array<Card, 52>& deck);

#endif // !PLAYBLACKJACK_H


#ifndef CARD_H
#define CARD_H


#include <iostream>

class Card {
public:
	enum Suits {
		CLUBS,			// Трефы
		DIAMONDS,       // Бубны
		HEARTS,			// Червы
		SPADES, 		// Пики
		MAX_SUITS
	};

	enum Advantages {
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		JACK,      // Валет
		QUEEN,     // Дама
		KING,      // Король
		MAX_ADVANTAGES
	};

	Card(Advantages advantage = MAX_ADVANTAGES, Suits suit = MAX_SUITS);

	void printCard() const;
	int getCardValue() const;
private:
	Suits m_suit;
	Advantages m_advantage;
};

#endif // !CARD_H


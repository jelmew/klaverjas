#include<vector>
#include <memory>
#include <algorithm>
#include <random>
#include <chrono>
#include "kaart.h"
#ifndef DECK_H
#define DECK_H


class deck
{
	public:
		deck();
		deck( vector<std::shared_ptr<const kaart> > input_deck);
		virtual ~deck();

		void shuffle_deck();
		void print_deck();
		void insert_card(std::shared_ptr<const kaart> input_kaart);
		std::shared_ptr<const kaart> take_card();
	protected:
	private:
	std::vector< std::shared_ptr<const kaart> > deck_of_cards;
};

#endif // DECK_H

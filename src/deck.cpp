#include "../include/deck.h"

deck::deck()
{
	//ctor
}
deck::deck(vector< std::shared_ptr<const kaart> > input_deck):deck_of_cards(input_deck)
{
}

deck::~deck()
{
	//dtor
}

void deck::shuffle_deck()
{
	auto seed = std::chrono::system_clock::now().time_since_epoch().count();
  auto engine=std::default_random_engine{seed};
	std::shuffle(std::begin(deck_of_cards), std::end(deck_of_cards), engine);
}

void deck::print_deck()
{
	for(auto it: deck_of_cards)
	{
		cout<<(*it)<<endl;
	}

	return;
}


void deck::insert_card(std::shared_ptr<const kaart> input_kaart)
{
	deck_of_cards.push_back(input_kaart);
}

std::shared_ptr<const kaart> deck::take_card()
{
	shared_ptr<const kaart> bovenste_kaart=deck_of_cards.back();
	deck_of_cards.pop_back();

	return bovenste_kaart;
}

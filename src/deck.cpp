#include "../include/deck.h"
/** Default constructor**/
deck::deck()
{
	//ctor
}
/** Constructor with input deck**/
deck::deck(vector< std::shared_ptr<const kaart> > input_deck):deck_of_cards(input_deck)
{
}

deck::~deck()
{
	//dtor
}
/** Random shuffle**/
void deck::shuffle_deck()
{
	auto seed = std::chrono::system_clock::now().time_since_epoch().count();
  auto engine=std::default_random_engine{seed};
	std::shuffle(std::begin(deck_of_cards), std::end(deck_of_cards), engine);
}
/** Print het deck**/
void deck::print_deck()
{
	for(auto it: deck_of_cards)
	{
		cout<<(*it)<<endl;
	}

	return;
}

/** Stop kaart in het deck**/
void deck::insert_card(std::shared_ptr<const kaart> input_kaart)
{
	deck_of_cards.push_back(input_kaart);
}
/** Bovenste kaart van deck**/
std::shared_ptr<const kaart> deck::take_card()
{
	//If deck is empty, signal nullptr
	if(deck_of_cards.size()==0) return NULL;

	shared_ptr<const kaart> bovenste_kaart=deck_of_cards.back();
	deck_of_cards.pop_back();

	return bovenste_kaart;
}

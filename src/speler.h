#ifndef speler_h
#define speler_h
 // speler_h
#include "kaart.h"
#include <list>
#include <iterator>
#include <string>
#include <set>
class speler
{
	public:
	speler(){};
	speler(std::multiset<kaart*> input_hand,std:: string player_name_input): hand(input_hand), player_name(player_name_input)
	{};
	~speler()
	{
		//Code to delete list of kaarten
	};
	friend std::ostream& operator<<(std::ostream& os, const speler& print);

	void give_card(kaart* card);
	bool take_card(kaartkleur kleur,kaarttype type);
	bool take_card(kaart card);

	private:
	std::multiset<kaart*> hand;
	const std::string player_name;
};


#endif

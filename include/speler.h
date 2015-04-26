#ifndef speler_h
#define speler_h
 // speler_h
#include "kaart.h"
#include <list>
#include <iterator>
#include <string>
#include <set>
#include <memory>
class speler
{
	public:
	speler(){};
	speler(string player_name_input);
	speler(std::vector<std::shared_ptr<const kaart> > input_hand,std:: string player_name_input): hand(input_hand), player_name(player_name_input)
	{};
	~speler()
	{
		//Code to delete list of kaarten
	};
	friend std::ostream& operator<<(std::ostream& os, const speler& print);

	void give_card(std::shared_ptr<const kaart> card);
	//bool take_card(kaartkleur kleur,kaarttype type);
	//bool take_card(kaart card);

	private:
	std::vector<std::shared_ptr<const kaart> > hand;
	const std::string player_name;
};


#endif

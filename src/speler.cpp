#include "../include/speler.h"

std::ostream& operator<<(std::ostream& os, const speler& print) {
  os<<"player name: "<<print.player_name<<" ";
  os<<"hand: ";
  for(auto &i: print.hand) {
    os<<*i<<" ";
    }

  return os;
  }

/** Neem kaart van speler, returns false als deze kaart niet aanwezig is**/
/*bool speler::take_card(kaartkleur kleur,kaarttype type)
{
	kaart uitneem(kleur,type);

	for(auto it=hand.begin(); it!=hand.end();++it)
	{
		if((**it)==uitneem)
		{
			hand.erase(it);
			return true;
		}
	}



  return false;
}
*/
speler::speler(string player_name_input):player_name(player_name_input) {
  return;
  }

void speler::give_card(std::shared_ptr<const kaart> card) {
  hand.push_back(card);

  return;
  }

bool speler::hand_empty()
{
	return hand.size()==0;
}

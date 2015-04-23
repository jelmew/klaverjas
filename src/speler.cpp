#include "speler.h"

std::ostream& operator<<(std::ostream& os, const speler& print)
{
  os<<"player name: "<<print.player_name<<" ";
  os<<"hand: ";
  for(auto &i: print.hand)
    {
      os<<*i;
    }

  return os;
}

/** Neem kaart van speler, returns false als deze kaart niet aanwezig is**/
bool speler::take_card(kaartkleur kleur,kaarttype type)
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

void speler::give_card(kaart* card)
{
  hand.insert(card);

  return;
}

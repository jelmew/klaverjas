#ifndef KLAVERJAS_H
#define KLAVERJAS_H
#include <fstream>
#include <string>
#include <set>
#include <memory>

#include "kaart.h"
#include "speler.h"
#include "deck.h"
using std::string;
using namespace std;

class klaverjas
{
	public:
		/**Initialize the game/players//cards**/
		klaverjas(int number_spelers);
		klaverjas();
		virtual ~klaverjas();
		/** A dividing card function, which takes all cards from players and gives them new ones**/
		void get_card_list(string file_name);
		void shuffle_and_give();
	protected:
	private:
		std::ifstream input_file;
		deck deck_of_cards;
		vector<speler> spelers_lijst;
		//std::vector<std::shared_ptr<const kaart> > deck;
};

#endif // KLAVERJAS_H

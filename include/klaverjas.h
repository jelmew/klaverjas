#ifndef KLAVERJAS_H
#define KLAVERJAS_H
#include <fstream>
#include <string>
#include <set>
#include <memory>
#include <chrono>
#include <random>

#include "kaart.h"
#include "speler.h"
#include "deck.h"
#include "table.h"
using std::string;
using namespace std;

/** Main klaverjas  class. Bedoeling is dat via de flow hiervan alles gebeurt.**/
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
		void random_troef();
		void start_round(int start_speler);

	protected:
	private:
		void set_troef(kaartkleur input_troef);
		
		std::ifstream input_file;
		deck deck_of_cards;
		vector<speler> spelers_lijst;
		vector<kaart> importance_list;
		//std::vector<std::shared_ptr<const kaart> > dek;
		kaartkleur troef;
		kaart* troef_kaart;
		table tafel;
};

#endif // KLAVERJAS_H

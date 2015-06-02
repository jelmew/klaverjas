#ifndef TABLE_H
#define TABLE_H
#include "kaart.h"
#include "speler.h"
#include <array>
#include <map>
#include <iostream>

class table
{
	public:

		table(){};
		virtual ~table(){};

		//void plaats_kaart();

		void get_action(speler& input_speler, kaartkleur troef);




	protected:
	private:

		std::array<std::shared_ptr<const kaart>,4> card_on_table;
		//const std::map<int, std::string> player_sequence;
		//int input_counter;

};

#endif // TABLE_H

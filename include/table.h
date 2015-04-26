#ifndef TABLE_H
#define TABLE_H
#include "kaart.h"
#include <array>
#include <map>

class table
{
	public:
		table(std::map<int,std::string> player_sequence_input):player_sequence(player_sequence_input)
		{
			input_counter=0;
		};
		virtual ~table();

		void plaats_kaart();

	protected:
	private:

		std::array<kaart*,4> card_on_table;
		const std::map<int, std::string> player_sequence;
		int input_counter;

};

#endif // TABLE_H

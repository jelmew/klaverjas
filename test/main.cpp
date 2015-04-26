#include <iostream>
#include <string>
#include "../include/kaart.h"
#include "../include/speler.h"
#include "../include/table.h"
#include "../include/klaverjas.h"
#include "../include/deck.h"




int main()
{

	klaverjas begin_spel;
	std::string kaarten_locatie="/home/jelmer/Code_selfbuild/Klaverjas/build/kaarten.txt";
	begin_spel.get_card_list(kaarten_locatie);
	begin_spel.shuffle_and_give();

	return 0;
};

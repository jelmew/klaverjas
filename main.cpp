#include <iostream>
#include <string>
#include "src/kaart.h"
#include "src/speler.h"
#include "src/table.h"
#include "src/klaverjas.h"



int main()
{

	klaverjas begin_spel;
	std::string kaarten_locatie="/home/jelmer/Code_selfbuild/Klaverjas/build/kaarten.txt";
	begin_spel.get_card_list(kaarten_locatie);
	return 0;
};

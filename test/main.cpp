#include <iostream>
#include <string>
#include "../include/kaart.h"
#include "../include/speler.h"
#include "../include/table.h"
#include "../include/klaverjas.h"
#include "../include/deck.h"




int main()
{
	//std::shared_ptr<const kaart> a(new  const kaart(kaartkleur::harten,kaarttype::aas));
	//cout<<*a<<endl;

	klaverjas begin_spel;
	std::string kaarten_locatie="/home/jelmer/Code_selfbuild/Klaverjas/build/kaarten.txt";
	begin_spel.get_card_list(kaarten_locatie);
	begin_spel.shuffle_and_give();
	begin_spel.random_troef();
	/**Kies een startspeler**/

	return 0;
};

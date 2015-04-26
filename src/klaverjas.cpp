#include "../include/klaverjas.h"
const std::map<std::string, kaartkleur> kleur_map=boost::assign::map_list_of("klaveren",klaveren)("schoppen",schoppen)("harten",harten)("ruiten",ruiten);
const std::map<std::string,kaarttype> type_map=boost::assign::map_list_of("aas",aas)("twee",twee)("drie",drie)("vier",vier)("vijf",vijf)("zes",zes)("zeven",zeven)
("acht",acht)("negen",negen)("tien",tien)("boer",boer)("vrouw",vrouw)("heer",heer);
klaverjas::klaverjas()
{
	deck();
	//ctor
}
/**Destroying the list of cards**/
klaverjas::~klaverjas()
{

}
/** Maak een lijst aan kaarten vanuit een txt bestand**/
void klaverjas::get_card_list(string filename)
{

	input_file.open(filename);
	/**Check if file could be opened**/
	if(!input_file)
	{
		std::cout<<"string file: "<<filename<<std::endl;
		std::cout<<"File could not be opened"<<std::endl;
		//return;
	}

	string kleur_string, type_string;
  while(!input_file.eof())
	{
		//std::cout<<(*input_file)<<std::endl;

		input_file>>kleur_string>>type_string;
		//cout<<kleur_string<<" "<<type_string<<endl;

		//std::cout<<kleur_string<<" "<<type_string<<std::endl;
		auto kleur_iterator=kleur_map.find(kleur_string);
		if(kleur_iterator==kleur_map.end())
		{
			cout<<"kleur string: "<<kleur_string<<" is niet compatibel"<<endl;
		}

		auto type_iterator=type_map.find(type_string);
		if(type_iterator==type_map.end())
		{
			cout<<"type string: "<<type_string<<" is niet compatibel"<<endl;
		}

		auto kleur=kleur_iterator->second;
		auto type=type_iterator->second;

		//cout<<kleur<<endl;
		 std::shared_ptr<const kaart> new_kaart(new const kaart(kleur,type));
		 deck_of_cards.insert_card(new_kaart);





	}
	input_file.close();
	//deck_of_cards.print_deck();
	return;
}

/**Schud denk en geef de kaarten van bovenaf naar onder aan de spelers**/
void klaverjas::shuffle_and_give()
{
	deck_of_cards.shuffle_deck();
	cout<<*deck_of_cards.take_card()<<endl;
	//deck_of_cards.print_deck();

}

#include "kaart.h"

const  map<string, kaartkleur> kleur_map=map_list_of("klaveren",klaveren)("schoppen",schoppen)("harten",harten)("ruiten",ruiten);
const  map<string,kaarttype> type_map=map_list_of("aas",aas)("twee",twee)("drie",drie)("vier",vier)("vijf",vijf)("zes",zes)("zeven",zeven)
("acht",acht)("negen",negen)("tien",tien)("boer",boer)("vrouw",vrouw)("heer",heer);
std::ostream& operator<<(std::ostream& os, const kaart& print)
{
	switch(print.kleur){
		case harten: 		os<<"harten ";		break;
		case ruiten:		os<<"ruiten ";		break;
		case schoppen: 	os<<"schoppen ";		break;
		case klaveren: 	os<<"klaveren ";	break;
		default:		os.setstate(std::ios_base::failbit);
		}
	switch(print.type){
		case aas: 			os<<"aas";				break;
		case twee:			os<<"twee";				break;
		case drie:			os<<"drie";				break;
		case vier:			os<<"vier";				break;
		case vijf:			os<<"vijf";				break;
		case zes:				os<<"zes";				break;
		case zeven:			os<<"zeven";			break;
		case acht:			os<<"acht";				break;
		case negen:			os<<"negen";			break;
		case tien:			os<<"tien";				break;
		case boer:			os<<"boer";				break;
		case vrouw:			os<<"vrouw";			break;
		case heer:			os<<"heer";				break;
		default: 				os.setstate(std::ios_base::failbit);
	}

	return os;
};

bool operator==( kaart& a,  kaart& b)
{
	return(a.kleur==b.kleur && a.type==b.type);

}

bool operator!=(kaart& a, kaart& b)
{
	return !(a==b);

}
/*kaart* converteer_naar_kaart(std::string  string_kleur, std::string string_type)
{


		kaartkleur input_kleur;
		kaarttype input_type;
		/*
		switch(string_kleur)
		{
			case "harten": 		input_kleur=kaartkleur::harten; break;
			case "ruiten": 		input_kleur=kaartkleur::ruiten; break;
			case "schoppen":	input_kleur=kaartkleur::schoppen; break;
			case "klaveren": 	input_kleur=kaartkleur::klaveren; break;
			default:					std::cout<<"Kaart niet compatibel"std::endl;		return false;
		}

		switch(string_type)
		{
			case "aas":				input_type=kaarttype::aas; break;
			case "7":					input_type=kaarttype::zeven; break;
			case "8":					input_type=kaarttype::acht; break;
			case "9":					input_type=kaarttype::negen;break;
			case "10":				input_type=kaarttype::tien;	break;
			case "boer":			input_type=kaarttype::boer;	break;
			case "vrouw":			input_type=kaarttype::vrouw; break;
			case "heer":			input_type=kaarttype::hear; break;
			default:					std::cout<<"kaart niet compatibel"<<std::endl;
		}
		return 0;
}*/

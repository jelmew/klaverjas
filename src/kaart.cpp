#include "../include/kaart.h"

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


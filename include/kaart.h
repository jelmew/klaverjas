#ifndef KAART_h
#define KAART_h
#include <iostream>
#include <string>
#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <map>
using namespace std;
using namespace boost::assign; // bring 'map_list_of()' into scope

/** Enum voor kleur kaart**/
enum kaartkleur {klaveren, schoppen, harten,ruiten};
/**Enum voor kaarttype**/
enum kaarttype {aas,twee,drie,vier,vijf,zes,zeven,acht,negen,tien,
    boer,vrouw,heer
               };


/**Class kaart. Slaat alle gegevens van een kaart op **/
class kaart {
  public:

    kaart();
    kaart(kaartkleur input_kaartkleur,kaarttype input_kaarttype):
      kleur(input_kaartkleur), type(input_kaarttype) {
      };
    kaart(kaart& other):kleur(other.kleur), type(other.type) {
      };
    ~kaart() {};

    friend std::ostream& operator<<(std::ostream& os, const kaart& print);

    friend bool operator==(kaart& a, kaart& b);
    friend bool operator!=(kaart& a, kaart& b);
    friend bool operator<(kaart&a, kaart&b);




    const kaartkleur kleur;
    const kaarttype type;
  protected:
  private:
  };



#endif

/* Kirill Begaliev st129977@student.spbu.ru
Declaration of Desipticons(evil transformer) transformers - subclass of transformersm
*/

#ifndef Desipticon_hpp
#define Desipticon_hpp

#include "Transformer.hpp"

class Desipticon : public Transformer
{
public:
    Desipticon(Weapon weapon, unsigned health, unsigned size, unsigned strength);
    Desipticon();
    ~Desipticon();

    void rave();

    //get methods
    unsigned get_primary_strength();
    unsigned get_level_of_evil();
    unsigned get_rage();
    bool is_angry();
    bool is_in_rave();

    //set methods
    void set_level_of_evil(unsigned new_level_of_evil);
    void set_rage(unsigned new_rage);
    void calm_down();
    void get_angry();
    
    //virtual methods
    bool transform();
    bool use_ultimate();
    bool die();

private:
    unsigned _primary_strength;
    unsigned _level_of_evil;
    unsigned _rage;
    bool _angry;
    bool _in_rave;
};

#endif //Desipticon_hpp

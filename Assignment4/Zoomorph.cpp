/* Kirill Begaliev st129977@student.spbu.ru
Definiton of Zoomorphs transformers - subclass of transformers
*/

#include <iostream>
#include "Zoomorph.hpp"

Zoomorph :: Zoomorph(Weapon weapon, unsigned health, unsigned size, unsigned strength) : Transformer(weapon, health, size, strength)
{
    _hiding = false;
    _imitating = false;
    _animal_power = 0;
}

Zoomorph :: Zoomorph() : Transformer()
{
    _hiding = false;
    _imitating = false;
    _animal_power = 0;
}

Zoomorph :: ~Zoomorph()
{
    std::cout<< "Zoomorph was destroyed" <<std::endl;
}

//get methods
bool Zoomorph :: is_hiding()
{
    return _hiding;
}

bool Zoomorph :: is_imitating()
{
    return _imitating;
}

unsigned Zoomorph :: get_animal_power()
{
    return _animal_power;
}
        
//set methods
void Zoomorph :: hide()
{
    _hiding = true;
}

void Zoomorph :: imitate()
{
    _imitating = true;
}

void Zoomorph :: unhide()
{
    _hiding = false;
}

void Zoomorph :: unimitate()
{
    _imitating = false;
}

void Zoomorph :: set_animal_power(unsigned new_animal_power)
{
    _animal_power = new_animal_power;
}

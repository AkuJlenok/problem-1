/* Kirill Begaliev st129977@student.spbu.ru
Definiton of Insecticon(transform into insects) transformers - subclass of transformers
*/

#include <iostream>
#include "Insecticon.hpp"

Insecticon :: Insecticon(Weapon weapon, unsigned health, unsigned size, unsigned strength, bool can_fly) : Transformer(weapon, health, size, strength)
{
    _flying = can_fly;
    _in_the_air = false;
    _chitin = 100;
}

Insecticon :: Insecticon()
{
    _flying = false;
    _in_the_air = false;
    _chitin = 100;
}
Insecticon :: ~Insecticon()
{
    std::cout<< "Inseticon was destroyed"<<std::endl;
}

//get methods
bool Insecticon :: is_flying()
{
    return _flying;
}

bool Insecticon :: is_in_the_air()
{
    return _in_the_air;
}

unsigned Insecticon :: get_chitin()
{
    return _chitin;
}

//set methods
void Insecticon :: fly()
{
    if(_flying == true)
    {
        _in_the_air = true;
    }
}

void Insecticon :: land()
{
    _in_the_air = false;
}

void Insecticon :: set_chitin(unsigned new_chitin)
{
    _chitin = new_chitin;
}

/* Kirill Begaliev st129977@student.spbu.ru
Definition of Desipticons(evil transformer) transformers - subclass of transformersm
*/

#include <iostream>
#include "Desipticon.hpp"

Desipticon :: Desipticon(Weapon weapon, unsigned health, unsigned size, unsigned strength) : Transformer(weapon, health, size, strength)
{
    _primary_strength = strength;
    _level_of_evil = 25;
    _rage = 0;
    _angry = false;
    _in_rave = false;
}

Desipticon :: Desipticon()
{
    _primary_strength = get_strength();
    _level_of_evil = 25;
    _rage = 0;
    _angry = false;
    _in_rave = false;
}

Desipticon :: ~Desipticon()
{
    std::cout<< "Desipticon was destroyed" <<std::endl;
}

void Desipticon :: rave()
{
    if ((_rage >= 100) and (_in_rave == false))
    {
        set_strength(get_strength()*2);
        _rage = 0;
        _in_rave = true;
    }
}

//get methods
unsigned Desipticon :: get_primary_strength()
{
    return _primary_strength;
}

unsigned Desipticon :: get_level_of_evil()
{
    return _level_of_evil;
}

unsigned Desipticon :: get_rage()
{
    return _rage;
}

bool Desipticon :: is_angry()
{
    return _angry;
}

bool Desipticon :: is_in_rave()
{
    return _in_rave;
}

//set methods
void Desipticon :: set_level_of_evil(unsigned new_level_of_evil)
{
    _level_of_evil = new_level_of_evil;
}

void Desipticon :: set_rage(unsigned new_rage)
{
    _rage = new_rage;
}

void Desipticon :: calm_down()
{
    _angry = false;
    _in_rave = false;
    set_strength(_primary_strength);
}

void Desipticon :: get_angry()
{
    if (_angry == false)
    {
        _angry = true;
    }

    else
    {
        _rage += _level_of_evil;
        rave();
    }
}

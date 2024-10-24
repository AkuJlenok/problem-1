/* Kirill Begaliev st129977@student.spbu.ru
Transfromer class definition
*/

#include <iostream>
#include "Transformer.hpp"

Transformer :: Transformer()
{
    health = 1000;
    size = 100;
    strength = 150;
}

Transformer :: ~Transformer()
{
    std::cout<< "Transformer was destroyed" <<std::endl;
}

unsigned Transformer :: get_health()
{
    return health;
}

unsigned Transformer :: get_size()
{
    return size;
}

unsigned Transformer :: get_strength()
{
    return strength;
}

void Transformer :: set_health(unsigned new_health)
{
    health = new_health;
}

void Transformer :: set_size(unsigned new_size)
{
    size = new_size;
}

void Transformer :: set_strength(unsigned new_strength)
{
    strength = new_strength;
}

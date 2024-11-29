/* Kirill Begaliev st129977@student.spbu.ru
Definiton of Autobots
*/

#include <iostream>
#include "Autobot.hpp"

Autobot :: Autobot(Weapon weapon, unsigned health, unsigned size, unsigned strength) : Transformer(weapon, health, size, strength)
{
    _humanity = 100;
}

Autobot :: Autobot()
{
    _humanity = 100;
}

Autobot :: ~Autobot()
{
    std::cout<< "Autobot was destroyed"<<std::endl;
}

unsigned Autobot :: get_humanity()
{
    return _humanity;
}

void Autobot :: set_humanity(unsigned humanity)
{
    _humanity = humanity;
}

//virtual methods
bool Autobot :: transform()
{
    std::cout<< "transform() by Autobot" <<std::endl;
    return true;
}

bool Autobot :: use_ultimate()
{
    std::cout<< "use_ultimate() by Autobot" <<std::endl;
    return true;
}

bool Autobot :: die()
{
    std::cout<< "die() by Autobot" <<std::endl;
    return true;
}

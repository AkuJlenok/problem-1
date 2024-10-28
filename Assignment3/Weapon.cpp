/* Kirill Begaliev st129977@student.spbu.ru
Weapon for transformers definition (aggregation)
*/

#include <iostream>
#include "Weapon.hpp"

Weapon :: Weapon(int damage, unsigned cooldown, bool melee, bool range)
{
    _damage = damage;
    _cooldown = cooldown;
    _melee = melee;
    _range = range;
}

Weapon :: Weapon()
{
    _damage = 100;
    _cooldown = 2;
    _melee = false;
    _range = true;
}

Weapon :: ~Weapon()
{
    std::cout<< "Weapon is out of order" <<std::endl;
}

int Weapon :: get_damage()
{
    return _damage;
}

unsigned Weapon :: get_cooldown()
{
    return _cooldown;
}

bool Weapon :: is_weapon_melee()
{
    return _melee;
}

bool Weapon :: is_weapon_range()
{
    return _range;
}

void Weapon :: set_damage(int new_damage)
{
    _damage = new_damage;
}

void Weapon :: set_cooldown(int new_cooldown)
{
    _cooldown = new_cooldown;
}

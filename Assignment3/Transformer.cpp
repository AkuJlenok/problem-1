/* Kirill Begaliev st129977@student.spbu.ru
Transfromer class definition
*/

#include <iostream>
#include "Transformer.hpp"

Transformer :: Transformer(Weapon weapon, unsigned health, unsigned size, unsigned strength)
{
    Communicate_module communicate_module;
    _weapon = weapon;
    _communicate_module = communicate_module;
    _health = health;
    _size = size;
    _strength = strength;
}

Transformer :: Transformer()
{
    Weapon weapon;
    Communicate_module communicate_module;
    _weapon = weapon;
    _communicate_module = communicate_module;
    _health = 1000;
    _size = 100;
    _strength = 150;
}

Transformer :: ~Transformer()
{
    std::cout<< "Transformer was destroyed" <<std::endl;
}

//Methods without definition
bool Transformer :: move()
{
    return false;
}

bool Transformer :: jump()
{
    return false;
}

bool Transformer :: attack()
{
    return false;
}

bool Transformer :: transform()
{
    return false;
}

bool  Transformer :: flip()
{
    return false;
}

//Transformer's stats get or set methods
unsigned Transformer :: get_health()
{
    return _health;
}

unsigned Transformer :: get_size()
{
    return _size;
}

unsigned Transformer :: get_strength()
{
    return _strength;
}

void Transformer :: set_health(unsigned new_health)
{
    _health = new_health;
}

void Transformer :: set_size(unsigned new_size)
{
    _size = new_size;
}

void Transformer :: set_strength(unsigned new_strength)
{
    _strength = new_strength;
}

//Weapon's stats get methods
unsigned Transformer :: get_weapon_cooldown()
{
    return _weapon.get_cooldown();
}

int Transformer :: get_weapon_damage()
{
    return _weapon.get_damage();
}

//Communicate_module stats get methods
bool Transformer :: is_transformer_understand_transformers_language()
{
    return _communicate_module.is_understand_transformers_language();
}

bool Transformer :: is_transformer_understand_humans_language()
{
    return _communicate_module.is_understand_humans_language();
}

bool Transformer :: is_transformer_speak_transformers_language()
{
    return _communicate_module.is_speak_transformers_language();
}

bool Transformer :: is_transformer_speak_humans_language()
{
    return _communicate_module.is_speak_humans_language();
}

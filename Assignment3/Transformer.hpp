/* Kirill Begaliev st129977@student.spbu.ru
Transfromer class declaration
*/

#ifndef Transformer_hpp
#define Transformer_hpp

#include "Weapon.hpp"

class Transformer
{
    public:
        Transformer(Weapon weapon, unsigned health, unsigned size, unsigned strength);
        Transformer();
        ~Transformer();
        
        //methods without definition
        bool move();
        bool jump();
        bool attack();
        bool transform();
        bool flip();
        
        //Transformers stats get or set methods 
        unsigned get_health();
        unsigned get_size();
        unsigned get_strength();
        void set_health(unsigned new_health);
        void set_size(unsigned new_size);
        void set_strength(unsigned new_strength);
        
        //Weapon's stats get methods
        unsigned get_weapon_cooldown();
        int get_weapon_damage();
        
    private:
        Weapon _weapon;
        unsigned _health;
        unsigned _size;
        unsigned _strength;
};

#endif //Transformer_hpp

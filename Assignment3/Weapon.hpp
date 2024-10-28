/* Kirill Begaliev st129977@student.spbu.ru
Weapon's class declaration
*/

#ifndef Weapon_hpp
#define Weapon_hpp

class Weapon
{
    public:
        Weapon(int damage, unsigned cooldown, bool melee, bool range);
        Weapon(); //damage = 100, cooldown = 2, only range
        ~Weapon();
        int get_damage();
        unsigned get_cooldown();
        bool is_weapon_melee();
        bool is_weapon_range();
        void set_damage(int new_damage);
        void set_cooldown(int new_cooldown);
        
    private:
        int _damage; //not unsigned because negative damage means that weapon heals
        unsigned _cooldown;    
        bool _melee;
        bool _range;
};

#endif //Weapon_hpp

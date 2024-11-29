/* Kirill Begaliev st129977@student.spbu.ru
Declaration of Insecticon(transform into insects) transformers - subclass of transformersm
*/

#ifndef Insecticon_hpp
#define Insecticon_hpp

#include "Transformer.hpp"

class Insecticon : public Transformer
{
    public:
        Insecticon(Weapon weapon, unsigned health, unsigned size, unsigned strength, bool can_fly);
        Insecticon();
        ~Insecticon();
        
        //get methods
        bool is_flying();
        bool is_in_the_air();
        unsigned get_chitin();
        
        //set methods
        void fly();
        void land();
        void set_chitin(unsigned new_chitin);
    
    private:
        bool _flying;
        bool _in_the_air;
        unsigned _chitin; //like armor
        
};

#endif //Insecticon_hpp

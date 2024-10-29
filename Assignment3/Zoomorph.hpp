/* Kirill Begaliev st129977@student.spbu.ru
Declaration of Zoomorphs transformers - subclass of transformers
*/

#ifndef Zoomorph_hpp
#define Zoomorph_hpp

#include "Transformer.hpp"

class Zoomorph : public Transformer
{
    public:
        Zoomorph(Weapon weapon, unsigned health, unsigned size, unsigned strength);
        Zoomorph();
        ~Zoomorph();
        
        //get methods
        bool is_hiding();
        bool is_imitating();;
        unsigned get_animal_power();
        
        //set methods
        void hide();
        void imitate();       
        void unhide();
        void unimitate();
        void set_animal_power(unsigned new_animal_power);
    
    private:
        bool _hiding;
        bool _imitating;
        unsigned _animal_power;
        
};

#endif //Zoomorph_hpp

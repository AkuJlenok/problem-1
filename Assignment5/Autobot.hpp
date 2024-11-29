/* Kirill Begaliev st129977@student.spbu.ru
Declaration of Autobots, transformers subclass
*/

#ifndef Autobot_hpp
#define Autobot_hpp

#include "Transformer.hpp"

class Autobot : public Transformer
{
public:
    Autobot(Weapon weapon, unsigned health, unsigned size, unsigned strength);
    Autobot();
    ~Autobot();

    unsigned get_humanity();
    void set_humanity(unsigned humanity);

private:
    unsigned _humanity;

};

#endif //Autobot_hpp

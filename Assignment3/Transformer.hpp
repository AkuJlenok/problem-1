/* Kirill Begaliev st129977@student.spbu.ru
Transfromer class declaration
*/

#ifndef Transformer_hpp
#define Transformer_hpp

class Transformer
{
    public:
        Transformer();
        ~Transformer();
        bool move();
        bool jump();
        bool fire();
        bool transform();
    private:
        unsigned _health;
        unsigned _size;
        unsigned _strength;
}

#endif //Transformer_hpp

/* Kirill Begaliev st129977@student.spbu.ru
Definition of operators overload
*/

#include <iostream>
#include "Overload_operators.hpp"

std::ostream & operator<<(std::ostream & transformer_info, const Transformer & transformer)
{
    return transformer_info << "HP:" << transformer.get_health() << std::endl;
}

bool operator>(Transformer & transformer1, Transformer & transformer2)
{
    if(transformer1.get_strength() > transformer2.get_strength())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<(Transformer & transformer1, Transformer & transformer2)
{
    if(transformer1.get_strength() < transformer2.get_strength())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator==(Transformer & transformer1, Transformer & transformer2)
{
    if(transformer1.get_strength() == transformer2.get_strength())
    {
        return true;
    }
    else
    {
        return false;
    }
}

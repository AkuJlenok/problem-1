/* Kirill Begaliev st129977@student.spbu.ru
Overload operators "<<" to get transformers stats and ">"(greater) "<"(weaker) "="(equal) to compare transformers
*/

#ifndef Overload_operators_hpp
#define Overload_operators_hpp

#include "Transformer.hpp"

std::ostream & operator<<(std::ostream & transformer_info, const Transformer & transformer);

bool operator>(Transformer & transformer1, Transformer & transformer2);
bool operator<(Transformer & transformer1, Transformer & transformer2);
bool operator==(Transformer & transformer1, Transformer & transformer2);

#endif //Overload_operators_hpp

/* Kirill Begaliev st129977@student.spbu.ru
Definition of communicate module for transformers (composition)
*/

#include <iostream>
#include "Communicate_module.hpp"

Communicate_module :: Communicate_module()
{
    _understand_transformers_language = true;
    _understand_humans_language = true;
    _speak_transformers_language = true;
    _speak_humans_language = false;
}

Communicate_module :: ~Communicate_module()
{
    std::cout<< "Communicate_module was disabled or destroyed"<<std::endl;
}

bool Communicate_module :: is_understand_transformers_language()
{
    return _understand_transformers_language;
}

bool Communicate_module :: is_understand_humans_language()
{
    return _understand_humans_language;
}

bool Communicate_module :: is_speak_transformers_language()
{
    return _speak_transformers_language;
}

bool Communicate_module :: is_speak_humans_language()
{
    return _speak_humans_language;
}

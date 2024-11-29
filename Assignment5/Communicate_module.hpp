/* Kirill Begaliev st129977@student.spbu.ru
Declaration of communicate module for transformers (composition)
*/

#ifndef Communicate_module_hpp
#define Communicate_module_hpp

class Communicate_module
{
public:
    Communicate_module();
    ~Communicate_module();

    bool is_understand_transformers_language();
    bool is_understand_humans_language();
    bool is_speak_transformers_language();
    bool is_speak_humans_language();

private:
    bool _understand_transformers_language;
    bool _understand_humans_language;
    bool _speak_transformers_language;
    bool _speak_humans_language;
};

#endif //Communicate_module_hpp

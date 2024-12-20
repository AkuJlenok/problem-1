/* Kirill Begaliev st129977@student.spbu.ru
Template classes
*/

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <vector>

template <typename T>
class TemplateClass {
private:
    T instance;
    int number;
    std::vector<float> vec;

public:
    TemplateClass(T inst, int num, std::vector<float> v) 
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return instance.bar(number, vec);
    }
};

template <>
class TemplateClass<int> {
private:
    int instance;
    int number;
    std::vector<float> vec;

public:
    TemplateClass(int inst, int num, std::vector<float> v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return true;
    }
};

template <>
class TemplateClass<double> {
private:
    double instance;
    int number;
    std::vector<float> vec;

public:
    TemplateClass(double inst, int num, std::vector<float> v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return false;
    }
};
#endif //TEMPLATE_HPP

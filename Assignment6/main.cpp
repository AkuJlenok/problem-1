/* Kirill Begaliev st129977@student.spbu.ru
Template classes
*/

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

class Class1 {
public:
    bool bar(int num, std::vector<float>&) {
        return num > 0;
    }
    
    int c_i_1() { return 1; }
    float c_i_2() { return 1.0f; }
    void c_i_3() {}
};

class Class2 {
public:
    bool bar(int, std::vector<float>& vec) {
        return !vec.empty();
    }

    int c_i_1() { return 2; }
    float c_i_2() { return 2.0f; }
    void c_i_3() {}
};

class Class3 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return num == -static_cast<int>(vec.size());
    }

    int c_i_1() { return 3; }
    float c_i_2() { return 3.0f; }
    void c_i_3() {}
};


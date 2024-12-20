/* Kirill Begaliev st129977@student.spbu.ru
Template classes tests
*/

#include <gtest/gtest.h>
#include "Templates.hpp"


TEST(TemplateTest, Class1True) {
    Class1 obj;
    TemplateClass<Class1> templateObj(obj, 1, {});
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateTest, Class1False) {
    Class1 obj;
    TemplateClass<Class1> templateObj(obj, -1, {});
    EXPECT_FALSE(templateObj.foo());
}

TEST(TemplateTest, Class2True) {
    Class2 obj;
    std::vector<float> vec = {1.0f, 2.0f};
    TemplateClass<Class2> templateObj(obj, 0, vec);
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateTest, Class2False) {
    Class2 obj;
    std::vector<float> vec;
    TemplateClass<Class2> templateObj(obj, 0, vec);
    EXPECT_FALSE(templateObj.foo());
}

TEST(TemplateTest, Class3True) {
    Class3 obj;
    std::vector<float> vec(3, 0.0f);
    TemplateClass<Class3> templateObj(obj, -3, vec);
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateTest, Class3False) {
    Class3 obj;
    std::vector<float> vec(2, 0.0f);
    TemplateClass<Class3> templateObj(obj, -3, vec);
    EXPECT_FALSE(templateObj.foo());
}

TEST(TemplateTest, IntSpecialization) {
    int param = 0;
    TemplateClass<int> templateObj(param, 0, {});
    EXPECT_TRUE(templateObj.foo());
}

TEST(TemplateTest, DoubleSpecialization) {
    double param = 0.0;
    TemplateClass<double> templateObj(param, 0, {});
    EXPECT_FALSE(templateObj.foo());
}

int test() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

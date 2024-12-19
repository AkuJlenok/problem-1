/* Kirill Begaliev st129977@student.spbu.ru
Virtual methods tests
*/

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "Desipticon.hpp"
#include "Autobot.hpp"

TEST(Virtual_methods, correctness_of_virtual_methods)
{
    std::vector<Transformer*> army;
    
    for(int i = 0; i<3; ++i)
    {
        army.push_back(new Transformer());
        army.push_back(new Autobot());
        army.push_back(new Desipticon());
    }
    
    for(unsigned int j = 0; j < army.size(); ++j)
    {
        EXPECT_TRUE(army[j]->transform());
        EXPECT_TRUE(army[j]->use_ultimate());
        EXPECT_TRUE(army[j]->die());
    }
    
    army.clear();
    army.shrink_to_fit();
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

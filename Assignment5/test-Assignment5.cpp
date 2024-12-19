/* Kirill Begaliev st129977@student.spbu.ru
Virtual methods tests
*/

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include "Desipticon.hpp"
#include "Autobot.hpp"

TEST(Virtual_methods, Transformer) {
    Transformer Zolo;
    EXPECT_TRUE(Zolo.transform());
    EXPECT_TRUE(Zolo.use_ultimate());
    EXPECT_TRUE(Zolo.die());
}

TEST(Virtual_methods, Autobot) {
    Autobot Zolo;
    EXPECT_TRUE(Zolo.transform());
    EXPECT_TRUE(Zolo.use_ultimate());
    EXPECT_TRUE(Zolo.die());
}

TEST(Virtual_methods, Desipticon) {
    Desipticon Zolo;
    EXPECT_TRUE(Zolo.transform());
    EXPECT_TRUE(Zolo.use_ultimate());
    EXPECT_TRUE(Zolo.die());
}

TEST(Virtual_methods, cycle_test) {
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

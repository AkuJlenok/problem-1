/* Kirill Begaliev st129977@student.spbu.ru
tests for all classes
*/

#include <gtest/gtest.h>
#include <iostream>
#include "Transformer.hpp"

TEST(Transformers_tests, default_constructor)
{
    Transformer Zolo;
    EXPECT_EQ(Zolo.get_health(), 1000);
    EXPECT_EQ(Zolo.get_size(), 100);
    EXPECT_EQ(Zolo.get_strength(), 150);
    EXPECT_EQ(Zolo.get_weapon_damage(), 100);
    EXPECT_EQ(Zolo.get_weapon_cooldown(), 2);
    EXPECT_EQ(Zolo.is_transformer_understand_transformers_language(), true);
    EXPECT_EQ(Zolo.is_transformer_understand_humans_language(), true);
    EXPECT_EQ(Zolo.is_transformer_speak_transformers_language(), true);
    EXPECT_EQ(Zolo.is_transformer_speak_humans_language(), false);
}

TEST(Transformers_tests, constructor)
{
    Weapon plazma_gun(1250, 15, false, true);
    Transformer Zolo(plazma_gun, 2000, 200, 100);
    EXPECT_EQ(Zolo.get_health(), 2000);
    EXPECT_EQ(Zolo.get_size(), 200);
    EXPECT_EQ(Zolo.get_strength(), 100);
    EXPECT_EQ(Zolo.get_weapon_damage(), 1250);
    EXPECT_EQ(Zolo.get_weapon_cooldown(), 15);
    EXPECT_EQ(Zolo.is_transformer_understand_transformers_language(), true);
    EXPECT_EQ(Zolo.is_transformer_understand_humans_language(), true);
    EXPECT_EQ(Zolo.is_transformer_speak_transformers_language(), true);
    EXPECT_EQ(Zolo.is_transformer_speak_humans_language(), false);
}
//in Transformers_tests already checks weapon's constructors 

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

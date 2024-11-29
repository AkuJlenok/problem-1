/* Kirill Begaliev st129977@student.spbu.ru
tests for all classes
*/

#include <gtest/gtest.h>
#include <iostream>
#include "Zoomorph.hpp"
#include "Insecticon.hpp"
#include "Desipticon.hpp"

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
//in Transformers_tests already checked get methods of Transformer, Weapon and Communicate_module classes and their constructors

TEST(Transformers_tests, set_methods)
{
    Transformer Zolo;
    Zolo.set_health(900);
    Zolo.set_size(120);
    Zolo.set_strength(9999);
    EXPECT_EQ(Zolo.get_health(),900);
    EXPECT_EQ(Zolo.get_size(),120);
    EXPECT_EQ(Zolo.get_strength(),9999);
}

TEST(Weapon_tests, set_methods)
{
    Weapon axe(40,2,true,false);
    axe.set_damage(100);
    axe.set_cooldown(1);
    EXPECT_EQ(axe.get_damage(),100);
    EXPECT_EQ(axe.get_cooldown(),1);
    EXPECT_EQ(axe.is_weapon_melee(), true);
    EXPECT_EQ(axe.is_weapon_range(),false);
}

TEST(Zoomorph_tests, default_constructor)
{
    Zoomorph Zolo;
    EXPECT_EQ(Zolo.is_hiding(), false);
    EXPECT_EQ(Zolo.is_imitating(), false);
    EXPECT_EQ(Zolo.get_animal_power(), 0);
}

TEST(Zoomorph_tests, constructor)
{
    Weapon deathgun(300,3,true,false);
    Zoomorph Zolo(deathgun,2000,200,100);
    EXPECT_EQ(Zolo.is_hiding(), false);
    EXPECT_EQ(Zolo.is_imitating(), false);
    EXPECT_EQ(Zolo.get_animal_power(), 0);
    EXPECT_EQ(Zolo.get_health(), 2000);
    EXPECT_EQ(Zolo.get_size(), 200);
    EXPECT_EQ(Zolo.get_strength(), 100);
    EXPECT_EQ(Zolo.get_weapon_damage(), 300);
    EXPECT_EQ(Zolo.get_weapon_cooldown(), 3);
}

TEST(Zoomorph_tests, set_methods)
{
    Zoomorph Zolo;
    Zolo.hide();
    EXPECT_EQ(Zolo.is_hiding(),true);
    Zolo.imitate();
    EXPECT_EQ(Zolo.is_imitating(),true);
    Zolo.unhide();
    EXPECT_EQ(Zolo.is_hiding(),false);
    Zolo.unimitate();
    EXPECT_EQ(Zolo.is_hiding(),false);
    Zolo.set_animal_power(100);
    EXPECT_EQ(Zolo.get_animal_power(),100);
}

TEST(Insecticon_tests, default_constructor)
{
    Insecticon Zolo;
    EXPECT_EQ(Zolo.is_flying(), false);
    EXPECT_EQ(Zolo.is_in_the_air(), false);
    EXPECT_EQ(Zolo.get_chitin(), 100);
}

TEST(Insecticon_tests, constructor)
{
    Weapon fangs(50,1,true,false);
    Insecticon Zolo(fangs,2000,200,100,true);
    EXPECT_EQ(Zolo.is_flying(), true);
    EXPECT_EQ(Zolo.is_in_the_air(), false);
    EXPECT_EQ(Zolo.get_chitin(), 100);
    EXPECT_EQ(Zolo.get_health(), 2000);
    EXPECT_EQ(Zolo.get_size(), 200);
    EXPECT_EQ(Zolo.get_strength(), 100);
    EXPECT_EQ(Zolo.get_weapon_damage(), 50);
    EXPECT_EQ(Zolo.get_weapon_cooldown(), 1);
}

TEST(Insecticon_tests, set_methods)
{
    Weapon tusk(100,1,true,false);
    Insecticon Zolo(tusk,2000,200,100,true);
    Zolo.fly();
    EXPECT_EQ(Zolo.is_in_the_air(), true);
    Zolo.land();
    EXPECT_EQ(Zolo.is_in_the_air(), false);
    EXPECT_EQ(Zolo.get_chitin(), 100);
}

TEST(Desipticon_tests, default_constructor)
{
    Desipticon Zolo;
    EXPECT_EQ(Zolo.get_primary_strength(), Zolo.get_strength());
    EXPECT_EQ(Zolo.get_level_of_evil(), 25);
    EXPECT_EQ(Zolo.get_rage(), 0);
    EXPECT_EQ(Zolo.is_angry(), false);
}

TEST(Desipticon_tests, constructor)
{
    Weapon laser_sword(200,1,true,false);
    Desipticon Zolo(laser_sword,2000,200,100);
    EXPECT_EQ(Zolo.get_primary_strength(), Zolo.get_strength());
    EXPECT_EQ(Zolo.get_level_of_evil(), 25);
    EXPECT_EQ(Zolo.get_rage(), 0);
    EXPECT_EQ(Zolo.is_angry(), false);
    EXPECT_EQ(Zolo.get_health(), 2000);
    EXPECT_EQ(Zolo.get_size(), 200);
    EXPECT_EQ(Zolo.get_strength(), 100);
    EXPECT_EQ(Zolo.get_weapon_damage(), 200);
    EXPECT_EQ(Zolo.get_weapon_cooldown(), 1);
}

TEST(Desipticon_tests, set_methods)
{
    Desipticon Zolo;
    Zolo.set_level_of_evil(50);
    EXPECT_EQ(Zolo.get_level_of_evil(), 50);
    Zolo.set_rage(80);
    EXPECT_EQ(Zolo.get_rage(), 80);
    Zolo.get_angry();
    EXPECT_EQ(Zolo.is_in_rave(), false);
    EXPECT_EQ(Zolo.is_angry(), true);
    Zolo.get_angry();
    EXPECT_EQ(Zolo.is_in_rave(), true);
    EXPECT_EQ(Zolo.is_angry(), true);
    EXPECT_EQ(Zolo.get_strength(), Zolo.get_primary_strength()*2);
    Zolo.calm_down();
    EXPECT_EQ(Zolo.is_in_rave(), false);
    EXPECT_EQ(Zolo.is_angry(), false);
    EXPECT_EQ(Zolo.get_strength(), Zolo.get_primary_strength());
}

int main()
{
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}

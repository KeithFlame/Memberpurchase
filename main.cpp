#include "member_shopping.h"
#include"gtest/gtest.h"


TEST(CMailTest, test_when_member_GOLD_buy_a_coffee) {
	CMail oneshopping;
	oneshopping.checkMemberRank('A');
	//oneshopping.countChocolates(0);
	//oneshopping.countCoffeeCups(0);
	//oneshopping.countFruitTea(0);
	oneshopping.countNestCoffee(1);
	EXPECT_EQ(48, oneshopping.calcCost());
}
TEST(CMailTest, test_when_member_NON_buy_a_coffee) {
	CMail oneshopping;
	//oneshopping.checkMemberRank();
	//oneshopping.countChocolates(0);
	//oneshopping.countCoffeeCups(0);
	//oneshopping.countFruitTea(0);
	oneshopping.countNestCoffee(1);
	EXPECT_EQ(48, oneshopping.calcCost());
}

TEST(CMailTest, test_when_member_NON_buy_a_coffee_and_5_chocolates) {
	CMail oneshopping;
	oneshopping.checkMemberRank('B');
	oneshopping.countChocolates(5);
	//oneshopping.countCoffeeCups(0);
	//oneshopping.countFruitTea(0);
	oneshopping.countNestCoffee(1);
	EXPECT_EQ(279.8, oneshopping.calcCost());
}

TEST(CMailTest, test_when_member_NON_buy_a_coffee_and_1_chocolate_and_1_tea_and_3_cups) {
	CMail oneshopping;
	oneshopping.checkMemberRank('B');
	oneshopping.countChocolates(5);
	oneshopping.countCoffeeCups(3);
	oneshopping.countFruitTea(1);
	oneshopping.countNestCoffee(1);
	EXPECT_EQ(562.9, oneshopping.calcCost());
}

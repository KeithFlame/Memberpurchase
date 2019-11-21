#include "member_shopping.h"
#include"gtest/gtest.h"

//浮点数比较不要用EXPECT_EQ
//测试用例的文件名最好采用test_XXXX.cpp
//现实需求中，往往是商店里有上万种商品，而单个用户一次只会购买较少种类的商品。目前的实现会有啥问题？
//考虑到实际的收银过程，同一种类的商品有可能会分几次扫描、计价，目前的实现能否满足需求？
//例如：oneshopping.countNestCoffee(1); oneshopping.countNestCoffee(3); 最终结果应该给是48*3
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

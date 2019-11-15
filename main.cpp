#include "member_shopping.h"

int main() {
	CMail oneshopping;
	oneshopping.checkMemberRank('A');
	oneshopping.countChocolates(5);
	oneshopping.countCoffeeCups(0);
	oneshopping.countFruitTea(0);
	oneshopping.countNestCoffee(1);
	oneshopping.calcCost();
	return 0;
}
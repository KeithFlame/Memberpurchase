#include"member_shopping.h"


void CMail::calcArrange() {
	m_goods["NestCoffee"] = -48;
	m_goods["CoffeeCups"] = 60;
	m_goods["Chocolates"] = 48.8;
	m_goods["FruitTea"] = 118;

}
void CMail::countNestCoffee(int coffee) {
	m_countcost["000001"] = coffee * m_goods["NestCoffee"];
}
void CMail::countCoffeeCups(int cups) {
	m_countcost["000002"] = cups * m_goods["CoffeeCups"];

}
void CMail::countChocolates(int chocolates) {
	m_countcost["000003"] = chocolates * m_goods["Chocolates"];

}
void CMail::countFruitTea(int tea) {
	m_countcost["000004"] = tea * m_goods["FruitTea"];

}
void CMail::checkMemberRank(char memberrank) {
	if (memberrank == 'A')
		m_memberDiscount = 0.9;
	else if (memberrank == 'B')
		m_memberDiscount = 0.95;
	else
		m_memberDiscount = 1;
	//cout << "Confirm your ranks: " << memberrank
	//	<< " or modify it !";
}
void CMail::calcCost() {
	float m(0);
	map<string, int>::iterator 
		iter = m_countcost.begin(), 
		iter_end = m_countcost.end();

	while (iter != iter_end)
	{
		if (iter->second > 0)
			m = iter->second * m_memberDiscount + m;
		if (iter->second < 0)
			m = iter->second * (-1) + m;
		++iter;
	}
	printf("You should pay for %.2f Yuan. ",m);
}
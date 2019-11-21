#include"member_shopping.h"


void CMail::calcArrange() {
	//为啥是负值？老板疯了？
	//m_goods命名成m_price，会不会更可读？
	m_goods["NestCoffee"] = -48.f;
	m_goods["CoffeeCups"] = 60.f;
	m_goods["Chocolates"] = 48.8f;
	m_goods["FruitTea"] = 118.f;

}
void CMail::countNestCoffee(double coffee) {
	//用名称而不是编号，会不会更直观？
	m_countcost["000001"] = coffee * m_goods["NestCoffee"];
}
void CMail::countCoffeeCups(double cups) {
	m_countcost["000002"] = cups * m_goods["CoffeeCups"];

}
void CMail::countChocolates(double chocolates) {
	m_countcost["000003"] = chocolates * m_goods["Chocolates"];

}
void CMail::countFruitTea(double tea) {
	m_countcost["000004"] = tea * m_goods["FruitTea"];

}
void CMail::checkMemberRank(char memberrank) {
	if (memberrank == 'A')
		m_memberDiscount = 0.9f;
	else if (memberrank == 'B')
		m_memberDiscount = 0.95f;
	else
		m_memberDiscount = 1.f;
	//cout << "Confirm your ranks: " << memberrank
	//	<< " or modify it !";
}
double CMail::calcCost() {
	double m(0);
	map<string, double>::iterator
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
	return m;
}

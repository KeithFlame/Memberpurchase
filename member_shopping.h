#pragma once
#include<iostream>
#include<map>
#include<string>
using namespace std;

class CMail {
public:
	CMail() {
		calcArrange();
	};
	void calcCost();
	void checkMemberRank(char memberrank = 0);
	void countNestCoffee(int coffee = 0);
	void countCoffeeCups(int cups = 0);
	void countChocolates(int chocolates = 0);
	void countFruitTea(int tea = 0);
private:
	void calcArrange();
	float m_memberDiscount = 1.0;
	map<string, int> m_goods;
	map<string, int> m_countcost;
};

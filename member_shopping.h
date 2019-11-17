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
	double calcCost();
	void checkMemberRank(char memberrank = 0);
	void countNestCoffee(double coffee = 0);
	void countCoffeeCups(double cups = 0);
	void countChocolates(double chocolates = 0);
	void countFruitTea(double tea = 0);
private:
	void calcArrange();
	double m_memberDiscount = 1.0;
	map<string, double> m_goods;
	map<string, double> m_countcost;
};

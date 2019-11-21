#pragma once
#include<iostream>
#include<map>
#include<string>
//不要在头文件里using namespace或者using std::map
//想想为啥
using namespace std;

//为啥取名叫CMail，含义?
class CMail {
public:
	CMail() {
		calcArrange();
	};
	double calcCost();
	void checkMemberRank(char memberrank = 0);
	//随着产品种类的增加，这个类的接口会不会爆炸？
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

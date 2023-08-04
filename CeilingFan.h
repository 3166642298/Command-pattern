#pragma once
#ifndef CEILINGFAN_H
#define CEILINGFAN_H
#include<iostream>
using namespace std;
class CeilingFan {
public:
	static const int HIGH = 3;
	static const int MEDIUM = 2;
	static const int LOW = 1;
	static const int OFF = 0;
	string name;
	int speed;
	CeilingFan() = default;
	CeilingFan(string name);
	void high();
	void medium();
	void low();
	void off();
	int getSpeed();
};
#endif // !CEILINGFAN_H

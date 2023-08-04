#pragma once
#ifndef LIGHT_H
#define LIGHT_H
#include<iostream>
using namespace std;
class Light {
public:
	string name;
	Light() = default;
	Light(string name);
	void on();
	void off();
};
#endif // !LIGHT_H

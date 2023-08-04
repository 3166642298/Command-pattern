#include "CeilingFan.h"

CeilingFan::CeilingFan(string name)
{
	this->name = name;
	speed = OFF;
}

void CeilingFan::high()
{
	this->speed = HIGH;
	cout << "电风扇改为3挡" << endl;
}

void CeilingFan::medium()
{
	this->speed = MEDIUM;
	cout << "电风扇改为2挡" << endl;
}

void CeilingFan::low()
{
	this->speed =LOW;
	cout << "电风扇改为1挡" << endl;
}

void CeilingFan::off()
{
	this->speed = OFF;
	cout << "电风扇关闭" << endl;
}

int CeilingFan::getSpeed()
{
	return this->speed;
}

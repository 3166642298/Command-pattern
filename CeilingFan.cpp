#include "CeilingFan.h"

CeilingFan::CeilingFan(string name)
{
	this->name = name;
	speed = OFF;
}

void CeilingFan::high()
{
	this->speed = HIGH;
	cout << "����ȸ�Ϊ3��" << endl;
}

void CeilingFan::medium()
{
	this->speed = MEDIUM;
	cout << "����ȸ�Ϊ2��" << endl;
}

void CeilingFan::low()
{
	this->speed =LOW;
	cout << "����ȸ�Ϊ1��" << endl;
}

void CeilingFan::off()
{
	this->speed = OFF;
	cout << "����ȹر�" << endl;
}

int CeilingFan::getSpeed()
{
	return this->speed;
}

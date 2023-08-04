#include "Light.h"

Light::Light(string name)
{
	this->name = name;
}

void Light::on()
{
	cout <<this->name<<" is openning" << endl;
}

void Light::off()
{
	cout << this->name << " is offing" << endl;
}


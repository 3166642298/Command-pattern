#pragma once
#ifndef COMMAND_H
#define COMMAND_H
#include<iostream>
using namespace std;
class Command {
public:
	virtual void execute();//ִ�ж���
	virtual void undo();//ִ�г���
};
#endif

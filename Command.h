#pragma once
#ifndef COMMAND_H
#define COMMAND_H
#include<iostream>
using namespace std;
class Command {
public:
	virtual void execute();//执行动作
	virtual void undo();//执行撤销
};
#endif

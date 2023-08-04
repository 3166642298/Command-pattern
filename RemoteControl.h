#pragma once
#ifndef REMOVECONTROL_H
#define REMOVECONTROL_H
#include"Command.h"
#include<iostream>
using namespace std;
class RemoveControl {
private:
	Command* onCommands[7];
	Command* offCommand[7];
	Command* undoCommand;
public:
	RemoveControl();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);//��Ӧ����ť
	void offButtonWasPushed(int slot);//��Ӧ�ذ�ť
	void undoButtonWasPushed();//ʵ�ֳ���
};
#endif

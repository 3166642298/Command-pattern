#pragma once
#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H
#include"Command.h"
#include"CeilingFan.h"
class CeilingFanHighCommand :public Command {
private:
	CeilingFan* ceilingFan;
	int prevSpeed;
public:
	CeilingFanHighCommand() = default;
	CeilingFanHighCommand(CeilingFan* ceiling);
	void execute() override;
	void undo() override;
};
#endif // !CEILINGFANHIGHCOMMAND_H

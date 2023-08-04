#pragma once
#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H
#include"Command.h"
#include"CeilingFan.h"
class CeilingFanMediumCommand :public Command {
private:
	CeilingFan* ceilingFan;
	int prevSpeed;
public:
	CeilingFanMediumCommand() = default;
	CeilingFanMediumCommand(CeilingFan* ceiling);
	void execute() override;
	void undo() override;
};
#endif 

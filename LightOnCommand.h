#pragma once
#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include"Command.h"
#include"Light.h"
class LightOnCommand :public Command {
private:
	Light* light;
public:
	LightOnCommand() = default;
	LightOnCommand(Light* light);
	void execute() override;
	void undo() override;
};
#endif // !LIGHTONCOMMAND_H

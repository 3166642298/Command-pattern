#pragma once
#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include"Command.h"
#include"Light.h"
class LightOffCommand :public Command {
private:
	Light* light;
public:
	LightOffCommand() = default;
	LightOffCommand(Light* light);
	void execute() override;
	void undo() override;
};
#endif // !LIGHTOFFCOMMAND_H

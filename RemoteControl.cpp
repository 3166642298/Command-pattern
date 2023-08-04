#include "RemoteControl.h"

RemoveControl::RemoveControl()
{
	for (int i = 0; i < 7; i++)
	{
		onCommands[i] = nullptr;
		offCommand[i] = nullptr;
	}
	undoCommand = nullptr;
}

void RemoveControl::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	this->onCommands[slot] = onCommand;
	this->offCommand[slot] = offCommand;
}

void RemoveControl::onButtonWasPushed(int slot)
{
	onCommands[slot]->execute();
	undoCommand = onCommands[slot];
}

void RemoveControl::offButtonWasPushed(int slot)
{
	offCommand[slot]->execute();
	undoCommand = offCommand[slot];
}

void RemoveControl::undoButtonWasPushed()
{
	undoCommand->undo();
}

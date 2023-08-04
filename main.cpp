#include<iostream>
#include"Command.h"
#include"RemoteControl.h"
#include"Light.h"
#include"LightOnCommand.h"
#include"LightOffCommand.h"
#include"CeilingFan.h"
#include"CeilingFanHighCommand.h"
#include"CeilingFanMediumCommand.h"
using namespace std;
int main()
{
	RemoveControl removeControl;

	Light* livingRoomLight = new Light("客厅灯");
	Light* kitchenLight = new Light("厨房灯");
	LightOnCommand* lightOnCommand_livingRoom = new LightOnCommand(livingRoomLight);
	LightOffCommand* lightOffCommand_livingRoom = new LightOffCommand(livingRoomLight);
	LightOnCommand* lightOnCommand_kitchen = new LightOnCommand(kitchenLight);
	LightOffCommand* lightOffCommand_kitchen = new LightOffCommand(kitchenLight);

	removeControl.setCommand(0, lightOnCommand_livingRoom, lightOffCommand_livingRoom);
	removeControl.setCommand(1, lightOnCommand_kitchen , lightOffCommand_kitchen);

	removeControl.onButtonWasPushed(0);
	removeControl.onButtonWasPushed(1);
	removeControl.undoButtonWasPushed();
	removeControl.offButtonWasPushed(0);
	removeControl.offButtonWasPushed(1);

	CeilingFan* ceilingFan = new CeilingFan("电风扇");
	CeilingFanHighCommand* ceilingFanHighCommand = new CeilingFanHighCommand(ceilingFan);
	CeilingFanMediumCommand* ceilingFanMediumCommand = new CeilingFanMediumCommand(ceilingFan);
	removeControl.setCommand(2, ceilingFanHighCommand, ceilingFanMediumCommand);

	removeControl.onButtonWasPushed(2);
	removeControl.offButtonWasPushed(2);
	removeControl.undoButtonWasPushed();
	return 0;
}
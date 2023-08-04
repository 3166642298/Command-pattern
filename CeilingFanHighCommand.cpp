#include "CeilingFanHighCommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan* ceiling)
{
	prevSpeed = ceilingFan->OFF;
	this->ceilingFan = ceiling;
}

void CeilingFanHighCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	this->ceilingFan->high();
}

void CeilingFanHighCommand::undo()
{
	if (prevSpeed == CeilingFan::HIGH)
	{
		ceilingFan->high();
	}
	else if (prevSpeed == CeilingFan::MEDIUM)
	{
		ceilingFan->medium();
	}
	else if (prevSpeed == CeilingFan::LOW)
	{
		ceilingFan->low();
	}
	else {
		ceilingFan->off();
	}
}

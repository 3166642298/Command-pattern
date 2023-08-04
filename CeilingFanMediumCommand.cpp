#include "CeilingFanMediumCommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan* ceiling)
{
	prevSpeed = ceilingFan->OFF;
	this->ceilingFan = ceiling;
}

void CeilingFanMediumCommand::execute()
{
	prevSpeed = ceilingFan->getSpeed();
	this->ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
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

#pragma once
#include "libs.h"
class Discord
{
public:
	bool SetInfo(const char* applicationID);
	bool Deploy(const char* state, const char* details , int timeStamp, int endTimeStamp);
};


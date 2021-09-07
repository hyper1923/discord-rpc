#include "Discord.h"




bool Discord::SetInfo(const char* applicationID) {
	DiscordEventHandlers handle;
	memset(&handle, 0, sizeof(handle));
	Discord_Initialize(applicationID, &handle, 1, NULL);
	return true;
}


bool Discord::Deploy(const char* state,const char* details,int timeStamp, int endTimeStamp) {
	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.smallImageKey = "key";
	discordPresence.state = state;
	discordPresence.details = details;
	discordPresence.startTimestamp = timeStamp;
	discordPresence.endTimestamp = endTimeStamp;
	Discord_UpdatePresence(&discordPresence);
	return true;
}

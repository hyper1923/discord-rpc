#include <iostream>
#include "Discord.h"

using namespace std;;



int main() {
	Discord* discord = new Discord();
	discord->SetInfo("your_id_goes_here");
	discord->Deploy("DiscordTest", "Playing you!", 1626361425, 1626361425);
	std::getchar(); //For CPU Saving..
	
}
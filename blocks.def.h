//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "internet", 60, 9},
    {"", "pacupdate", 60, 9},
    {"", "volume2", 0, 10},
    {"", "battery3", 1, 11},
	{" ", "date '+%H:%M | %d.%m.%Y'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;

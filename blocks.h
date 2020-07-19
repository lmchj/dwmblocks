//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"", "~/.local/bin/statusbar/currency",	14400, 5},*/
	{"", "~/.local/bin/statusbar/music",	0, 11},
	{"", "~/.local/bin/statusbar/wttr",	1800, 5},
	{"", "~/.local/bin/statusbar/cal", 60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

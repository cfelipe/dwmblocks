//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
      /*Icon*/	                      /*Command*/		       /*Update Interval*/	/*Update Signal*/
	{"",            "bash $HOME/.config/scripts/bar/bar-mpd",	            10,		        10},
	{"",            "bash $HOME/.config/scripts/bar/bar-volume",	        0,		        11},
	{"",            "bash $HOME/.config/scripts/bar/bar-battery",	        60,		        12},
	{"",            "bash $HOME/.config/scripts/bar/bar-cputemp",	        30,		        13},
	{"",            "bash $HOME/.config/scripts/bar/bar-memory",	        30,		        14},
	{"",            "bash $HOME/.config/scripts/bar/bar-filesystem",	    3600,		      15},
	{" ",           "bash $HOME/.config/scripts/bar/bar-weather",	        3600,		      16},
	{"",            "bash $HOME/.config/scripts/bar/bar-clock",	          60,		        17},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

#define CMDLENGTH 100
#define DELIMITER " "
#define CLICKABLE_BLOCKS 1

const Block blocks[] = {
	BLOCK("clock",	      60,   1),
	BLOCK("cpuusage",		5,	17),
	BLOCK("cputemp",		5,	15),
	BLOCK("gputemp",		5,	15),
	BLOCK("memory",	10,	14),
	BLOCK("volume",	0,	   10),
	BLOCK("internet",	30,  	4),
	BLOCK("nettraf",	1, 	18),
	BLOCK("system-icon",	0, 	13)
};

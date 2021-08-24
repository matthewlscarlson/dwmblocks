// dwmblocks

// cmd length
#define CMDLENGTH 25

// delimiter
#define DELIMITER " | "

// block
typedef struct {
	char* command;
	unsigned int interval;
	unsigned int signal;
	char output[CMDLENGTH];
	int pipe[2];
} Block;

// blocks
static Block blocks[] = {
    {"music.sh",   1, 1},
    {"pkgs.sh",    1, 2},
    {"mail.sh",    1, 3},
    {"rss.sh",     1, 4},
    {"net.sh",     1, 5},
    {"vol.sh",     1, 6},
    {"monitor.sh", 1, 7},
    {"time.sh",    1, 8},
    {"date.sh",    1, 9}};

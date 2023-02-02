#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "libs/libft/libft.h"

struct data{
	char **comm;
	char *path;
	char *aux;
	int inFile;
	int outFile;
	pid_t childpid;
};

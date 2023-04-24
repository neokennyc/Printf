#include <stdio.h>
#include <unistd.h>
#include "main.h"

int writeout(char ch)
{

	return(write(1, &ch, 1));
}

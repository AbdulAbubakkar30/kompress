#ifndef NUM_FILE_H
#define NUM_FILE_H

#include <stdio.h>
#include <sys/types.h>

#include "utils.h"

typedef struct
{
	FILE* f;
	ulong sz;

	uchar* cr;
	uint crSz;

} NumFile;

#endif
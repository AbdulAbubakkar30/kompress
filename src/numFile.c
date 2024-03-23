#include "../inc/numFile.h"
#include <stdio.h>
#include <stdlib.h>

void CopyNumFile(NumFile from, NumFile to)
{
	if(from.sz < 1) return;

	uchar* c;

	if(from.sz < MAX_SINGLE_BUFFER_SIZE)
	{
		c = malloc(from.sz);
		fread(c, 1, from.sz, from.f);
		fwrite(c, 1, from.sz, to.f);
	}
	else
	{
		c = malloc(MAX_SINGLE_BUFFER_SIZE);
		ulong n = from.sz / MAX_SINGLE_BUFFER_SIZE;
		for(int i = 0; i < n; i++)
		{
			fread(c, 1, MAX_SINGLE_BUFFER_SIZE, from.f);
			fwrite(c, 1, MAX_SINGLE_BUFFER_SIZE, to.f);
		}

		n = from.sz - n;
		fread(c, 1, n, from.f);
		fwrite(c, 1, n, to.f);
	}

	free(c);
}
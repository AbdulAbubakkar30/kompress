#include "../inc/utils.h"
#include <math.h>

const ulong UINT_BYTES = sizeof(uint);
const ulong UINT_BITS = UINT_BYTES * 8;

const ulong MAX_QUADRUPLE_BUFFER_SIZE = 10;
const ulong MAX_SINGLE_BUFFER_SIZE = MAX_QUADRUPLE_BUFFER_SIZE * 4;
const ulong MAX_DOUBLE_BUFFER_SIZE = MAX_QUADRUPLE_BUFFER_SIZE * 2;
const ulong MAX_TRIPLE_BUFFER_SIZE = MAX_SINGLE_BUFFER_SIZE * 3;
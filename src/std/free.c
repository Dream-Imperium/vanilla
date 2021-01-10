#include <vanilla/cpu.h>
#include <vanilla/std.h>

#include "__int__.h"

void *
c_std_free_(void *p)
{
	return __allocator(p, 0, sizeof(uchar));
}

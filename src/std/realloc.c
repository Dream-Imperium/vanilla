#include <vanilla/cpu.h>
#include <vanilla/std.h>

#include "__int__.h"

void *
c_std_realloc(void *p, usize m, usize n)
{
	return __allocator(p, m, n);
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

#include "__int__.h"

void *
c_std_alloc(usize m, usize n)
{
	return __allocator(nil, m, n);
}

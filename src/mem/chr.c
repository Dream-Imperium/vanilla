#include <vanilla/cpu.h>
#include <vanilla/std.h>

void *
c_mem_chr(void *v, usize n, int c)
{
	uchar *s;

	s = v;
	for (; n; --n) {
		if (*s == c)
			return s;
		++s;
	}
	return nil;
}

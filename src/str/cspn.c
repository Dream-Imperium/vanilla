#include <vanilla/cpu.h>
#include <vanilla/std.h>

usize
c_str_cspn(char *v, usize n, char *reject)
{
	uchar *s, *p;

	s = (uchar *)v;
	for (; n && *s; --n) {
		for (p = (uchar *)reject; *p && *s != *p; ++p) ;
		if (*p)
			break;
		++s;
	}
	return s - (uchar *)v;
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

char *
c_uint_64bigpack(char *s, u64int u)
{
	s[7] = u & 255;
	u >>= 8;
	s[6] = u & 255;
	u >>= 8;
	s[5] = u & 255;
	u >>= 8;
	s[4] = u & 255;
	u >>= 8;
	s[3] = u & 255;
	u >>= 8;
	s[2] = u & 255;
	u >>= 8;
	s[1] = u & 255;
	s[0] = u >> 8;
	return s;
}

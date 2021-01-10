#include <vanilla/cpu.h>
#include <vanilla/std.h>

u16int
c_uint_16unpack(char *s)
{
	u16int r;

	r = (uchar)s[1];
	r <<= 8;
	r += (uchar)s[0];
	return r;
}

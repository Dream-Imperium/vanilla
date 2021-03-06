#include <vanilla/cpu.h>
#include <vanilla/std.h>

u64int
c_uint_64unpack(char *s)
{
	u64int r;

	r = (uchar)s[7];
	r <<= 8;
	r += (uchar)s[6];
	r <<= 8;
	r += (uchar)s[5];
	r <<= 8;
	r += (uchar)s[4];
	r <<= 8;
	r += (uchar)s[3];
	r <<= 8;
	r += (uchar)s[2];
	r <<= 8;
	r += (uchar)s[1];
	r <<= 8;
	r += (uchar)s[0];
	return r;
}

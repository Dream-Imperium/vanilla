#include <vanilla/cpu.h>
#include <vanilla/std.h>

usize
c_utf8_utflen(char *s)
{
	return c_utf8_utfnlen(s, C_USIZEMAX);
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

#include "__int__.h"

static ctype_rune rangetab[] = {
	0x00E000, 0x00F8FF,
	0x0F0000, 0x0FFFFD,
	0x100000, 0x10FFFD,
};

/* !(Cc, Cf, Co, Zl, Zp) */
int
c_utf8_isprint(ctype_rune r)
{
	if (c_utf8_iscntrl(r))
		return 0;
	if (__UTF8_RANGESEARCH(&r, rangetab))
		return 0;
	return 1;
}
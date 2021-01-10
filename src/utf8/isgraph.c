#include <vanilla/cpu.h>
#include <vanilla/std.h>

/* !(Cc, Cf, Co, Zl, Zp, Zs) */
int
c_utf8_isgraph(ctype_rune r)
{
	return !c_utf8_isspace(r) && c_utf8_isprint(r);
}

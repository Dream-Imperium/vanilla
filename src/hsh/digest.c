#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_hsh_digest(ctype_hst *hs, ctype_hmd *p, char *s)
{
	p->digest(hs, s);
}

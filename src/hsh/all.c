#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_hsh_all(ctype_hst *hs, ctype_hmd *p, char *data, usize n)
{
	p->init(hs);
	p->update(hs, data, n);
	p->end(hs);
}

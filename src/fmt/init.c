#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_fmt_init(ctype_fmt *p, void *farg, ctype_arr *mb, ctype_fmtopfn func)
{
	p->mb = mb;
	p->func = func;
	p->farg = farg;
	p->nfmt = 0;
	p->flags = 0;
	p->width = 0;
	p->prec = 0;
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_dyn_shrink(ctype_arr *p)
{
	if (p->a > p->n) {
		c_std_realloc(p->p, p->n, sizeof(uchar));
		p->a = p->n;
	}
}

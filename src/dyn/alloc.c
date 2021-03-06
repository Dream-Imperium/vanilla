#include <vanilla/cpu.h>
#include <vanilla/std.h>

void *
c_dyn_alloc(ctype_arr *p, usize m, usize n)
{
	usize t;

	if (c_dyn_ready(p, m, n) < 0)
		return nil;

	m *= n;
	if ((t = m + n) > c_arr_bytes(p))
		p->n = t;

	return p->p + m;
}

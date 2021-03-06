#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_arr_trunc(ctype_arr *p, usize m, usize n)
{
	if (C_OFLW_UM(usize, m, n)) {
		errno = C_EOVERFLOW;
		return -1;
	}

	if ((m *= n) > c_arr_bytes(p))
		return 0;

	p->n = m;
	if (p->p)
		p->p[p->n] = 0;

	return 0;
}

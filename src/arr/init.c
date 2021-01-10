#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_arr_init(ctype_arr *p, char *s, usize n)
{
	p->a = n ? n - 1 : 0;
	p->n = 0;
	p->p = (uchar *)s;
}

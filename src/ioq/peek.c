#include <vanilla/cpu.h>
#include <vanilla/std.h>

void *
c_ioq_peek(ctype_ioq *p)
{
	return (p->arr.p + p->arr.a);
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_tai_add(ctype_tai *t, ctype_tai *u, ctype_tai *v)
{
	t->x = u->x + v->x;
}

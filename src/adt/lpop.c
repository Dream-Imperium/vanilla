#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_node *
c_adt_lpop(ctype_node **sp)
{
	ctype_node *o;

	if (!*sp)
		return nil;

	o = *sp;
	if ((*sp = o->prev))
		(*sp)->next = o->next;

	return o;
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_dir_set(ctype_dir *p, ctype_dent *ep, int instr)
{
	(void)p;
	ep->instr = instr;
	return 0;
}

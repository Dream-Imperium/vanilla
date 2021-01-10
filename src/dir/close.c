#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_dir_close(ctype_dir *p)
{
	while (p->cur)
		c_adt_lfree(c_adt_lpop(&p->cur));
	c_dyn_free(&p->hist);
	return 0;
}

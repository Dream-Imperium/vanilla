#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_std_exit(int r)
{
	c_ioq_flush(ioq1);
	c_ioq_flush(ioq2);
	c_sys_exit(r);
}

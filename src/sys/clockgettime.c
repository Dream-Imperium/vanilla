#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_clockgettime(ctype_id id, ctype_time *t)
{
	return c_std_syscall(SYS_clock_gettime, id, t);
}

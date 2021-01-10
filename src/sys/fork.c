#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_id
c_sys_fork(void)
{
	return c_std_syscall(SYS_fork);
}

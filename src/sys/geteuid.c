#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_id
c_sys_geteuid(void)
{
	return c_std_syscall(SYS_geteuid);
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_id
c_sys_getgid(void)
{
	return c_std_syscall(SYS_getgid);
}

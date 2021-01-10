#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_rmdir(char *s)
{
	return c_std_syscall(SYS_rmdir, s);
}

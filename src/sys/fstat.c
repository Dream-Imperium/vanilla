#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_fstat(ctype_stat *p, ctype_fd fd)
{
	return c_std_syscall(SYS_fstat, fd, p);
}

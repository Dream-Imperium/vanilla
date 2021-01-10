#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_sethostname(char *s, usize n)
{
	return c_std_syscall(SYS_sethostname, s, n);
}

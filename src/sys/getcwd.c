#include <vanilla/cpu.h>
#include <vanilla/std.h>

char *
c_sys_getcwd(char *s, usize n)
{
	return c_std_syscall(SYS_getcwd, s, n) < 0 ? nil : s;
}

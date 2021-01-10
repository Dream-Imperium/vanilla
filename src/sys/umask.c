#include <vanilla/cpu.h>
#include <vanilla/std.h>

uint
c_sys_umask(uint m)
{
	return c_std_syscall(SYS_umask, m);
}

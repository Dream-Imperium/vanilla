#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_uname(ctype_utsname *p)
{
	return c_std_syscall(SYS_uname, p);
}

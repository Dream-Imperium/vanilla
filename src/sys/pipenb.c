#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_pipenb(ctype_fd *fds)
{
	return c_std_syscall(SYS_pipe2, fds, C_ONONBLOCK);
}

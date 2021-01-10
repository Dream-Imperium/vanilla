#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_pipenbcoe(ctype_fd *fds)
{
	return c_std_syscall(SYS_pipe2, fds, C_OCEXEC | C_ONONBLOCK);
}

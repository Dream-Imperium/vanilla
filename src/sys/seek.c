#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_fssize
c_sys_seek(ctype_fd fd, ctype_fssize off, int whence)
{
	return c_std_syscall(SYS_lseek, fd, off, whence);
}

#include <vanilla/cpu.h>
#include <vanilla/std.h>

void *
c_sys_mmap(void *p, usize n, int prot, uint opts, ctype_fd fd, ctype_fssize off)
{
	return (void *)c_std_syscall(SYS_mmap, p, n, prot, opts, fd, off);
}

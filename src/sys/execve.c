#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_execve(char *path, char **argv, char **envp)
{
	return c_std_syscall(SYS_execve, path, argv, envp);
}

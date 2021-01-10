#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_sys_lstat(ctype_stat *p, char *s)
{
	return c_std_syscall(SYS_fstatat, AT_FDCWD, s, p, AT_SYMLINK_NOFOLLOW);
}

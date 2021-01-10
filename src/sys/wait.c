#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_id
c_sys_wait(int *status)
{
	return c_sys_waitpid(-1, status, 0);
}

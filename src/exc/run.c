#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_exc_run(char *path, char **argv)
{
	return c_exc_runenv(path, argv, environ);
}

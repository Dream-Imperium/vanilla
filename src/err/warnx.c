#include <vanilla/cpu.h>
#include <vanilla/std.h>

int
c_err_warnx(char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	c_err_vwarnx(fmt, ap);
	va_end(ap);
	return 1;
}

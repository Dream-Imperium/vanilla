#include <vanilla/cpu.h>
#include <vanilla/std.h>

int
c_err_vwarnx(char *fmt, va_list args)
{
	c_ioq_fmt(ioq2, "%s: ", c_std_getprogname());
	if (fmt)
		c_ioq_vfmt(ioq2, fmt, args);
	c_ioq_put(ioq2, "\n");
	c_ioq_flush(ioq2);
	return 1;
}

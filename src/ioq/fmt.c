#include <vanilla/cpu.h>
#include <vanilla/std.h>

size
c_ioq_fmt(ctype_ioq *p, char *fmt, ...)
{
	va_list ap;
	size n;

	va_start(ap, fmt);
	n = c_ioq_vfmt(p, fmt, ap);
	va_end(ap);
	return n;
}

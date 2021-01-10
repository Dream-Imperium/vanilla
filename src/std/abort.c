#include <vanilla/cpu.h>
#include <vanilla/std.h>

void
c_std_abort(void)
{
	while (*(volatile int *)0) ;
}

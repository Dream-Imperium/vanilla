#include <vanilla/cpu.h>
#include <vanilla/std.h>

ctype_status
c_cdb_init(ctype_cdb *p, ctype_fd fd)
{
	ctype_stat st;
	uchar *x;

	p->map = nil;
	c_cdb_free(p);
	c_cdb_findstart(p);
	p->fd = fd;
	if (c_sys_fstat(&st, fd) < 0)
		return -1;
	if (st.size >= 0xFFFFFFFF) {
		errno = C_EOVERFLOW;
		return -1;
	}
	if (!(x = c_sys_mmap(0, st.size, PROT_READ, MAP_SHARED, fd, 0))) {
		p->size = st.size;
		p->map = x;
	}
	return 0;
}

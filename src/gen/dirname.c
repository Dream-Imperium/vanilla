#include <vanilla/cpu.h>
#include <vanilla/std.h>

char *
c_gen_dirname(char *s)
{
	usize n;

	if (!s || !*s)
		return ".";

	n = c_str_len(s, C_USIZEMAX) - 1;

	for (; s[n] == '/'; --n)
		if (!n)
			return "/";
	for (; s[n] != '/'; --n)
		if (!n)
			return ".";
	for (; s[n] == '/'; --n)
		if (!n)
			return "/";

	s[++n] = 0;
	return s;
}

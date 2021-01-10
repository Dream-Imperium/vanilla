#include <vanilla/cpu.h>
#include <vanilla/std.h>

#include "__int__.h"

static u64int tab[] = {
	4611686018506184714ULL,
	4611686018522082315ULL,
	4611686018553618316ULL,
	4611686018585154317ULL,
	4611686018616690318ULL,
	4611686018648312719ULL,
	4611686018679848720ULL,
	4611686018711384721ULL,
	4611686018742920722ULL,
	4611686018790181523ULL,
	4611686018821717524ULL,
	4611686018853253525ULL,
	4611686018916411926ULL,
	4611686018995381527ULL,
	4611686019058539928ULL,
	4611686019090075929ULL,
	4611686019137336730ULL,
	4611686019168872731ULL,
	4611686019200408732ULL,
	4611686019247842333ULL,
	4611686019295103134ULL,
	4611686019342536735ULL,
	4611686019563461536ULL,
	4611686019658155937ULL,
	4611686019768488738ULL,
	4611686019863096739ULL,
	4611686019910616740ULL,
};

u64int *__tai_leaptab = tab;
int __tai_leaptabsize = C_NELEM(tab);

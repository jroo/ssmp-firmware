#ifndef KB_H
#define KB_H

#include "quantum.h"

#define LAYOUT_all( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }  \
}

#endif
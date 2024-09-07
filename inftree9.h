/* inftree9.h -- header to use inftree9.c
 * Copyright (C) 1995-2008 Mark Adler
 * For conditions of distribution and use, see copyright notice in zlib.h
 */

/* WARNING: this file should *not* be used by applications. It is
   part of the implementation of the compression library and is
   subject to change. Applications should only use zlib.h.
 */

/* The code structure, the codetype enumeration and the ENOUGH constants are
   shared with the deflate decoder -- see inftrees.h for their definitions and
   for the ENOUGH_LENS9 and ENOUGH_DISTS9 values used by inflate_table9(). */
#include "inftrees.h"

/* op values as set by inflate_table9() -- note that a deflate64 length or
   distance takes up to five extra bits, so the encoding differs from the one
   used by inflate_table() (see inftrees.h):
    00000000 - literal
    0000tttt - table link, tttt != 0 is the number of table index bits
    100eeeee - length or distance, eeeee is the number of extra bits
    01100000 - end of block
    01000000 - invalid code
 */

int ZLIB_INTERNAL inflate_table9(codetype type, unsigned short FAR *lens,
                                 unsigned codes, code FAR * FAR *table,
                                 unsigned FAR *bits, unsigned short FAR *work);
struct inflate_state;
void ZLIB_INTERNAL inflate_fixed9(struct inflate_state FAR *state);

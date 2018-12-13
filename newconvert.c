/*
 * Trivial implementation of converter function.
 * You may override this file or create your own.
 */
#include "converter.h"

#include <stdlib.h>


void convert_all(unsigned n, char *l[], quote_t m[])
{
  for (unsigned i = 0; i < n; i++) {
      quote_t t = 0;
      char *c = l[i];
      while(*c != 0) {
         t = t*10 + (*(c)++ - 48);
      }
      m[i] = t;   
  }
}
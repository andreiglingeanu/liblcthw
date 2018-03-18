#include <lcthw/bstrlib.h>
#include "minunit.h"

char *test_str()
{
  bstring first = bfromcstr("HE:llo\n");

  struct bstrList * bList = bsplit(first, ':');

  bdestroy(first);
  bstrListDestroy(bList);

  return NULL;
}

char *all_tests()
{
  mu_suite_start();

  mu_run_test(test_str);

  return NULL;
}

RUN_TESTS(all_tests);

/* OSQP TESTER MODULE */

/* THE CODE FOR MINIMAL UNIT TESTING HAS BEEN TAKEN FROM
   http://www.jera.com/techinfo/jtns/jtn002.html */

#include <stdio.h>

#include "minunit.h"
#include "qdldl.h"

// Include tests
#include "test_basic.h"


int tests_run = 0;


static char* all_tests() {
  mu_run_test(test_basic);
  return 0;
}

int main(void) {
  char *result = all_tests();

  if (result != 0) {
    printf("%s\n", result);
  }
  else {
    printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);

  return result != 0;
}

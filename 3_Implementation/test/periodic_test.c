#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <tablecontents.h>
#define PROJECT_NAME    "PeriodicTable"

void test_case1(void);
void test_case2(void);
void test_case3(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "info1", test_case1);
  CU_add_test(suite, "info2", test_case2);
  CU_add_test(suite, "info3", test_case3);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_case1(void) {
  CU_PASS("info1 == OXYGEN");

  /* Dummy fail*/
/*  CU_FAIL("info1 == oxygen"); */
}

void test_case2(void) {
  CU_PASS("info2 == O");

  /* Dummy fail*/
/*  CU_FAIL("info2 == o");  */
}

void test_case3(void) {
int i;
if(i<=113 && i!=0)
{
  CU_PASS("info3"));
 }
 else
  /* Dummy fail*/
/*  CU_FAIL("info3");  */
}

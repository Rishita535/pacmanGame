
#include "unity.h"
#include "pacman.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_display(void)
{
  TEST_ASSERT_EQUAL(success, display());
}
/*
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(1, factorial(0));
  TEST_ASSERT_EQUAL(1, factorial(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, factorial(-5));
  TEST_ASSERT_EQUAL(-1, factorial(-10));
}
*/

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_display);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

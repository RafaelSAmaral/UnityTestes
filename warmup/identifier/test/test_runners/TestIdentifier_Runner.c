#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Identifier)
{
  RUN_TEST_CASE(Identifier, TestPayment1);
  RUN_TEST_CASE(Identifier, TestPayment2);
  RUN_TEST_CASE(Identifier, TestPayment3);
  RUN_TEST_CASE(Identifier, TestPayment4);
  RUN_TEST_CASE(Identifier, TestPayment5);
}

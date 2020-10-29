#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Identifier);

TEST_SETUP(Identifier)
{
}

TEST_TEAR_DOWN(Identifier)
{
}

TEST(Payment, TestPayment1)
{
  // Testes devem passar, testando todos os status possiveis
  TEST_ASSERT_EQUAL(0, payment(10000, "estudante"));
  TEST_ASSERT_EQUAL(0, payment(10000, "aposentado"));
  TEST_ASSERT_EQUAL(0, payment(10000, "regular"));
  TEST_ASSERT_EQUAL(0, payment(10000, "vip"));
}

TEST(Payment, TestPayment2)
{
  // Testando os valores limites
  TEST_ASSERT_EQUAL(0, payment(0.01, "estudante"));
  TEST_ASSERT_EQUAL(0, payment(99999, "estudante"));
}

TEST(Payment, TestPayment3)
{
  // Testando a funcao ao por valores proximos do limite, mas fora dele, retorna 1 - valor incorreto
  TEST_ASSERT_EQUAL(1, payment(0, "estudante"));
  TEST_ASSERT_EQUAL(1, payment(100000, "estudante"));
}

TEST(Payment, TestPayment4)
{
  // Testando valores, sucesso
  TEST_ASSERT_EQUAL(0, payment(10000, "estudante"));
  TEST_ASSERT_EQUAL(0, payment(30000, "estudante"));
  TEST_ASSERT_EQUAL(0, payment(55555, "estudante"));
  TEST_ASSERT_EQUAL(0, payment(278, "estudante"));
}

TEST(Payment, TestPayment5)
{
  // Retorna valor 3 - status incorreto
  TEST_ASSERT_EQUAL(2, payment(10000, "crianca"));
  TEST_ASSERT_EQUAL(2, payment(30000, "idoso"));
  TEST_ASSERT_EQUAL(2, payment(55555, "torcedor"));
  TEST_ASSERT_EQUAL(2, payment(278, "policial"));
}




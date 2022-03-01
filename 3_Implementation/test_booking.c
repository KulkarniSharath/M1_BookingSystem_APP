#include "unity.h"
#include "code.h"
void setup()
{

}

void tearDown()
{

}
void test_main(void)
{
    UNITY_TEST_ASSERT_EQUAL_CHAR_ARRAY((()),(()),(()),_ _,TEST_ASSERT_NULL);
}

void test_add_node(void)
{
 UNITY_TEST_ASSERT_EQUAL_CHAR_ARRAY((()),(()),(()),_ _,TEST_ASSERT_NULL);
}
void test_cal(void)
{
TEST_ASSERT_EQUAL_FLOAT((()),(()));
}

void test_seat(void)
{
TEST_ASSERT_EQUAL_FLOAT((()),(()));
}
void test_bill(void)
{
TEST_ASSERT_EQUAL_FLOAT((()),(()));
}
int test_main()
{
    UNITY_BEGIN();

    RUN_TEST(test_details);
    RUN_TEST(test_bill);
    RUN_TEST(test_cal);
    RUN_TEST(test_seat);
    RUN_TEST(test_add_node);
    RUN_TEST(test_main);


    return UNITY_END(test);

}
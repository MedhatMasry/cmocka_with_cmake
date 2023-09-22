#include <stdarg.h>
#include <setjmp.h>
#include <stddef.h>
#include <cmocka.h>

static void test1(void **state)
{
    assert_int_equal(2, 2);
}
static void test2(void **state)
{
    assert_int_equal(5, 5);
}
static void test3(void **state)
{
    assert_int_equal(10, 10);
}

int main()
{
    const struct CMUnitTest tests[] =
    {
        cmocka_unit_test(test1),
        cmocka_unit_test(test2),
        cmocka_unit_test(test3),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}

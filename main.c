// Copyright 2020 OLIVIER LE DOEUFF
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
// THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

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
    assert_int_equal(1, 2);
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

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>

#include "trimend.h"

void test_trailing_one_blank1(void **state)
{
    (void) state; /* unused */

    char actuall[] = "ab cd ";
    char expected[] = "ab cd";
    int len = trimend(actuall);
    assert_int_equal(len, 5);
    assert_string_equal(actuall, expected);
}

void test_trailing_one_blank2(void **state)
{
    (void) state; /* unused */

    char actuall[] = "ab cd\t";
    char expected[] = "ab cd";
    int len = trimend(actuall);
    assert_int_equal(len, 5);
    assert_string_equal(actuall, expected);
}

void test_trailing_more_blanks(void **state)
{
    (void) state; /* unused */

    char actuall[] = "aa bb ccc\t  \t ";
    char expected[] = "aa bb ccc";
    int len = trimend(actuall);
    assert_int_equal(len, 9);
    assert_string_equal(actuall, expected);
}

int main(void)
{
    const struct CMUnitTest tests[] = {
	cmocka_unit_test(test_trailing_one_blank1),
	cmocka_unit_test(test_trailing_one_blank2),
	cmocka_unit_test(test_trailing_more_blanks)
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}

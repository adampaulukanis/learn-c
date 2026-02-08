#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>

#include "reverse.h"

static void test_ab(void **state)
{
    (void) state; /* unused */

    char napis[] = "ab";
    reverse(napis);
    assert_string_equal(napis, "ba");
}

static void test_abc(void **state)
{
    (void) state; /* unused */

    char napis[] = "abc";
    reverse(napis);
    assert_string_equal(napis, "cba");
}

static void test_abcd(void **state)
{
    (void) state; /* unused */

    char napis[] = "abcd";
    reverse(napis);
    assert_string_equal(napis, "dcba");
}

static void test_lapalzakranakanarkazlapal(void **state)
{
    (void) state; /* unused */

    char napis[] = "lapalzakranakanarkazlapal";
    reverse(napis);
    assert_string_equal(napis, "lapalzakranakanarkazlapal");
}

static void test_potop(void **state)
{
    (void) state; /* unused */

    char napis[] = "potop";
    reverse(napis);
    assert_string_equal(napis, "potop");
}

int main(void)
{
    const struct CMUnitTest tests[] = {
	cmocka_unit_test(test_ab),
	cmocka_unit_test(test_abc),
	cmocka_unit_test(test_abcd),
	cmocka_unit_test(test_lapalzakranakanarkazlapal),
	cmocka_unit_test(test_potop)
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}


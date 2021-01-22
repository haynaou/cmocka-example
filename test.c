#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

int add(int x, int y) {
	return x + y;
}

static void test_add(void **state){
	int result = add(1, 1);
	assert_int_equal(result, 2);
}

int main(int argc, char **argv){
	
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_add)
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}

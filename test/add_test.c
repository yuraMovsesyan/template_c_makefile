#include "../source/header/test.h"

#include <assert.h>
#include <stdio.h>

void add_test() {
    int result = add(3, 2);
    assert(result == 5);
    printf("Test passed: add(3, 2) = %d\n", result);
}
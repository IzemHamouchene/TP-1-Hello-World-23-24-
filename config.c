// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "sum.h"
#include "assert_with_message.h"

int main() {
    char message[100];

    // Test 1
    int r = sum(1, 2);
    sprintf(message, "Input 1, 2. Expected output should be 3. Actuel output = %d", r);
    assert_with_message(sum(1, 2) == 3, message);
    return 0;
}
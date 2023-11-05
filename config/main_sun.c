// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "sum.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, int output){
    char message[100];
    int result = sum(input1, input2);
    sprintf(message, "Inputs (%d, %d). Expected output should be %d. Actuel output = %d", input1, input2, output, result);
    assert_with_message(result == output, message);
}

int main() {
    // Test 1
    testMethod(1, 2, 3);

    // Test 1
    testMethod(20, 6, 26);
    return 0;
}
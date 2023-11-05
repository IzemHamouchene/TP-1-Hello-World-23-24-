// config.c
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <assert.h> 

#include "hello.h"
#include "assert_with_message.h"

int main() {
    char message[100];

    // Test 1
    char* r = HelloWorld();
    char* output = "Hello, World!";
    sprintf(message, "Expected output should be 'Hello, World!'. Actuel output = %s", r);
    assert_with_message(strcmp(r, output) == 0, message);
    return 0;
}
#include "find_palindrom.h"
#include "acutest.h"


void test_palindrome() {
    TEST_ASSERT(is_palindrom("") == 1);
    TEST_ASSERT(is_palindrom("Deed ") == 1);
    TEST_ASSERT(is_palindrom("Madam I'm Adam") == 1);
    TEST_ASSERT(is_palindrom("Was it a car or a cat I saw") == 1);
    TEST_ASSERT(is_palindrom("Pull up if I pull up") == 1);
}



TEST_LIST = {
    {"Testing palindrome", test_palindrome},
    {NULL, NULL}
};

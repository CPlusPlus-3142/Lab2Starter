#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/lab1.h"

TEST_CASE("Testing swap with strings") {
    std::string str1 = "hello";
    std::string str2 = "world";
    swap(str1, str2);
    CHECK(str1 == "world");
    CHECK(str2 == "hello");
}
TEST_CASE("Testing sort with strings using C-style array") {
    const size_t size = 3;
    std::string arr[size] = {"banana", "apple", "cherry"};
    sort(arr, size);
    CHECK(arr[0] == "apple");
    CHECK(arr[1] == "banana");
    CHECK(arr[2] == "cherry");
}
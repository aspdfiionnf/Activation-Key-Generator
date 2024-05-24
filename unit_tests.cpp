#include "CppUnitTest.h"
#include "keygen.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(KeygenTests) {
public:
    // Тестирование generateControlSum
    TEST_METHOD(GenerateControlSum_ZeroInput) {
        Assert::AreEqual(keygen::generateControlSum(15), 4);
    }

    TEST_METHOD(GenerateControlSum_PositiveInput) {
        Assert::AreEqual(keygen::generateControlSum(0), -1);
    }

    // Тестирование nextKey
    TEST_METHOD(NextKey_PositiveInput) {
        Assert::AreEqual(keygen::nextKey(10), 12);
    }

    TEST_METHOD(NextKey_ZeroInput) {
        Assert::AreEqual(keygen::nextKey(0), -1);
    }
};

TEST_CLASS(InputUtilsTests) {
public:
    // Тестирование isNumber
    TEST_METHOD(IsNumber_NumberStrings) {
        Assert::IsTrue(input_utils::isNumber("123"));
    }

    TEST_METHOD(IsNumber_NonNumberStrings) {
        Assert::IsFalse(input_utils::isNumber("abc"));
    }
};

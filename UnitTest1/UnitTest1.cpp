#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2/6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumOddIndices_Basic)
        {
            vector<int> a = { 1, 2, 3, 4, 5 };
            int result = sumOddIndices(a);
            Assert::AreEqual(6, result);
        }

        TEST_METHOD(TestSumOddIndices_AllEven)
        {
            vector<int> a = { 2, 4, 6, 8 };
            int result = sumOddIndices(a);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(TestSumOddIndices_AllOdd)
        {
            vector<int> a = { 1, 3, 5, 7, 9 };
            int result = sumOddIndices(a);
            Assert::AreEqual(10, result);
        }

        TEST_METHOD(TestSumOddIndices_Empty)
        {
            vector<int> a = {};
            int result = sumOddIndices(a);
            Assert::AreEqual(0, result);  
        }

        TEST_METHOD(TestSumOddIndices_OneOdd)
        {
            vector<int> a = { 1 };
            int result = sumOddIndices(a);
            Assert::AreEqual(0, result);
        }
    };
}

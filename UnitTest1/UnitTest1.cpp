#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2.1/Lab9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define SQUARE(a) ((a) * (a))

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        // Тест для макросу MAX
        TEST_METHOD(TestMax)
        {
            Assert::AreEqual(MAX(5, 3), 5);
            Assert::AreEqual(MAX(-1, -5), -1);
            Assert::AreEqual(MAX(0, 0), 0);
        }

        // Тест для макросу MIN
        TEST_METHOD(TestMin)
        {
            Assert::AreEqual(MIN(5, 3), 3);
            Assert::AreEqual(MIN(-1, -5), -5);
            Assert::AreEqual(MIN(0, 0), 0);
        }

        // Тест для макросу ABS
        TEST_METHOD(TestAbs)
        {
            Assert::AreEqual(ABS(5), 5);
            Assert::AreEqual(ABS(-5), 5);
            Assert::AreEqual(ABS(0), 0);
        }

        // Тест для макросу SQUARE
        TEST_METHOD(TestSquare)
        {
            Assert::AreEqual(SQUARE(5), 25);
            Assert::AreEqual(SQUARE(-5), 25);
            Assert::AreEqual(SQUARE(0), 0);
        }

        // Тест для функції calculateWFormula1
        TEST_METHOD(TestCalculateWFormula1)
        {
            double x = 2;
            Assert::AreEqual(calculateWFormula1(x), MAX(x, Z) * MIN(x + Z, x * Z));
        }

        // Тест для функції calculateWFormula2
        TEST_METHOD(TestCalculateWFormula2)
        {
            double x = 2;
            Assert::AreEqual(calculateWFormula2(x), SQUARE(MIN(ABS(x - Z), Z)));
        }
    };
}

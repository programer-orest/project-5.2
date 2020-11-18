#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 5.2/Project 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double final;
            const double x = 2;
            const double n = 2;
            const double a = 2;
            final = A(x, n, a);
            Assert::AreEqual(final, -8.);
        }
    };
}
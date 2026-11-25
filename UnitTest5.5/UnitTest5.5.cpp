#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.5/Lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int exp0ct = 31;
			int n = 25;
			int depth = 2;
			Assert::AreEqual(toOctal(n, depth), exp0ct);
		}
	};
}

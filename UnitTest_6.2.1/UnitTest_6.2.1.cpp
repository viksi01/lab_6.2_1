#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2_1/lab_6.2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int r[5] = { -34,64,61,-40,-8 };
			int t = Max(r, 5);
			Assert::AreEqual(t, 61);
		}
	};
}

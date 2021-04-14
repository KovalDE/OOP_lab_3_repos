#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_3_C/Money.h"
#include "../Lab_3_3_C/Money.cpp"
#include "../Lab_3_3_C/Object.h"
#include "../Lab_3_3_C/Object.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money l(9, 50), r(8, 10);
			Money res;
			res = l - r;
			double gr = res.GetGr();
			Assert::AreEqual(gr, 1.0);

		}
	};
}

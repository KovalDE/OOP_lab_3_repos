#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_3_A/Money_publ.h"
#include "../Lab_3_3_A/Money_publ.cpp"
#include "../Lab_3_3_A/Money.h"
#include "../Lab_3_3_A/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money_publ l(9,50), r(8,10);
			Money_publ res;
			res = l - r;
			double gr = res.GetGr();
			Assert::AreEqual(gr, 1.0);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_3_D/Real_publ.h"
#include "../Lab_3_3_D/Real_publ.cpp"
#include "../Lab_3_3_D/Number.h"
#include "../Lab_3_3_D/Number.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real_publ s(9);
			int n=2;
			Real_publ res = s.Sqrt(n);
			double res1 = res.getDouble();
			Assert::AreEqual(3.0, res1);

		}
	};
}

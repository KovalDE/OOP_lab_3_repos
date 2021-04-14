#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_3_E/Real.h"
#include "../Lab_3_3_E/Real.cpp"
#include "../Lab_3_3_E/Number.h"
#include "../Lab_3_3_E/Number.cpp"
#include "../Lab_3_3_E/Object.h"
#include "../Lab_3_3_E/Object.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real s(9);
			int n=2;
			Real res = s.Sqrt(n);;
			double res1 = res.getDouble();
			Assert::AreEqual(3.0, res1);
		}
	};
}

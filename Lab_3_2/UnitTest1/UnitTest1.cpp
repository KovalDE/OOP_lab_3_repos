#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_2/Man.h"
#include "../Lab_3_2/Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man k("Denis",18);
			Assert::AreEqual(18, k.getAge());
		}
	};
}

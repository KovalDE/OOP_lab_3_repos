#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_1/Number.h"
#include "../Lab_3_1/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number l(5.9);
			++l;
			Assert::AreEqual(l.getDouble(),6.9);
		}
	};
}

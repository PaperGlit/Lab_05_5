#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_5/Lab_05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab055
{
	TEST_CLASS(UnitTestLab055)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b;
			b = Pascal1(5, 3);
			Assert::AreEqual(b, 6);
		}
	};
}

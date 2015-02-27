#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Point2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(setZero)
		{
			// Add here test code...

			Point2D p1;
			p1.setZero();

			Assert::IsTrue(p1.x == 0);
			Assert::IsTrue(p1.y == 0);

		}
		TEST_METHOD(isBothZero)
		{
			// Add here test code...

			Point2D p1;
			p1.setZero();

			Assert::IsTrue(p1.isBothZero());
		}
		TEST_METHOD(invert)
		{
			// Add here test code...

			Point2D p1;
			p1.x = 2;
			p1.y = 3;
			p1.invert();

			Assert::IsTrue(p1.x == -2);
			Assert::IsTrue(p1.y == -3);
		}
	};
}
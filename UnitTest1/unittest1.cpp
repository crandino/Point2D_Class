#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Point2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPoint2d)
		{
			// TODO: Agregar aquí el código de la prueba
			Point2D p1,p2;
			p2.x = 5;
			p2.y = -2;

			p1.setZero();
			Assert::IsTrue(p1.isBothZero());
			Assert::IsFalse(p1 == p2);

		}
		//TEST_METHOD(TestPoint2dAdd)
		//{
		//	// TODO: Agregar aquí el código de la prueba
		//	Point2d point, p2, p3;

		//	p2.x = 1.0f;
		//	p2.y = 3.0f;

		//	p3.x = 1.0f;
		//	p3.y = 3.0f;

		//	point = p2 + p3;
		//	Assert::AreEqual(point.x, 3.0f);
		//	Assert::AreEqual(point.y, 6.0f);


		//	Assert::IsTrue(point.isBothZero();

		//}
	};
}
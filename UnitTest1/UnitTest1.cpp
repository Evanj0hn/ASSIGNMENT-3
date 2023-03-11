#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Perimeter)
		{
			//testing the getPerimeter function using 1+1+1=2
			int inputA = 5;
			int inputB = 3;
			int result = 0;
			result = getPerimeter(&inputA ,&inputB);
			Assert::AreEqual(16, result);
		}
		TEST_METHOD(Area)
		{
			//testing the getArea function using 1*2=2
			int inputC = 2;
			int	inputD = 5;
			int result1 = 0;
			result1 = getArea(&inputC, &inputD);
			Assert::AreEqual(10, result1);
		}
		TEST_METHOD(lengthset1)
		{
			int inputE = 1;
			int inputF = 11;
			setLength(inputE, &inputF);
			Assert::AreEqual(inputE,inputF);
		}
		TEST_METHOD(lengthset2)
		{
			int inputG = 7;
			int inputH = 5;
			setLength(inputG, &inputH);
			Assert::AreEqual(inputG, inputH);
		}
		TEST_METHOD(lengthset3)
		{
			int inputI = 2;
			int inputJ = 9;
			setLength(inputI, &inputJ);
			Assert::AreEqual(inputI, inputJ);
		}
		TEST_METHOD(widthset1)
		{
			int inputM = 5;
			int inputN = 5;

			setWidth(inputM, &inputN);
			Assert::AreEqual(inputM, inputN);

		}
		TEST_METHOD(widthset2)
		{
			int inputO = 5;
			int inputP = 10;

			setWidth(inputO, &inputP);
			Assert::AreEqual(inputO, inputP);

		}
		TEST_METHOD(widthset3)
		{
			int inputQ = 98;
			int inputR = 1;
			setWidth(inputQ, &inputR);
			Assert::AreEqual(inputQ, inputR);
		}
	};
}

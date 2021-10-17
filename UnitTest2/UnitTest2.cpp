#include "pch.h"
#include "CppUnitTest.h"
extern "C" int setLength(int input, int *length);
extern "C"  int setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(T002)
	{
	public:

		TEST_METHOD(inputlength)
			//testing to see if input=length for the values 1 to 99
		{
			int* length{};
			*length = 3;


			int input;
			length = &input;
			int actual = setLength(input, length);
			Assert::AreEqual(3, actual);
		}

		TEST_METHOD(inputwidth)
		{

			int* width{};
			*width = 4;
			int  input;
			width = &input;
			int actual = setWidth(input, width);
			Assert::AreEqual(4, actual);
		}
	};
}


			

				
#include "pch.h"
#include "CppUnitTest.h"
extern "C"  int getPerimeter(int*length, int*width);
extern "C"  int getArea(int* length, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace T001
{
	TEST_CLASS(T001)
	{
	public:
		
		TEST_METHOD(findingperimeter)
		{
			int length = 1;
			int width = 1;
			int result = 0;

			result = getPerimeter(&length, &width);
			Assert::AreEqual(4, result);

		}
			

			

			
			
		


		
		TEST_METHOD(FINDINGAREA)
		{
			int length = 1;
			int width = 1;
			int result = 0;

			result = getArea(&length, &width);
			Assert::AreEqual(1, result);


		}
		
	};
}

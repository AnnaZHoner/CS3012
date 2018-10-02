#include "stdafx.h"
#include "LCA.cpp"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LCATest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(FullGraph)
		{
			Assert::AreEqual(1, 1);
			Assert::AreNotEqual(1, 2);
			Assert::AreEqual(findLCA(root, node4, node5) == 2);
			Assert::AreEqual(findLCA(root, node4, node6) == 1);
			Assert::AreEqual(findLCA(root, node3, node4) == 1);
			Assert::AreEqual(findLCA(root, node2, node4) == 2);

		}

		TEST_METHOD(EmptySpot)
		{

		}

	};
}
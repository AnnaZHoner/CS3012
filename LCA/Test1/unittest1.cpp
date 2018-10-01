#include "stdafx.h"
#include "LCA.cpp"
#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test1
{		
	TEST_CLASS(UnitTest1) 
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ASSERT::EQUALS(2, 1+1)
			TEST_ASSERT(findLCA(root, node4, node5) == 2);
			TEST_ASSERT(findLCA(root, node4, node6) == 1);
			TEST_ASSERT(findLCA(root, node3, node4) == 1);
			TEST_ASSERT(findLCA(root, node2, node4) == 2);

		}

	};
}
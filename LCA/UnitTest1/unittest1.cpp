#include "stdafx.h"
#include "CppUnitTest.h"
#include "../LCA/pch.h"
#include "../LCA/LCA.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Node * root = newNode(1);
			root->left = newNode(2);
			root->right = newNode(3);
			root->left->left = newNode(4);
			root->left->right = newNode(5);
			root->right->left = newNode(6);
			root->right->right = newNode(7);

			Assert::AreNotEqual(1, 2);
			Assert::AreEqual(findLCA(root, 4, 5) = 2);
			Assert::AreEqual(findLCA(root, node4, node6) == 1);
			Assert::AreEqual(findLCA(root, node3, node4) == 1);
			Assert::AreEqual(findLCA(root, node2, node4) == 2);
		}

	};
}
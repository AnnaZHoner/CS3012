#include "pch.h"
#include "../LCA/LCA.h"



TEST(TestCaseName, TestName) {
  EXPECT_EQ(findLCA(root, 4, 5), 2);
  EXPECT_TRUE(true);
}


/*cout << "LCA(4, 5) = " << findLCA(root, 4, 5) << "\n";		//2
cout << "nLCA(4, 6) = " << findLCA(root, 4, 6) << "\n";			//1
cout << "nLCA(3, 4) = " << findLCA(root, 3, 4) << "\n";			//1
cout << "nLCA(2, 4) = " << findLCA(root, 2, 4) << "\n";			//2
return 0;
*/
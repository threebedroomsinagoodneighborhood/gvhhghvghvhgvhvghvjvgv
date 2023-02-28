#include "pch.h"
#include "C:\Users\yana\Documents\1gitproj\gitlaba\lab6\game.h" //"..\tmp.h" работает

TEST(TestCaseName, TestName) {
	Prey testpray("name", Point2D(2,55555555));
	EXPECT_EQ(testpray.getx(),2);
	EXPECT_EQ(testpray.gety(),55555555);
	testpray.MoveTo(10,55);
	EXPECT_EQ(testpray.getx(),10);
	EXPECT_EQ(testpray.gety(),55);
}
int main(int argc,char ** argv) {
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
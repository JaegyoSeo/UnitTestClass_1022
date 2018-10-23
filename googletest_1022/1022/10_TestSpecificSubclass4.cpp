#include <stdio.h>

#include "gtest/gtest.h"

#define class struct
#define private public
#include "User.h"

TEST(UserTest, levelTest)
{
	User user;
	ASSERT_EQ(42, user.level);
}

#if 0
int main() {
	User user;
	printf("%d\n", user.level);
}
#endif

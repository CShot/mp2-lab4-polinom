#include <gtest.h>
#include "polinom.h"
#include "monom.h"

TEST(Polinomu, Addition)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 123);
	result1 = pol1 + pol2;
	result.AddElem(5, 123);
	EXPECT_EQ(result, result1);
}
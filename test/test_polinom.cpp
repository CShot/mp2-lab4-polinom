#include <gtest.h>
#include "polinom.h"
#include "monom.h"

TEST(Polinomu, Addition)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 123);
	result = pol1 + pol2;
	result1.AddElem(5, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Subtraction)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(3, 123);
	pol2.AddElem(2, 123);
	result = pol1 - pol2;
	result1.AddElem(1, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Multiplication)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 432);
	result = pol1 * pol2;
	result1.AddElem(6, 555);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Addition_of_different_sizes)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol1.AddElem(3, 123);
	pol2.AddElem(3, 123);
	result = pol1 + pol2;
	result1.AddElem(8, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Subtraction_of_different_sizes)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(5, 123);
	pol1.AddElem(3, 123);
	pol2.AddElem(2, 123);
	result = pol1 - pol2;
	result1.AddElem(6, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Multiplication_of_different_sizes)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(5, 123);
	pol1.AddElem(3, 123);
	pol2.AddElem(2, 423);
	result = pol1 * pol2;
	result1.AddElem(16, 546);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Multiplication_in_zero)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(0, 000);
	result = pol1 * pol2;
	result1.AddElem(0, 000);
	EXPECT_EQ(true, 0 == result1.getHead());
}

TEST(Polinomu, Multiplication_in_const)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 000);
	result = pol1 * pol2;
	result1.AddElem(6, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinomu, Coef_add_0)
{
	Polinom pol;
	pol.AddElem(0, 125);
	EXPECT_EQ(true, pol.getHead() == 0);
}

TEST(Polinomu, Coef_add_negativ)
{
	Polinom pol;
	pol.AddElem(-1, 125);
	EXPECT_EQ(true, pol.getHead()->GetKoef() == -1);
}

TEST(Polinomu, Multiplication_very_big_power)
{
	Polinom pol1; 
	Polinom pol2;
	pol1.AddElem(1, 666);
	pol2.AddElem(2, 666);
	ASSERT_ANY_THROW(pol1*pol2);
}


/*cout << pol1 << endl;
cout << pol2 << endl;
cout << result << endl;
cout << result1 << endl;*/
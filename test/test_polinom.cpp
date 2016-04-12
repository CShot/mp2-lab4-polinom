#include <gtest.h>
#include "polinom.h"
#include "monom.h"

TEST(Polinom, Addition)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 123);
	result = pol1 + pol2;
	result1.AddElem(5, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Subtraction)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(3, 123);
	pol2.AddElem(2, 123);
	result = pol1 - pol2;
	result1.AddElem(1, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Multiplication)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 432);
	result = pol1 * pol2;
	result1.AddElem(6, 555);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Addition_of_different_sizes)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol1.AddElem(3, 123);
	pol2.AddElem(3, 123);
	result = pol1 + pol2;
	result1.AddElem(8, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Subtraction_of_different_sizes)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(5, 123);
	pol1.AddElem(3, 123);
	pol2.AddElem(2, 123);
	result = pol1 - pol2;
	result1.AddElem(6, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Multiplication_of_different_sizes)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(5, 123);
	pol1.AddElem(3, 123);
	pol2.AddElem(2, 423);
	result = pol1 * pol2;
	result1.AddElem(16, 546);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Multiplication_in_zero)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(0, 000);
	result = pol1 * pol2;
	result1.AddElem(0, 000);
	EXPECT_EQ(true, 0 == result1.getHead());
}

TEST(Polinom, Multiplication_in_const)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(3, 000);
	result = pol1 * pol2;
	result1.AddElem(6, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Coef_add_0)
{
	Polinom pol;
	pol.AddElem(0, 125);
	EXPECT_EQ(true, pol.getHead() == 0);
}

TEST(Polinom, Coef_add_negativ)
{
	Polinom pol;
	pol.AddElem(-1, 125);
	EXPECT_EQ(true, pol.getHead()->GetKoef() == -1);
}

TEST(Polinom, Multiplication_very_big_power)
{
	Polinom pol1; 
	Polinom pol2;
	pol1.AddElem(1, 666);
	pol2.AddElem(2, 666);
	ASSERT_ANY_THROW(pol1*pol2);
}

TEST(Polinom, Multiplication_in_negativ_const)
{
	Polinom pol1, pol2, result, result1;
	pol1.AddElem(2, 123);
	pol2.AddElem(-3, 000);
	result = pol1 * pol2;
	result1.AddElem(-6, 123);
	EXPECT_EQ(true, result1 == result);
}

TEST(Polinom, Enter_polinom_with_negative_power)
{
	Polinom pol1;
	stringstream c;
	c << "2 -1 0 0 ";
	ASSERT_ANY_THROW(c >> pol1);
}

TEST(Polinom, Enter_polinom_with_to_big_power)
{
	Polinom pol1;
	stringstream c;
	c << "2 15 0 0 ";
	ASSERT_ANY_THROW(c >> pol1);
}
TEST(Polinom, can_assign_polinom)
{
	Polinom *pol1 = new Polinom;
	Polinom *pol2 = new Polinom;
	pol1->AddElem(5, 123);
	pol2->AddElem(7, 543);
	ASSERT_NO_THROW(pol1 = pol2);
	EXPECT_EQ(pol1, pol2);
}
/*cout << pol1 << endl;
cout << pol2 << endl;
cout << result << endl;
cout << result1 << endl;*/
#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int task1()
{
	int b1, b2, h;
	cout << "Enter first the two bases of the trapezoid, then the height" << endl;
	cin >> b1 >> b2 >> h;
	cout << "The area of your trapezoid is equal: " << (b1 + b2) / 2 * h << endl;
	return 0;
}


int task3()
{

	int katet1, katet2;
	cout << "Enter the two cathetates of the right triangle: " << endl;
	cin >> katet1 >> katet2;
	cout << "The area of your triangle is equal: " << katet1 * katet2 / 2 << endl
		<< "The hypotenuse of your triangle is equal: " << sqrt(katet1 * katet1 + katet2 * katet2) << endl;


	return 0;
}


int task5()
{

	int Coord_X, Coord_Y;
	cout << "Enter the X and Y coordinates one at a time: " << endl;
	cin >> Coord_X >> Coord_Y;
	cout << "r = " << (Coord_X * Coord_X + Coord_Y * Coord_Y) << "\t" << "tg(fi) = " << Coord_Y / Coord_X << endl;
	return 0;
}


int task7()
{

	double a, b, c, D;
	cout << "Enter the coefficients a, b, c one by one: " << endl;
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	if (D < 0)
	{
		cout << "no solution, your discr. is less than 0" << endl;
	}
	else
	{
		cout << "x1 = " << ((-b) + sqrt(D)) / (2 * a) << "\t" << "x2 = " << ((-b) - sqrt(D)) / (2 * a) << endl;
	}
	return 0;
}


int task9()
{

	int Seconds;
	cout << "Enter the k-second of the day" << endl;
	cin >> Seconds;
	cout << "Full hours have passed since the beginning of the day: " << Seconds / 3600 << "\t" << "Minutes: " << Seconds / 60 << endl;


	return 0;
}


int task11()
{

	double Price;

	cout << "Enter the purchase price: " << endl;
	cin >> Price;
	if (Price > 1000)
	{
		cout << "Including the discount, your price: " << Price * 0.9;
	}
	else
	{
		cout << "Unfortunately, your price is still the same: " << Price;

	}

	return 0;
}


int task13()
{
	srand(time(NULL));

	int From_User;

	int First_Random = rand() % 9 + 1;
	int Second_Random = rand() % 9 + 1;

	cout << First_Random << endl;
	cout << Second_Random << endl;

	cout << "Enter the product of these two numbers" << endl;
	cin >> From_User;

	if (From_User == First_Random * Second_Random)
	{
		cout << "You're just the best! You know how to count!" << endl;
	}
	else
	{
		cout << "You're such a..." << endl;
	}

	return 0;
}


int task15()
{

	int Number;

	cout << "Enter the month number" << endl;
	cin >> Number;

	switch (Number)

	{
	case 1:
		cout << "Your month: January. The time of year is winter. " << endl;
		break;
	case 2:
		cout << "Your month: February. The time of year is winter. " << endl;
		break;
	case 3:
		cout << "Your month: March. The time of year is spring. " << endl;
		break;
	case 4:
		cout << "Your month: April. The time of year is spring. " << endl;
		break;
	case 5:
		cout << "Your month: May. The time of year is spring. " << endl;
		break;
	case 6:
		cout << "Your month: June. The time of year is summer. " << endl;
		break;
	case 7:
		cout << "Your month: July. The time of year is summer. " << endl;
		break;
	case 8:
		cout << "Your month: August. The time of year is summer. " << endl;
		break;
	case 9:
		cout << "Your month: September. The time of year is autumn. " << endl;
		break;
	case 10:
		cout << "Your month: October. The time of year is autumn. " << endl;
		break;
	case 11:
		cout << "Your month: November. The time of year is autumn. " << endl;
		break;
	case 12:
		cout << "Your month: December. The time of year is winter. " << endl;
		break;

	default:
		cout << "You entered something incomprehensible" << endl;
		break;
	}

	return 0;
}


int task17()
{

	int Number_From_User, Ostatok;

	cout << "Enter a number between 1 and 99" << endl;

	cin >> Number_From_User;

	Ostatok = Number_From_User % 10;

	if (Number_From_User < 100 && Number_From_User>0)
	{
		switch (Ostatok) {
		case 0:
			cout << Number_From_User << " kopeek";
			break;
		case 1:
			cout << Number_From_User << " kopeika";
			break;
		case 2:
			cout << Number_From_User << " kopeiki";
			break;
		case 3:
			cout << Number_From_User << " kopeiki";
			break;
		case 4:
			cout << Number_From_User << " kopeiki";
			break;
		case 5:
			cout << Number_From_User << " kopeek";
			break;
		case 6:
			cout << Number_From_User << " kopeek";
			break;
		case 7:
			cout << Number_From_User << " kopeek";
			break;
		case 8:
			cout << Number_From_User << " kopeek";
			break;
		case 9:
			cout << Number_From_User << " kopeek";
			break;
		}
	}
	else
	{
		cout << "You entered an invalid number" << endl;
	}
	return 0;

}


int task19()
{

	int Number_From_User, Sum = 0, Mult = 1, b;

	cout << "Enter a three-digit number" << endl;
	cin >> Number_From_User;

	while (Number_From_User != 0)
	{
		Sum += Number_From_User % 10;
		Mult *= Number_From_User % 10;
		Number_From_User /= 10;
	}

	cout << "Enter some number b" << endl;
	cin >> b;
	if (Mult > b)
	{
		cout << "The mult. of digits is greater than a number: " << b << endl;
	}
	else
	{
		cout << "The mult. of digits is less than a number: " << b << endl;
	}
	if (Sum % 7 == 0)
	{
		cout << "The sum of the digits of your original number is a multiple of 7" << endl;
	}
	else
	{
		cout << "The sum of the digits of your original number is NOT a multiple of 7" << endl;
	}
	cout << Sum << endl;
	cout << Mult << endl;

	return 0;
}

int main()
{

	int Number_Of_Task;

	cout << "Enter the task number you want to check: " << endl;
	cin >> Number_Of_Task;

	switch (Number_Of_Task)
	{
	case 1:
		cout << task1() << endl;
		break;

	case 3:
		cout << task3() << endl;
		break;

	case 5:
		cout << task5() << endl;
		break;

	case 7:
		cout << task7() << endl;
		break;

	case 9:
		cout << task9() << endl;
		break;

	case 11:
		cout << task11() << endl;
		break;

	case 13:
		cout << task13() << endl;
		break;

	case 15:
		cout << task15() << endl;
		break;

	case 17:
		cout << task17() << endl;
		break;

	case 19:
		cout << task19() << endl;
		break;
	}


}

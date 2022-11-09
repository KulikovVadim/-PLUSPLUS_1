#include <iostream>
#include <cmath>
#include <random>


// задача 2
void Circle() {
    float r;
    std::cout << "Enter your radius: " << std::endl;
    std::cin >> r;
    float LengthOfCircle = 2 * 3.14 * r;
    std::cout << "the length of your circle is: " << LengthOfCircle << std::endl;
    float SquareOfCircle = 2 * 3.14 * r * r;
    std::cout << "the square of your circle is: " << SquareOfCircle << std::endl;
}


// задача 4
void SumDigits() {
    int num;
    std::cout << "Enter your four - digit number: " << std::endl;
    std::cin >> num;
    int result = num / 1000 + (num % 1000) / 100 + (num % 100) / 10 + (num % 10);
    std::cout << result << std::endl;
}


// задача 6
void PolToCart() {
    int r, fi;
    std::cout << "enter polar radius and polar angle via 'enter':" << std::endl;
    std::cin >> r >> fi;
    int x = r * cos(fi);
    int y = r * sin(fi);
    std::cout << "x = " << x << " y = " << y << std::endl;
}


// задача 8
void FindMedians() {
    int a, b, c;
    std::cout << "enter the sides of your triangle via 'enter'" << std::endl;
    std::cin >> a >> b >> c;
    float MedianA = (sqrt(2 * b * b + 2 * c * c - a * a) / 2);
    float MedianB = (sqrt(2 * a * a + 2 * c * c - b * b) / 2);
    float MedianC = (sqrt(2 * a * a + 2 * b * b - c * c) / 2);
    float NewMedianA = (sqrt(2 * MedianB * MedianB + 2 * MedianC * MedianC - MedianA * MedianA) / 2);
    float NewMedianB = (sqrt(2 * MedianA * MedianA + 2 * MedianC * MedianC - MedianB * MedianB) / 2);
    float NewMedianC = (sqrt(2 * MedianA * MedianA + 2 * MedianB * MedianB - MedianC * MedianC) / 2);
    std::cout << "the medians of the new triangle are equal: " << NewMedianA << "; " << NewMedianB << "; " << NewMedianC << std::endl;
}


// задача 10
void IsoscelesTriangle() {
    std::cout << "enter the sides of your triangle via 'enter':" << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a == b || a == c || b == c) {
        std::cout << "your triangle is isosceles!" << std::endl;
    }
    else {
        std::cout << "your triangle is NOT isosceles" << std::endl;
    }
}


// задача 12
void Recommendation() {
    int height, weight;
    std::cout << "enter your height and weight via 'enter':" << std::endl;
    std::cin >> height >> weight;
    int IdealWeight = height - 100;
    if (weight > IdealWeight) {
        std::cout << "you should lose some weight!" << std::endl;
    }
    else if (weight == IdealWeight) {
        std::cout << "you have the ideal weight!" << std::endl;
    }
    else {
        std::cout << "you should gain some weight!" << std::endl;
    }
}


// задача 14
void CostOfConv() {
    int cost, len, day;
    std::cout << " enter the cost of 1 minute of conversation :" << std::endl;
    std::cin >> cost;
    std::cout << "enter the duration of the conversation:" << std::endl;
    std::cin >> len;
    std::cout << "enter the day of the week on which you spoke (1-7):" << std::endl;
    std::cin >> day;
    if (day > 5) {
        int DiscountAmount = cost * len * 0.8;
        std::cout << "the cost of your conversation with discount was: " << DiscountAmount << std::endl;
    }
    else {
        int amount = cost * len;
        std::cout << "the cost of your conversation was: " << amount << std::endl;
    }


}


// задача 16
void HappyNumber() {
    int num;
    std::cout << "enter your 6-digit number:" << std::endl;
    std::cin >> num;
    int a = num / 100000 + (num % 100000) / 10000 + (num % 10000) / 1000;
    int b = (num % 1000) / 100 + (num % 100) / 10 + num % 10;
    if (a == b) {
        std::cout << "your number is happy!" << std::endl;
    }
    else {
        std::cout << "your number is NOT happy!" << std::endl;
    }

}


// задача 18
void Palindrome() {
    int num;
    std::cout << "enter your four - digit number: " << std::endl;
    std::cin >> num;
    if (num % 10 == num / 1000 & (num / 100) % 10 == (num / 10) % 10) {
        std::cout << "Your number is a Palindrome!" << std::endl;
    }
    else {
        std::cout << "Your number is NOT a Palindrome!" << std::endl;
    }


}


// задача 20
void Rectangle() {
    float a, b, c, d;
    std::cout << "enter the real positive numbers 'a, b, c, d' via 'enter':" << std::endl;
    std::cin >> a >> b >> c >> d;
    if ((a < c & b < d) || (a < d & b < c)) {
        std::cout << "rectangle 'ab' can be placed inside 'cd'" << std::endl;
    }
    else {
        std::cout << "rectangle 'ab' can NOT be placed inside 'cd'" << std::endl;
    }

}

int main()
{

    Circle(); // задача 2

    SumDigits(); // задача 4

    PolToCart(); // задача 6

    FindMedians(); // задача 8

    IsoscelesTriangle(); // задача 10

    Recommendation(); // задача 12

    CostOfConv(); // задача 14

    HappyNumber(); // задача 16

    Palindrome(); // задача 18

    Rectangle(); // задача 20

    return 0;
}
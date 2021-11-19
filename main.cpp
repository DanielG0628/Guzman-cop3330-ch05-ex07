/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Guzman
 */


#include <iostream>
#include <cmath>
#include "quadratic.cpp"
using namespace std;

int main ()

{
    double root1, root2, a, b, c, x;

    cout << "What is a, b, and c? ";
    cin >>a >>b >>c;

    x = findX(b, a, c);

    if (x == 0) {
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "The root is real and it is " << root1;
    }

    else if (x > 0) {
    root1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "The roots are real and they are " << root1 << " and " << root2;
    }

    else if (x < 0) {
        cout << "There are no real roots";
    }
}
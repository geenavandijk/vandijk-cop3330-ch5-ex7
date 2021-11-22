/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Geena-Maria van Dijk
 */

#include "std_lib_facilities.h"

int main ()
{
    double a,b,c,d,x1,x2;

    cout << "Enter three numbers a, b, and c: "<<endl;
    cin>> a >> b >> c;

    //How do you know if the result is pausible?
    // check if b^2 - 4ac >= 0, if so, result is pausible

    d = (b*b) - (4*a*c);

    if (d == 0)
    {
        x1 = x2 = ((-1)*b)/(2*a);
        cout << "The root of the quadratic equation is " << x1 << endl;
    }

    if (d > 0)
    {
        x1 = ((-1)*b + (sqrt(d)))/(2*a);
        x2 = ((-1)*b - (sqrt(d)))/(2*a);
        cout << "The roots of the quadratic equation are x1 = "<< x1 << " and x2 = "<< x2 << endl;
    }

    //Can you check if they are correct?
    //Yes by plugging values of x into original equation

    if (d >= 0)
    {
        double check = a*x1*x1 + b*x1 + c;

        if (check == 0)
            cout <<"Result for x1 is correct"<< endl;

        else 
            cout<< "Incorrect result for x1."<<endl;

        if (x1 != x2)
        {
            check = a*x2*x2 + b*x2 + c;
            if (check == 0)
                cout <<"Result for x2 is correct"<< endl;
            else
                cout << "Incorrect result for x2." <<endl;
        }

    }

    if (d < 0 )
        cout << "This equation has no real roots."<< endl;

    return 0;
}
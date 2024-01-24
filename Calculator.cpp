#include<iostream>
using namespace std;

class Calculator
{
private:
long number1;
long number2;

public:
Calculator();
long Addition(long x,long y);
long Subtraction(long x,long y);
long Multiplication(long x,long y);
long Division(long x,long y);
};

Calculator::Calculator()
{
    number1=0;
    number2=0;
}
long Calculator::Addition(long x,long y){

    return x+y;
}
long Calculator::Subtraction(long x, long y) {

	return x - y;
}

long Calculator::Multiplication(long x,long y)
{
    return x*y;
}

int main()
{


    Calculator cal;



    cout<<"Addition of 3 and 5 is : "<<cal.Addition(3,5)<<endl;
    
    cout<<"Multiplication of 3 and 5 is : "<<cal.Multiplication(3,5)<<endl;
    
    cout<<"Division of 3 and 5 is : "<<cal.Division(3,5)<<endl;
    
    cout<<"Subtration of 3 and 5 is : "<<cal.Subtraction(3,5)<<endl;


return 0;
}
long Calculator::Division(long x, long y)
{
    if (y == 0)
    {
        cout << "Error: Division by zero is undefined." << endl;
        return 0; // You may choose a different way to handle division by zero, such as throwing an exception.
    }

    return x / y;
}

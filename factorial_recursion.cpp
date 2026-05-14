// Question 6
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int number = 5;

    cout << "Factorial = " << factorial(number) << endl;

    return 0;
}

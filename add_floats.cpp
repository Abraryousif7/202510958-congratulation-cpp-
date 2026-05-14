// Question 2
#include <iostream>
using namespace std;

float addNumbers(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    float result;

    result = addNumbers(1.2, 2.3, 3.4, 4.5);

    cout << "Sum = " << result << endl;

    return 0;
}

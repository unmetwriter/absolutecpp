#include <iostream>
#include <string>
using namespace std;

void exercise1112()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Hello World" << endl;
    cout << "A\nB\tnC" << endl;
}

void exercise68()
{
    int first = 53, second = 2;
    cout << "Quotient: " << first / second << "\n"
         << "remainder:" << first % second << endl;

    double c = 20.0;
    double f = 9 / 5;
    f = f * c + 32;
    cout << f << endl;
}

int main()
{
    exercise68();
    return 0;
}

void exercise_1_3()
{
    short hours(10), minutes(15);
    float height(5.5);
    double weight(55.5);
    cout << "Hello World" << endl;
    char char_example;
    int int_example;
    float float_example;
    double double_example;
    cout << char_example << int_example << float_example << double_example << endl;
    // The output of this will be garbage because the variables are uninitialized.s function is intentionally left empty.
}
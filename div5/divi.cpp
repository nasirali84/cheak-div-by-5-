#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a posetive number: ";
    cin >> num;
    if (num % 5 == 0)
    {
        cout << num << " Is divisible by 5";
    }
    else
    {
        cout << num << " Is not divisible by 5";
    }
    return 0;
}
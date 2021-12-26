#include <iostream>

using namespace std;

void oddEven(int num)
{
    while (num >= 0)
    {
        for (int i = 0; i <= num; i++)
        {
            (i % 2 == 0) ? cout << i << " is even\n" : cout << i << " is odd\n";
        }
        cout << "Enter another number or enter a negative number to exit: ";
        cin >> num;
    }
}

int main(void)
{
    
    oddEven(4);
    return 0;
}
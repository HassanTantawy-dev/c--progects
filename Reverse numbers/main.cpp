#include <iostream>

using namespace std;

int main()
{
    int num, reversenum = 0;
    char agian;
    cout << "enter positive number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "error,number not positive";
        return 1;
    }
    while (num > 0)
    {
        int digit = num % 10;
        reversenum = reversenum * 10 + digit;
        num /= 10;
    }
    cout << "\nrevrse number: " << reversenum << endl;
    return 0;
}
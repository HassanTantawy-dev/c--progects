#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char ch, again;

    do
    {
        cout << "\n*****************************\n";

        cout << "Write two integer number ,while Write operator from these (+,-,*,/,%), then press enter: ";
        cin >> x >> ch >> y;
        cout << "\n*****************************";

        if (ch == '+')
        {
            cout << "\n sum of " << x << " and " << y << " = " << x + y << endl;
        }

        else if (ch == '-')
        {
            cout << " \nsubtract of " << x << " and " << y << " = " << x - y << endl;
        }

        else if (ch == '*')
        {
            cout << " \nmultiplied of " << x << " and " << y << " = " << x * y << endl;
        }
        else if (ch == '/')
        {
            cout << " \ndivided of " << x << " and " << y << " = " << x / y << endl;
        }
        else if (ch == '%')
        {
            cout << " \nThe rest of the division " << x << " and " << y << " = " << x % y << endl;
        }
        else
        {
            cout << "\nerror,  please Write operator from these only (+,-,*,/)";
        }
        cout << "\n*****************************";

        cout << "\nNeed another operation, write (y) for yes and (n) for no: ";
        cin >> again;

        while (again != 'y' && again != 'n')
        {
            cout << "\nerror, write only (y) for yes and (n) for no: ";
            cin >> again;
        }
    } while (again == 'y');
    cout << "\n*****************************\n";

    cout << "Thank you for using the calculator.\n" << endl;
}

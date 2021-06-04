#include <iostream>

using namespace std;

int main()
{
    int a, sum = 0;
    char n;

    for (int i = 0; i < 100000; i++)
    {
        cout << "enter the signs to make the sum of the numbers: ";
        cin >> n;

        if (n == '+')
        {
            cout << "enter the number you want to make sum of: ";
            cin >> a;
            sum = sum + a;
            cout << sum << endl;
        }
        else if (n == '-')
        {
            cout << "enter the number you want to make sum of: ";
            cin >> a;
            sum = sum - a;
            cout << sum << endl;
        }
        else if (n == '*')
        {
            cout << "enter the number you want to make sum of: ";
            cin >> a;
            sum = sum * a;
            cout << sum << endl;
        }
        else if (n == '/')
        {
            cout << "enter the number you want to make sum of: ";
            cin >> a;
            sum = sum / a;
            cout << sum << endl;
        }
        else if (n == 'c')
        {
            sum = 0;
            cout << sum << endl;
            break;
        }
        else if (n == '=')
        {
            cout << sum << endl;
            break;
        }
        else
        {
            cout << sum << endl;
            cout << "error" << endl;
            break;
        }
    }
}
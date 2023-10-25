#include <iostream>
#include<cmath>
using namespace std;
void TrapezoidalMethod(int n /*5*/, double a /*0*/, double b /*1*/)
{
    double h = (b - a) / (n - 1); //.25
    double x[n];
    double temp = a;
    for (int i = 0; i < n; i++)
    {
        x[i] = temp;
        temp += h;
    }
    double f_x[n];
    int LastIndex = -1;
    for (int i = 0; i < n; i++)
    {
        f_x[i] = pow(x[i],4);
        LastIndex++;
    }
    double I = 0;
    double allValuesOfF_x = 0;
    for (int i = 1; i < n - 1; i++)
    {
        allValuesOfF_x += f_x[i];
    }
    I = h / 2 * (f_x[0] + f_x[LastIndex] + 2 * allValuesOfF_x);
    cout << endl
         << "_________By Trapezoidal Method_________" << endl
         << endl;
    cout << "I = " << I << endl;
}

void SimpsonsRUleOdd(int n, double a, double b)
{
    double h = (b - a) / (n - 1);
    double x[n];
    double temp = a;
    for (int i = 0; i < n; i++)
    {
        x[i] = temp;
        temp += h;
    }
    double f_x[n];
    int LastIndex = -1;
    for (int i = 0; i < n; i++)
    {
        f_x[i] = x[i] * x[i] * x[i] * x[i];
        LastIndex++;
    }

    double I = 0;
    double ValuesEvenInF_x = 0;
    double ValuesOddInF_x = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            ValuesEvenInF_x += f_x[i];
        }
        else
        {
            ValuesOddInF_x += f_x[i];
        }
    }
    I = h / 3 * (f_x[0] + f_x[LastIndex] + 4 * ValuesOddInF_x + 2 * ValuesEvenInF_x);
    cout << endl
         << "_________By Simpsons Rule_________" << endl
         << endl;
    cout << "I = " << I << endl;
}

void SimpsonsRUleEven_4(int n, double a, double b)
{
    double h = (b - a) / (n - 1);
    double x[n];
    double temp = a;
    for (int i = 0; i < n; i++)
    {
        x[i] = temp;
        temp += h;
    }
    double f_x[n];
    int LastIndex = -1;
    for (int i = 0; i < n; i++)
    {
        f_x[i] = x[i] * x[i] * x[i] * x[i];
        LastIndex++;
    }
    double I = 0;
    double allValuesOfF_x = 0;
    for (int i = 1; i < n - 1; i++)
    {
        allValuesOfF_x += f_x[i];
    }
    I = h * 3 / 8 * (f_x[0] + f_x[LastIndex] + 3 * allValuesOfF_x);
    cout << endl
         << "_________By Simpsons Rule_________" << endl
         << endl;
    cout << "I = " << I << endl;
}

void SimpsonsRUleEven(int n, double a, double b)
{
    double h = (b - a) / (n - 1);
    double x[n];
    double temp = a;
    for (int i = 0; i < n; i++)
    {
        x[i] = temp;
        temp += h;
    }
    double f_x[n];
    int LastIndex = -1;
    int LimitIndex = n - 3;
    for (int i = 0; i < LimitIndex; i++)
    {
        f_x[i] = x[i] * x[i] * x[i] * x[i];
        LastIndex++;
    }

    double IOdd = 0;
    double ValuesEvenInF_x = 0;
    double ValuesOddInF_x = 0;
    for (int i = 1; i < LimitIndex - 1; i++)
    {
        if (i % 2 == 0)
        {
            ValuesEvenInF_x += f_x[i];
        }
        else
        {
            ValuesOddInF_x += f_x[i];
        }
    }
    IOdd = h / 3 * (f_x[0] + f_x[LastIndex] + 4 * ValuesOddInF_x + 2 * ValuesEvenInF_x);

    for (int i = n - 4; i < n; i++)
    {
        f_x[i] = x[i] * x[i] * x[i] * x[i];
        LastIndex++;
    }

    double IEven = 0;
    double allValuesInF_x = 0;
    for (int i = 1; i < n - 1; i++)
    {
        allValuesInF_x += f_x[i];
    }
    IEven = h * 3 / 8 * (f_x[0] + f_x[LastIndex] + 3 * allValuesInF_x);
    int I = IEven + IOdd;
    cout << endl
         << "_________By Simpsons Rule_________" << endl
         << endl;
    cout << "I = " << I << endl;
}

int main()
{
    int n, a, b;
newData:
    cout << "Enter the numbers of values <n>: ";
here:
    cin >> n;
    if (n < 3)
    {
        cout << endl
             << "Error! --> Enter the positive number of values: ";
        goto here;
    }
in:
    cout << "Enter the first value <a>: ";
    cin >> a;
    cout << "Enter the last value <b>: ";
    cin >> b;
    if (a > b)
    {
        cout << "\nError! --> Must be <<Last value>> greater than <<First value>>\n"
             << endl;
        goto in;
    }

    int Equation = 0;
    do
    {
    there:
        cout << "\n-----Chose number of equation----- " << endl;
        cout << "1- By trapezoidalMethod" << endl;
        cout << "2- By simpsonsRule" << endl;
        cout << "3- By trapezoidalMethod and simpsonsRule" << endl;
        cout << "4- site a new data" << endl;
        cout << "5- Exit" << endl;
        cout << "Enter the number you Choice: ";

        cin >> Equation;
        if (Equation != 5)
        {
            cout << endl
                 << "--------------------------------------------------------" << endl;
        }
        switch (Equation)
        {
        case 1:
            TrapezoidalMethod(n, a, b);
            break;

        case 2:
            if (n % 2 != 0)
            {
                SimpsonsRUleOdd(n, a, b);
            }
            else if (n == 4)
            {
                SimpsonsRUleEven_4(n, a, b);
            }
            else if (n != 4 && n % 2 == 0)
            {
                SimpsonsRUleEven(n, a, b);
            }
            break;

        case 3:
            TrapezoidalMethod(n, a, b);
            cout << "\n\n----------------------------------------------------------------\n\n";
            if (n % 2 != 0)
            {
                SimpsonsRUleOdd(n, a, b);
            }
            else if (n == 4)
            {
                SimpsonsRUleEven_4(n, a, b);
            }
            else if (n != 4 && n % 2 == 0)
            {
                SimpsonsRUleEven(n, a, b);
            }
            break;

        case 4:
            goto newData;

        case 5:
            break;
        default:
            cout << "\nError! --> Please enter available equations" << endl;
            cout << "----------------------------------------------\n";
            goto there;
        }
    } while (Equation != 5);

    return 0;
}
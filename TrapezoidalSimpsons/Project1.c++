#include <iostream>
#include<cmath>
using namespace std;
void StraightLine(int n)
{
    double x[n];
    double y[n];
    cout << "\n----------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in x: ";
        cin >> x[i];
    }
    cout << "\n----------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in y: ";
        cin >> y[i];
    }

    double sumOfX = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX += x[i];
    }

    double sumOfY = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfY += y[i];
    }

    double sumOfXSquare = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfXSquare += pow(x[i],2);
    }

    double sumOfX_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX_Multiply_Y += x[i] * y[i];
    }
    double a;
    double b;
    double c = sumOfX / n;

    b = (sumOfX_Multiply_Y - c * sumOfY) / (sumOfXSquare - c * sumOfX);

    a = (sumOfY - sumOfX * b) / n;

    cout << "\nEquation: "
         << "y = " << a << " + " << b << " x" << endl;
}

void parabola(int n)
{
    double x[n];
    double y[n];
    cout << "\n----------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in x: ";
        cin >> x[i];
    }
    cout << "\n----------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in y: ";
        cin >> y[i];
    }

    double sumOfX = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX += x[i];
    }

    double sumOfY = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfY += y[i];
    }

    double sumOfXSquare = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfXSquare += pow(x[i],2);
    }

    double sumOfX3 = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX3 += pow(x[i],3);
    }

    double sumOfX_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX_Multiply_Y += x[i] * y[i];
    }

    double sumOfX4 = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX4 += pow(x[i],4);
    }

    double sumOfX2_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX2_Multiply_Y += pow(x[i],2) * y[i];
    }

    double a;
    double b;
    double c;
    double m = sumOfX / n;
    double l = sumOfXSquare / n;
    double k = sumOfXSquare - (sumOfX * m);
    double r = sumOfX3 - (sumOfXSquare * m);
    double h = sumOfX_Multiply_Y - sumOfY * m;
    double w = sumOfX3 - (sumOfX * l);
    double e = sumOfX4 - (sumOfXSquare * l);
    double f = sumOfX2_Multiply_Y - (sumOfY * l);
    double t = w / k;

    c = (f - h * t) / (e - r * t);
    b = (h - (c * r)) / k;
    a = (sumOfY - (sumOfX * b) - (sumOfXSquare * c)) / n;

    cout << "\nEquation: "
         << "y = " << a << " + " << b << " x"
         << " + " << c << " x^2" << endl;
}
//! y = a(e^bx) 
void SpacialStraightLine0(int n)
{
    double x[n];
    double y[n];
    cout << "\n----------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in x: ";
        cin >> x[i];
    }
    cout << "\n----------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in y: ";
        cin >> y[i];
    }

    double sumOfX = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX += x[i];
    }

    double sumOfY = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfY += log(y[i]);
    }

    double sumOfXSquare = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfXSquare += (pow(x[i],2));
    }

    double sumOfX_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX_Multiply_Y += x[i] * log(y[i]);
    }
    double A;
    double b;
    double c = sumOfX / n;

    b = (sumOfX_Multiply_Y - c * sumOfY) / (sumOfXSquare - c * sumOfX);

    A = (sumOfY - sumOfX * b) / n;
    double a= exp(A);
    cout<<A<<endl;
    cout << "\nEquation: "<< "y = " << a << " (e ^ " << b << "x)" << endl;
}
//! y = a+(b/x)
void SpacialStraightLine1(int n)
{
    double x[n];
    double y[n];
    cout << "\n----------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in x: ";
        cin >> x[i];
    }
    cout << "\n----------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in y: ";
        cin >> y[i];
    }

    double sumOfX = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX += 1 / x[i];
    }

    double sumOfY = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfY += y[i];
    }

    double sumOfXSquare = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfXSquare += 1 / (pow(x[i],2));
    }

    double sumOfX_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX_Multiply_Y += (1 / x[i]) * y[i];
    }
    double a;
    double b;
    double c = sumOfX / n;

    b = (sumOfX_Multiply_Y - c * sumOfY) / (sumOfXSquare - c * sumOfX);

    a = (sumOfY - sumOfX * b) / n;

    cout << "\nEquation: "
         << "y = " << a << " + (" << b << " / x)" << endl;
}
//! y = b/(a+x)
void SpacialStraightLine2(int n)
{
    double x[n];
    double y[n];
    cout << "\n----------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in x: ";
        cin >> x[i];
    }
    cout << "\n----------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in y: ";
        cin >> y[i];
    }

    double sumOfX = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX += x[i];
    }

    double sumOfY = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfY += 1 / y[i];
    }

    double sumOfXSquare = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfXSquare += pow(x[i],2);
    }

    double sumOfX_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX_Multiply_Y += x[i] * (1 / y[i]);
    }
    double A;
    double B;
    double c = sumOfX / n;

    B = (sumOfX_Multiply_Y - c * sumOfY) / (sumOfXSquare - c * sumOfX);

    A = (sumOfY - sumOfX * B) / n;

    double b = 1 / B;
    double a = A * b;

    cout << "\nEquation: "
         << "y = " << b << " / (" << a << " + x)" << endl;
}
//! y = ax+b(x^2)
void SpacialStraightLine3(int n)
{
    double x[n];
    double y[n];
    cout << "\n----------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in x: ";
        cin >> x[i];
    }
    cout << "\n----------------------------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value <" << i + 1 << ">"
             << " in y: ";
        cin >> y[i];
    }

    double sumOfX = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX += x[i];
    }

    double sumOfY = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfY += y[i] / x[i];
    }

    double sumOfXSquare = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfXSquare += pow(x[i],2);
    }

    double sumOfX_Multiply_Y = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfX_Multiply_Y += y[i]; // x[i] * (y[i] / x[i])
    }
    double a;
    double b;
    double c = sumOfX / n;

    b = (sumOfX_Multiply_Y - c * sumOfY) / (sumOfXSquare - c * sumOfX);

    a = (sumOfY - sumOfX * b) / n;

    cout << "\nEquation: "
         << "y = " << a << " x + " << b << " x^2" << endl;
}

int main()
{
there:
    int n = 0;
    cout << "Enter the number of data: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "\nError! --> Number of elements must be positive\n"
             << endl;
        cout << "--------------------------------\n";
        goto there;
    }
here:
    int choose = 0;
    do
    {
        cout << "\n--------------------------------\n";
        cout << "1- To strait line equation" << endl;
        cout << "2- To parabola equation" << endl;
        cout << "3- To spacial equation" << endl;
        cout << "4- Exit" << endl;
        cout << "Enter equations number: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            StraightLine(n);
            break;
        case 2:
            parabola(n);
            break;
        case 3:
        {

            string equation = "";
            cout << "--------------------------------\n";
        in:
            cout << "\nEnter your equation\n";
            cout << "y = ";
            cin >> equation;
            if (equation == "a(e^bx)")
            {
                SpacialStraightLine0(n);
            }
            else if (equation == "a+(b/x)")
            {
                SpacialStraightLine1(n);
            }
            else if (equation == "b/(a+x)")
            {
                SpacialStraightLine2(n);
            }
            else if (equation == "ax+b(x^2)")
            {
                SpacialStraightLine3(n);
            }
            else
            {
                cout << "\nError! --> Enter a valid equation\n";
                cout << "\n--------------------------------\n";
                goto in;
            }
            break;
        }
        case 4:

            break;
        default:
            cout << "Error! --> Enter a valid number" << endl;
            goto here;
        }
    } while (choose != 4);

    return 0;
}
#include <iostream>
using namespace std;
int EnterNumberA(int a)
{
    cout << "Enter A - ";
    cin >> a;
    cout << "A = " << a << "\n";
    return a;
}

int EnterNumberB(int b)
{
    cout << "Enter B - ";
    cin >> b;
    cout << "B = " << b << "\n";
    return b;
}

int EnterNumberC(int c)
{
    cout << "Enter C - ";
    cin >> c;
    cout << "C = " << c << "\n";
    return c;
}

void Zadanie1(int a, int b, int c)
{
    cout << "remainder from dividing the sum of integers A and B by C - " << (a + b) % c << "\n";
}

void Zadanie2(int a, int b, int c)
{
    cout << "integer part of dividing the sum of integers A and B by C - " << (a + b) / c << "\n";
}


int main()
{
    cout << "- enter the job number" << "\n" << "1) enter A" << "\n" << "2) enter B" << "\n" << "3) enter C" << "\n" << "4) find the remainder from dividing the sum of integers A and B by C" << "\n" << "5) find the integer part of dividing the sum of integers A and B by C" << "\n" << "0 - is exit" << "\n";
    int N, a = 0, b = 0, c = 0;
    cin >> N;

    while (1)
    {
        switch (N)
        {
        case 1:
            a = EnterNumberA(a);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 2:
            b = EnterNumberB(b);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 3:
            c = EnterNumberC(c);
            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 4:
            Zadanie1(a, b, c);

            cout << "enter the job number - ";
            cin >> N;
            continue;
        case 5:
            Zadanie2(a, b, c);

            cout << "enter the job number - ";
            cin >> N;
            continue;

        default:
            cout << "Programm is finished";
            return 0;
        }
    }
}

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
    //task 1
    int i1, i2, i3;
    int x = 0;
    for (int i = 100;i <= 999;i++)
    {
        i1 = i / 100;
        i2 = i % 10;
        i3 = (i % 100) / 10;
        if (i1 == i2 || i2 == i3 || i3 == i1) x++;

    }
    cout << "Result: " << x << "\n";

    //task 2
    int l1, l2, l3;
    int a = 0;
    for (int y = 100;y <= 999;y++)
    {
        l1 = y / 100; 
        l2 = (y % 100) / 10;
        l3 = y % 10;      
        if (l1 != l2 && l2 != l3 && l3 != l1) a++;

    }
    cout << "Result: " << a << "\n";
  
    //rask 3
    int m = 0;
    int n;

    cout << "Введите число: ";
    cin >> n;

    while (n > 0)
    {
        if (n % 10 != 3 && n % 10 != 6)
        {
            m *= 10;
            m += n % 10;
        }
        n /= 10;
    }
    cout << "Полученное число: ";
    while (m > 0)
    {
        cout << m % 10;
        m /= 10;
    }
    cout << endl;

    //task 4

    int k;
    int b = 2;
    cout << "Введите число: ";
    cin >> k;
    if (k > 3)
    {
        cout << "Числа = ";
    }
    else
    {
        cout << "нет таких чисел";
    }
    for (k; k >= b * b; b++)
    {
        if (k % (b * b) == 0 && k % (b * b * b) != 0)
        {
            cout << b << " ";
        }
    }

    //task 5

    int d = 2, s, t;

    cout << "Введите число: ";
    cin >> s;
    cout << "числа на которые делиться без остатка = ";
    while (d <= s)
    {
        t = s % d;
        if (t == 0)
        {
            cout << d << "; ";
        }
        d++;
    }
    return 0;
}

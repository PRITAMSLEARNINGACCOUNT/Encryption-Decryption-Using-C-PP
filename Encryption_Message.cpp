#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;
int Func(int a)
{
    int temp = a;
    int n;
    int i = 0;
    for (i = 0; i >= 0; i++)
    {
        if (temp % 2 == 0)
        {
            temp = temp / 2;
        }
        else
        {
            temp = temp / 2;
        }
        if (temp == 1)
        {
            break;
        }
    }
    return i;
}
void Func_2(int a)
{
    int *ptr;
    int num = a;
    int n = Func(num);
    n = n + 1;
    ptr = (int *)malloc(n * sizeof(int));
    if (num == 32)
    {
        cout << "0" ;
    }

    for (int i = 0; i < n; i++)
    {
        if (num % 2 == 0)
        {
            ptr[i] = 0;
            num = num / 2;
        }
        else
        {
            ptr[i] = 1;
            num = num / 2;
        }
        if (num == 1)
        {
            ptr[i + 1] = 1;
            break;
        }
    }
    for (int i = n; i >= 0; i--)
    {
        printf("%d", ptr[i]);
    }
}
int main()
{

    string var;
    cout << "Enter Your Message" << endl;
    getline(cin, var);
    cout << "So The Encoded Message Is " << endl;
    for (int i = 0; i < var.length(); i++)
    {
        int temp;
        temp = var[i];
        Func_2(temp);
    }

    return 0;
}
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int Return_Value(int a)
{
    if (a == 48)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void Function(char *a, int n, int num)
{
    int Num = 0;
    int Sum = 0;
    for (int i = n; i >= num; i--)
    {
        Sum += (Return_Value((int)a[i])) * pow(2, Num);
        Num++;
    }
    printf("%c", Sum);
}
void Grouping(string str, int n, int num)
{
    char *arr = new char[str.length() + 1];
    strcpy(arr, str.c_str());
    Function(arr,n,num);
    
    
    cout << "Grouping Function" << endl;
}
int main()
{
    string var;
    cout << "Enter Your Message" << endl;
    getline(cin, var);
    int temp = var.length();
    int temp_2 = 0;
    for (int i = 0; i <= var.length(); i++)
    {

        Grouping(var, temp_2 + 7, temp_2);
        temp_2 += 7;
        temp = temp - 7;
        cout << temp_2 << endl;
        cout << "Main Function" << endl;
        if (temp < 7)
        {
            break;
        }
    }

    return 0;
}
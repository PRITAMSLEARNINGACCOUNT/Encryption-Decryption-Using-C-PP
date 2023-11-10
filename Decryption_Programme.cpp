#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
string Grouping(string str, int n, int num)
{
    int num_1 = num;
    string temp;
    char *arr = new char[str.length() + 1];
    strcpy(arr, str.c_str());
    for (num_1 = num; num_1 < n; num_1++)
    {
        temp += arr[num_1];
    }
    return temp;
}
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
void Function(char *a)
{
    int Num = 0;
    int Sum = 0;
    for (int i = 6; i >= 0; i--)
    {
        Sum += (Return_Value((int)a[i])) * pow(2, Num);
        Num++;
    }
    printf("%c", Sum);
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

        char *array = new char[8];
        strcpy(array, Grouping(var, temp_2 + 7, temp_2).c_str());
        Function(array);
        temp_2 += 7;
        temp = temp - 7;

        if (temp < 7)
        {
            break;
        }
    }

    return 0;
}
#include<iostream>
using namespace std;

// 配列の中身を表示する関数
void PrintArray(int* pnumber)
{
    for (int i = 0; i < 5; i++)
    {
        cout << *(pnumber + i) << endl;
    }
}

// 倍数をかけて表示する関数
void PrintMultiply(int* pnumber, int add)
{
    for (int i = 0; i < 5; i++)
    {
        cout << add**(pnumber + i) << endl;
    }
}

int main(void)
{
    //配列
    int number[5] = { 10,20,30,40,50 };
    int* pnumber;
    int add = 0;

    //pnumberは配列の先頭を示す
    pnumber = number;

    // 配列の表示
    PrintArray(pnumber);

    cout << endl;
    cout << "倍にしたい数字の倍数を入力しろ" << endl;
    cin >> add;

    // 倍数をかけて表示
    PrintMultiply(pnumber, add);

    return 0;
}
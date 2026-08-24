#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //&が付けられた数字を*がつけれた数字（アドレス）に渡す
    int* p = &a;
    //変数で与えられた数字を出力
    cout << "aの初期値: " << a << endl;
    //*Pの値を10として代入する
    *p = 10;
    //*Ｐで定義した値を&aに渡して、出力する
    cout << "aの変更後の値: " << a << endl;
    //mainを終了させる
    return 0;
}
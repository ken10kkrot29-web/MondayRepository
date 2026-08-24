#include<iostream>
using namespace std;

int main(void)
{
	//配列
	int number[5] = {10,20,30,40,50};
	int* pnumber;

	//pAryは配列の先頭を示す
	pnumber = number;

	for (int i = 0; i < 5; i++)
	{
		cout << "number[" << i << "]:" << *(pnumber + i) << endl;
	}
	return 0;
}
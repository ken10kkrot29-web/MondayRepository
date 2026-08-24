#include<iostream>
using namespace std;

int main(void)
{
	//配列
	int number[5] = {35,82,17,96,54};
	int* pnumber;
	int max = 0;

	//pAryは配列の先頭を示す
	pnumber = number;

	for (int i = 0; i < 5; i++)
	{
		cout << "number[" << i << "]:" << *(pnumber + i) << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		if(*(pnumber + i)>= max)
		{
			max = *(pnumber + i);
		}
	}
	cout << "最大値は" << max << "です" << endl;
	return 0;
}
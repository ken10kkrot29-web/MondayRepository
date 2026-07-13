#include<iostream>
#include<ctime>
#include<cstdlib>
#include"20260706_Header2_obakento.h"
using namespace std;

int main(void)
{
	int exp = 0;
	int level = 1;

	srand((unsigned int)time(NULL));

	while (level <= 4)
	{
		Game(exp, level);
	}

	return 0;
}
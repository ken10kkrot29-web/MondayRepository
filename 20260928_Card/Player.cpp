#include "Player.h"
#include<iostream>
using namespace std;

void Player::LOOP()
{
	while (true)
	{
		cout << "プレイヤーの合計" << total << endl;
	}
}
int Player::GetTotal()
{
	return total;
}
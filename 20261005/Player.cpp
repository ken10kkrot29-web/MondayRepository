#include "Player.h"
#include"Config.h"
#include<iostream>
using namespace std;
//コンストラクタ
Player::Player() :Character() {}
//プレイヤーの行動
void Player::Action(Character& target)
{
	int choice;
	cout << "行動を選択してください。" << endl;
	cout << "1:攻撃\n 2:回復\n" << endl;
	while (true)
	{
		cin >> choice;
		if (Config::ACTION_ATTACK > choice ||Config::ACTION_RECOVERY < choice)
		{
			Attack(target);
		}
		else if (choice == Config::ACTION_RECOVERY)
		{
			Recovery();
		}
	}
	
}
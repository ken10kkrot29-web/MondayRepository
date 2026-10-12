#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;

int main(void)
{
	//Character character("teibatatuta");
	//cout << character.GetName() << endl;
	//character.Attack();

	string playerName;
	string enemyName;
	string bossName;
	cout << "名前を入力してください："<<endl;
	cout << "勇者" << endl;
	cin >> playerName;
	cout << "敵" << endl;
	cin >> enemyName;
	cout << "ボス" << endl;
	cin >> bossName;

	//コンストラクト
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	player.Attack();
	enemy.Attack();	
	boss.Attack();

	return 0;
}
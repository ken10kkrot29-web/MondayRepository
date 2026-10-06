#include "Character.h"
#include"Config.h"

#include<iostream>
#include<cstdlib>

using namespace std;
//コンストラクタ
Character::Character()
{
	hp = Config::MAX_HP;

	attack = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defense = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	avoid = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}
//ステータス表示
void Character::ShowStatus()
{
	cout << "HP:" << hp << endl;
	cout << "攻撃力:" << attack << endl;
	cout << "防御力:" << defense << endl;
	cout << "回避率:" << avoid << endl;
}
//攻撃
void Character::Attack(Character& target)
{
	int attackValue = attack + randomValue;
	cout << "攻撃値:" << attackValue << endl;

	//回避判定
	if (attackValue <= target.avoid)
	{
		cout << "攻撃を回避した！" << endl;
		cout << "ダメージは0でした。" << endl;
		return;
	}
	//ダメージ計算
	int damage = attackValue - target.defense;
	if (damage < 0)
	{
		damage = 0;
	}

	target.hp -= damage;

	cout << "攻撃成功！！" << "ダメージ" << damage << "のダメージを与えた！" << endl;
	//生存判定
	if (target.hp <= Config::DEAD_HP)
	{
		target.hp = 0;
	}
}

void Character::Recovery()
{
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	hp += randomValue;
	
	if(hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
	cout << "HPを" << randomValue << "回復した！" <<"現在のHP" <<hp <<endl;
}

bool Character::IsAlive()
{
	return hp > Config::DEAD_HP;
}

int Character::GetHp()
{
	return hp;
}
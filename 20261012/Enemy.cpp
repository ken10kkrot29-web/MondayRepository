#include "Enemy.h"
#include<iostream>

Enemy::Enemy(std::string name) : Character(name) {}

void Enemy::Attack()
{
	std::cout << "かみつき攻撃！" << std::endl;
}

#include "Battle.h"
#include <iostream>

void ShowStatus(int playerHp, int enemyHp)
{
    std::cout << "\n------------------\n";
    std::cout << "プレイヤーHP : " << playerHp << std::endl;
    std::cout << "敵HP : " << enemyHp << std::endl;
    std::cout << "------------------\n";
}

void AttackEnemy(int& enemyHp)
{
    std::cout << "プレイヤーの攻撃！\n";
    enemyHp -= 30;
}

void HealPlayer(int& playerHp)
{
    std::cout << "プレイヤーは20回復した！\n";
    playerHp += 20;
}

void EnemyTurn(int action, int& playerHp)
{
    if (action == 2)
    {
        std::cout << "敵の攻撃！\n";
        std::cout << "プレイヤーは防御したので10ダメージ！\n";

        playerHp -= 10;
    }
    else if (action == 3)
    {
        std::cout << "敵の攻撃！\n";
        std::cout << "20ダメージ受けた！\n";

        playerHp -= 20;
    }
}
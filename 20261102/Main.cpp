#include<iostream>
#include "Battle.h"
using namespace std;


int main()
{
    int playerHp = 100;
    int enemyHp = 100;

    while (playerHp > 0 && enemyHp > 0)
    {
        ShowStatus(playerHp, enemyHp);

        int action;

        std::cout << "\n行動を選んでください\n";
        std::cout << "1.攻撃\n";
        std::cout << "2.防御\n";
        std::cout << "3.回復\n";
        std::cout << "入力 : ";
        std::cin >> action;

        if (action == 1)
        {
            std::cout << "敵は防御した！\n";
            std::cout << "ダメージは与えられなかった！\n";
        }
        else if (action == 2)
        {
            std::cout << "プレイヤーは防御した！\n";

            EnemyTurn(action, playerHp);
        }
        else if (action == 3)
        {
            HealPlayer(playerHp);

            EnemyTurn(action, playerHp);
        }
        else
        {
            std::cout << "正しい数字を入力してください。\n";
            continue;
        }
    }

    std::cout << "\n=== 戦闘終了 ===\n";

    if (playerHp <= 0)
    {
        std::cout << "プレイヤーの負け！\n";
    }
    else
    {
        std::cout << "プレイヤーの勝ち！\n";
    }

    return 0;
}
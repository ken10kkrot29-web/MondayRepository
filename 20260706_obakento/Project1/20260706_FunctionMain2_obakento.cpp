#include <iostream>
#include <ctime>
#include <cstdlib>
#include "20260706_HeaderMain2_obakento.h"

using namespace std;

// CPUの手
int CPUHand()
{
    return rand() % 3;
}

// 勝敗判定
int Judge(int player, int cpu)
{
    if (player == cpu)
    {
        return 0;   // あいこ
    }
    else if ((player == 0 && cpu == 1) ||
        (player == 1 && cpu == 2) ||
        (player == 2 && cpu == 0))
    {
        return 1;   // 勝ち
    }

    return -1;      // 負け
}

// 獲得経験値
int GetExp()
{
    return rand() % 15 + 1;
}

// ゲーム本体
void Game()
{
    int level = 1;
    int exp = 0;

    while (level < 5)
    {
        int player;
        int cpu;
        int result;

        cout << "====================" << endl;
        cout << "Lv：" << level << endl;
        cout << "EXP：" << exp << endl;
        cout << "====================" << endl;

        cout << "0：グー 1：チョキ 2：パー" << endl;
        cout << "入力：";
        cin >> player;

        cpu = CPUHand();

        cout << "CPU：";
        if (cpu == 0)
            cout << "グー" << endl;
        else if (cpu == 1)
            cout << "チョキ" << endl;
        else
            cout << "パー" << endl;

        result = Judge(player, cpu);

        if (result == 1)
        {
            int getexp = GetExp();

            cout << "あなたの勝ち！" << endl;
            cout << "経験値を" << getexp << "獲得しました！" << endl;

            exp += getexp;

            while (exp >= 20)
            {
                exp -= 20;
                level++;

                if (level <= 5)
                {
                    cout << "レベルアップ！ Lv" << level << "になりました！" << endl;
                }

                if (level == 5)
                {
                    break;
                }
            }

            if (level < 5)
            {
                cout << "現在EXP：" << exp << endl;
            }
        }
        else if (result == 0)
        {
            cout << "あいこ！" << endl;
        }
        else
        {
            cout << "あなたの負け！" << endl;
        }

        cout << endl;
    }

    cout << "================================" << endl;
    cout << "ゲームクリア！" << endl;
    cout << "================================" << endl;
}
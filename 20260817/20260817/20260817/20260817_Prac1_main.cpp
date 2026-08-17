#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;//ピッチの最小値
const int PITING_MAX = 3;// ピッチの最大値
const int PROBABILITY = 4;//確率の最大値
const int STRIKE_COUNT = 3;//ストライクの最大値
const int BALL_COUNT = 4;//ボールの最大値
const int OUT_COUNT = 3;//アウトの最大値
const int HIT_COUNT = 4;//ヒットの最大値
//関数のプロトタイプ宣言
int main(void)
{
    //変数（初期化）
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
	//完全ランダム
    srand((unsigned int)time(NULL));
    //スタートの表示
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
	//条件によるループ（条件が当てはまっているならループする）
	while (Out < OUT_COUNT && Hit < HIT_COUNT)//←ヒットとアウトが０～３のとき
    {
		//プレイヤーに投げる球を画面に表示し、選ばせる
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //条件によるループ（trueの時のみ実行）
        while (true)
        {
            //プレイヤーの入力
            cin >> ply;
			//入力が正しいかどうかの判定（0より小さく、3より大きい場合のみ表示）
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
				//正しければループを抜ける
                break;
            }
        }

		//ピッチングの種類を表示する関数(ヘッダーから呼び出し)
        PitingType(ply);

		//敵の投げる球をランダムで決定する
        emy = rand() % PROBABILITY;
        
        prod = rand() % PROBABILITY;

        //プレイヤーとCPUの選んだ球種が等しくない時
        if (ply != emy)
        {
			//選んだ球種を投げたうち、ランダムが発生し、０だった場合はボールになる
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
				//0以外だった場合はストライクになる
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }

        else
        {
			//初期化
            Strike = 0;
            Ball = 0;
			//選んだ球種を投げたうち、ランダムが発生し、１だった場合はアウトになる
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
				//1以外だった場合はヒットになる
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
		//条件によるループ（変数がストライクカウント以上かつ変数がボールカウント以上のとき）
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
			//ストライク変数がストライクカウント以上のとき
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            else
            {
                //ストライク変数がストライクカウント以下のとき
                Hit++;
            }
            //初期化
            Strike = 0;
            Ball = 0;
        }
		//結果の表示（それぞれの呼び方を宣言）
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

	//結果の表示（ヘッダーから呼び出し）
    Result(Out);
	//ゲーム終了の表示
    return 0;
}
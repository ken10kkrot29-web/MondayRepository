#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"
// ピッチタイプを表示する関数
void PitingType(int piting)
{
	//選択された０～３を実行し、画面表示をし終わるとBreakで表示を消す
	switch (piting)
	{
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//結果を表示する関数
void Result(int out)//←使う新しい変数をここで表示
{
	//もし、outが３以上なら、PLAYER WINNER!!を表示する
	if (out >= 3)
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	else
	{
		//(out >= 3)以外だったら、CPU WINNER!!を表示する
		cout << "CPU WINNER!!" << endl;
	}
}
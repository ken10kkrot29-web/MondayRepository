#include<iostream>
#include"20260706_Header1_obakento.h"
using namespace std;

/*
プレイヤーのHPを回復するプログラムを作成してください。
プレイヤーのHPは100とします。プレイヤーが回復するかどうかを選択させます。
「Yes：1」「No：2」とします。
Yesを選択した場合、回復関数（Heal関数）からHPを20回復させ、現状のHPを表示させます。
Noを選択した場合、そのまま現状のHpを表示させます。
*/

int main(void)
{
	//実行関数
	Run();
	return 0;
}

/*#include<iostream>
using namespace std;

int main(void)
{
	int player;
	player = 100;

	cout << "回復を行いますか？　行う場合は１、行わない場合は２を選択してください。" << endl;
	cin >> player;
	if (player == 1)
	{
		cout << "回復を行います。" << endl;
	}
	else if (player == 2)
	{
		cout << "回復を行いません。" << endl;
	}
	if (player == 1)
	{
		player += 20;
		cout << "回復を行ったので、体力が20回復" << endl;
	}
	else if (player == 2)
	{
		cout << "回復を行わなかったので、体力は変化なし" << endl;
	}
	// 最終的なHPを表示
	std::cout << "現在のHP: " << player << std::endl;
	return 0;
}*/
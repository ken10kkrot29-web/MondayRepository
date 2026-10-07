#include <iostream>
#include "Game.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
	//乱数の初期化
	srand(static_cast<unsigned int>(time(nullptr)));

	//Gameクラスのインスタンスを生成
	Game game;
	//GameクラスのStartメソッドを呼び出す
	game.Start();
	return 0;
}
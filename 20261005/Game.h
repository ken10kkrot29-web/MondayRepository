#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Turn.h"
class Game
{
private:
	Player player;
	Enemy enemy;
public:
	/// <summary>
	/// ゲームコンストラクタ
	/// </summary>
	Game();

	/// <summary>
	/// ゲームを開始する
	/// </summary>
	void Start();
};
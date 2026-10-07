#pragma once
#include "Character.h"
class Enemy :public Character
{
public:
	/// <summary>
	/// Enemyコンストラクタ
	/// </summary>
	Enemy();

	/// <summary>
	/// 敵の行動
	/// </summary>
	/// <param name="target">対象キャラクター</param>
	void Action(Character& target);
};
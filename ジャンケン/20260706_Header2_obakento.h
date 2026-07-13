#pragma once

//定数
//後から変更できない（const）定数
const int INPUT_MIN = 0;//入力範囲を「0から2まで」に制限,その他になるとエラーになる。
const int INPUT_MAX = 2;//1	👆
const int HAND_NUMBER = 3;//ぐーちょきぱーの三つ
const int EXPERIENCE_POINT_MIN = 1;//経験値のランダム最小値・最大値
const int EXPERIENCE_POINT_MAX = 15;//👆
const int THERSHOLD = 20;//境界線 =この数字に達するとレベルアップするということ
enum HAND//関連するいくつかの決まった整数に、分かりやすい『名前』をつけて1まとめにする仕組み
{
	ROCK,
	SCISSORS,
	PAPER
};

/// <summary>
/// 入力チェック関数
/// </summary>
/// <param name="min">最小値</param>
/// <param name="max">最大値</param>
/// <returns>入力した値</returns>
int InputCheck(int min, int max);

/// <summary>
/// 判定関数
/// </summary>
/// <param name="player">Playerが入力した値</param>
/// <param name="cpu">CPUが選択した値</param>
/// <returns>結果</returns>
int Judgement(int player, int cpu);

/// <summary>
/// レベルアップ関数
/// </summary>
/// <param name="exp">経験値</param>
/// <param name="lv">レベル</param>
void LevelUp(int& exp, int& lv);

/// <summary>
/// ゲーム関数
/// </summary>
/// <param name="exp">経験値</param>
/// <param name="level">レベル</param>
void Game(int& exp, int& level);


/// <summary>
/// 入力した手を表示
/// </summary>
/// <param name="hand">入力した手</param>
void ShowHand(int hand);
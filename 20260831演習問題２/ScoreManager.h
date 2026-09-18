#pragma once

class ScoreManager
{
private:
    int currentScore;  // 現在のスコア
    int highScore;     // ハイスコア

public:
    // コンストラクタ
    ScoreManager();

    // 現在のスコアにポイントを加算
    void addPoints(int points);

    // 現在のスコアを0にリセット
    void resetScore();

    // ハイスコアを更新
    void updateHighScore();

    // スコアを画面に表示
    void displayScores();
};
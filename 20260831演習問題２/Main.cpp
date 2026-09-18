#include <iostream>
#include "ScoreManager.h"

int main()
{
    ScoreManager scoreManager;

    scoreManager.addPoints(100);
    scoreManager.addPoints(50);

    scoreManager.updateHighScore();
    scoreManager.displayScores();

    return 0;
}
#include "ScoreManager.h"
#include <iostream>

ScoreManager::ScoreManager()
{
    currentScore = 0;
    highScore = 0;
}

void ScoreManager::addPoints(int points)
{
    currentScore += points;
}

void ScoreManager::resetScore()
{
    currentScore = 0;
}

void ScoreManager::updateHighScore()
{
    if (currentScore > highScore)
    {
        highScore = currentScore;
    }
}

void ScoreManager::displayScores()
{
    std::cout << "Current Score: " << currentScore << std::endl;
    std::cout << "High Score: " << highScore << std::endl;
}
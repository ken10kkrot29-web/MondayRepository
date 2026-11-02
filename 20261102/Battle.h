#pragma once

void ShowStatus(int playerHp, int enemyHp);

void AttackEnemy(int& enemyHp);

void HealPlayer(int& playerHp);

void EnemyTurn(int action, int& playerHp);
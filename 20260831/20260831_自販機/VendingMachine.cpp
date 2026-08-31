#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingManchine::VendingManchine()
{
	money = 0;
	colaStock = 15;
}
//お金を投入
void VendingManchine::insertMoney(int amount)
{
	if (amount > 0)
	{
		money += amount;
	}

}
//コーラのみ購入
void VendingManchine::buyCola()
{
	const int price = 180;
	if (money >= price && colaStock > 0)
	{
		money -= price;
		colaStock--;
		cout << "コカ・コーラを購入しました。俺な飲みます\n";
	}
	else
	{
		cout << "購入できませんでした。\n";
	}

}
//残りのお金を取得する
int VendingManchine::getMoney() const 
{
	return money;
}
//在庫を取得
int VendingManchine::getColaStock() const 
{
	return colaStock;
}
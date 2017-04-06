// Count Four.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include <vector>
#include <iostream>
#include <windows.h>



int main()
{
	std::string chosen_1;
	std::string chosen_2;

	Player * Player_1;
	Player * Player_2;


	std::cout << "Player_1 chosse [human|computer]: ";
		std::cin >> chosen_1;

	std::cout << "Player_2 chosse [human|computer]: ";
		std::cin >> chosen_2;

		if (chosen_1 == "human")
		{
			Player_1 = new humanPlayer('A');
		}
		else if (chosen_1 == "computer")
		{
			Player_1 = new computerPlayer('A');
		}
		if (chosen_2 == "human")
		{
			Player_2 = new humanPlayer('B');
		}
		else if (chosen_2 == "computer")
		{
			Player_2 = new computerPlayer('B');
		}

		Field gameboard;

		gameboard.drawField();





	system("pause");








}


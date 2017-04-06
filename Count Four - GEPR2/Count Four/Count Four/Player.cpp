#include "stdafx.h"
#include "Player.h"

///Constructor for basic Player (Interface for subclasses)
Player::Player()
{

}

///Destructor for Player-interface (not used but forced to create)
Player::~Player()
{
}

///Constructs a human Player which inherits from the interface Player
humanPlayer::humanPlayer(char sign)
{
	m_sign = sign;

	std::cout << "Human Player was constructed!" << std::endl;
}

///Destructor for humanPlayer
humanPlayer::~humanPlayer()
{
}


///Constructs a human Player which inherits from the interface Player
computerPlayer::computerPlayer(char sign)
{
	m_sign = sign;

	std::cout << "Computer Player was constructed!" << std::endl;
}

///Destructor for computerPlayer
computerPlayer::~computerPlayer()
{

}

///Field-constructor
Field::Field()
{
	///Constructs a Field for the Gameboard with the given size
	field.resize(6);

	for (int i = 0; i < 6; i++)
	{
		field[i].resize(9);
	}

	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			///Calculation (int + '0'[char]) for writing integer values into a vector of chars
			char temp_1 = i + '0';
			char temp_2 = j + '0';

			field[i - 1][j - 1] = '.';

			field[i - 1][8] = temp_1;
			field[5][j - 1] = temp_2;
			
		}
	}

	///std::cout << "Field was created!" << std::endl;
}

///Field Destructor
Field::~Field()
{

}

///public member of class Field
void Field::drawField()
{
	///Function that draws the Field which was Instanciated with cinstruct
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << field[i][j];
		}
		std::cout << std::endl;
	}
}

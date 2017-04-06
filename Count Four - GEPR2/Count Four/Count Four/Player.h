#pragma once
#include <iostream>
#include <string>
#include <vector>

class Player
{
private:

public:
	Player();
	virtual ~Player();
};

class humanPlayer : public Player
{
private:
	char m_sign;
public:
	humanPlayer(char sign);
	virtual ~humanPlayer();

};

class computerPlayer : public Player
{
private:
	char m_sign;
public:
	computerPlayer(char sign);
	virtual ~computerPlayer();

};

class Field
{
private:
		
public:
	std::vector <std::vector <char> > field;

	Field();
	virtual ~Field();
	void drawField();

};


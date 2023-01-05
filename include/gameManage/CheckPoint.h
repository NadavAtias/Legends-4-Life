#pragma once
#include "Macros.h"


class CheckPoint 
{
public:
	CheckPoint ( const std::vector < sf::Vector2f >&);
	~CheckPoint() {};


	sf::Vector2f currCheckPointPosition(const sf::Vector2f &);
private:
	std::vector<sf::Vector2f> m_checkPointPosition;
};

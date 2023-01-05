#pragma once
#include <SFML/Graphics.hpp>
#include "gameManage/Direction.h"


//responsible of te camera view, scrolling background
class CameraView
{
public:
	CameraView(sf::RenderWindow&, const float);
	void setZoom(const float);
	~CameraView() {}

	void setView(const sf::Vector2f);

	float setCenter(const float objPos, const float centerMin, const float centerMax, const float defualtMin, const float defualtMax, const float offset, const float curCenter);

private:
	sf::RenderWindow& m_WindowView;
	float	          m_mapScrollSpeed;


};
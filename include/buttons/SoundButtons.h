#pragma once
#include "Button.h"
#include "gameManage/Audio.h"

class SoundButtons : public Button
{
public:
	//true -> music false ->sound
	SoundButtons(const sf::Vector2f& pos, const int type = 0, const sf::Vector2f& scale = { 1,1 }, const bool typeOfButton = 0);
	~SoundButtons() = default; 

	void excute(sf::RenderWindow&);

private:
	const bool m_typeOfButton; 
	int m_frameLimit; 

};


class VolumeButton : public Button
{
public:
	VolumeButton(const sf::Vector2f& pos, const int valAdd);
	~VolumeButton() = default;

	void excute(sf::RenderWindow&);
	void render(sf::RenderWindow&);
	bool isContain(const sf::Vector2f&);


private:
	const int m_addVal; 
	sf::RectangleShape m_volSprite; 
};


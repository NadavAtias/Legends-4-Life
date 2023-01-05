#pragma once
#include <SFML/Graphics.hpp>
#include "Resources.h"
#include "staticObjects/StaticAnimation.h"


class PlayerStatus
{
public:
	PlayerStatus(const std::string & = "", const int = 10, const sf::Vector2i = { 40,40 });
	~PlayerStatus() = default;

	void stopClock();

	void draw(sf::RenderWindow&, const int, const int, const int, const int);
	void update();
	int getTotalTime() const;

private:
	sf::Sprite m_avatar, m_avatarBord, m_avatarSmallBord, m_bar, m_barFiller, m_typeBarBord, m_coinSprite, m_lifeSprite, m_magicEffectSprite, m_magicEffectAvatar;
	sf::Vector2i                 m_posCoords;
	sf::Text                     m_playerName;
	std::vector<StaticAnimation> m_dataAnimation;
	sf::Clock                    m_timer;
	unsigned int                 m_totalTime;
	bool                         m_runningGame;

	//init
	void init();
	void initBords();
	void initAnimationBodies();
	void initAuxCoponents();

	//fill
	void fillBar(sf::RenderWindow& window, const int data, const float maxData, const sf::Vector2f& curPos, const sf::IntRect rect);
	void fillCoinBar(sf::RenderWindow&, const int, const sf::Vector2f&);
	void fillTimerBar(sf::RenderWindow&, const sf::Vector2f&);

	//draw
	void drawBoard(sf::RenderWindow&, const sf::Vector2f&, const int);
	void drawBars(sf::RenderWindow&, const sf::Vector2f&);
	void printName(sf::RenderWindow&, const sf::Vector2f&);
};

const sf::IntRect   bigBord(631, 1, 76, 79), smallerBord(554, 1, 40, 40), hpBar(15, 1, 127, 20), staminaBar(710, 1, 343, 28),
GreenFillerHp(494, 1, 3, 16), RedFillerHp(503, 1, 3, 16), BlueFillerHp(489, 1, 3, 16), YellowFillerHp(8, 1, 3, 16);

const int maxFillerSize = 80;

const sf::Vector2f nameBarOffset(96, 5), lifeBarOffset(96, 25), energyBarOffset(96, 45), coinBarOffset(96, 65), timerBarOffset(96, 85),
nameOffset(102, 9), lifeFillerOffset(100, 27), energyFillerOffset(100, 47), magicEffectAvatarOffset(227, 9), timerOffset(120, 87),
name(76, 5), coin(76, 65), life(76, 25), energy(76, 45), timer(76, 85), littleBord(223, 5), avatarOffset(9.2, 8.5);
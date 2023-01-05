//#pragma once
//#include "StateButton.h"
//#include "Button.h"
//#include "state/StateController.h"
//#include "state/gameState.h"
//#include "state/ChooseCharecterState.h"
//
//
//// class template specialization:
//template <>
//class StateButton<GameState> : public Button
//{
//public:
//	StateButton(const sf::Vector2f& pos, const std::string& txt, const int type, const sf::Vector2f& scale, const bool pressedSprite,
//		StateController& states, const int mode, std::string& charName, unsigned int& index, const unsigned int level, const bool gameType = true)
//		: Button(pos, txt, type, scale, pressedSprite), m_stateController(states), m_stateMode(mode), m_name(charName), m_indexIcon(index), m_level(level), m_gameMode(gameType) {}
//	~StateButton() {}
//
//	void excute(sf::RenderWindow& window) override
//	{
//		auto tempState = std::make_unique<GameState>(m_stateController, window, m_name, m_indexIcon, m_level, m_gameMode);
//
//		if (m_stateMode == PUSH)  m_stateController.pushState(std::move(tempState));
//		if (m_stateMode == CHANGE)  m_stateController.changeState(std::move(tempState));
//		if (m_stateMode == CHANGE_DOUBLE)  m_stateController.changeDoubleState(std::move(tempState));
//	}
//
//	void setButton(const unsigned int type) override
//	{
//		m_gameMode = type;
//	}
//
//private:
//	StateController& m_stateController;
//	int m_stateMode;
//	unsigned int m_level;
//	std::string& m_name;
//	unsigned int& m_indexIcon;
//	bool m_gameMode;
//};
//
//
//
//// class template specialization:
//template <>
//class StateButton<ChooseCharecterState> : public Button
//{
//public:
//	StateButton(const sf::Vector2f& pos, const std::string& txt, const int type, const sf::Vector2f& scale, const bool pressedSprite, StateController& states, const int stateMode, const unsigned int level = 1)
//		: Button(pos, txt, type, scale, pressedSprite), m_stateController(states), m_level(level), m_stateMode(stateMode) {}
//	~StateButton() {}
//
//	void excute(sf::RenderWindow& window) override
//	{
//		auto tempState = std::make_unique<ChooseCharecterState>(m_stateController, window, m_level, m_regularGame);
//		if (m_stateMode == PUSH)  m_stateController.pushState(std::move(tempState));
//		if (m_stateMode == CHANGE)  m_stateController.changeState(std::move(tempState));
//	}
//
//	void setButton(const unsigned int level) override
//	{
//		m_level = level;
//		m_regularGame = false;
//	}
//
//private:
//	StateController& m_stateController;
//	unsigned int m_level = 1;
//	bool m_regularGame = true;
//	int m_stateMode;
//};
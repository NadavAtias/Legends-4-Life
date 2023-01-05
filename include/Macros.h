#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <iostream>



enum EntityCategory {
	playerBits = 0x0001,
	BonusBits = 0x0002,
	PaltformBits = 0x0004,
	TrapsBits = 0x0008,
	WaterBits = 0x0010,
	GroundBits = 0x0020,
	EnemyBits = 0x0040,
	MagicEffectBits = 0x0080,
	BoxBits = 0x0100,
	checkPointBits = 0x0200,
	noneBit = 0x0400,
	floorObsBit = 0x0800,
	noHandleBit = 0x1000
};

enum Sound
{
	MENU_SOUND, BUTTONCLICK, COINCOLLECT, JUMPSOUND, ATTACK, LIFESOUND, ENEMYDIE, WATERFALLING, MAGICATTAK, PLAYERDIE, WinSOUND, LoseSOUND, LEVELSound

};
//menu buttons text color
const auto MENU_BUTTONS_TEXT = sf::Color(73, 117, 112);
const auto MENU_BUTTONS_TEXTURE = sf::Color(252, 241, 239);
const auto CLEAR = sf::Color(0, 0, 0, 0);


//--------------- network -----------------------
const auto SERVER_PORT = 50100;
const auto MAX_PLAYERS = 4;
const auto MAX_PLAYER_NAME_LEN = 20;
const auto LOBBY_FULL = -1;

const auto BACKSPACE = 8;
const auto MAX_NAME_LEN = 20;

const sf::Color LOBBY_LIST{ 245,174,8,120 };
const sf::Color NAME_INPUT_BOX{ 70,70,70,120 };

//--------------- ICONE VALUES ---------------
const std::string iconesVecNames[] = { "tileset1.png", "box1.png","movingTiles.png", "FallingBlock.png","GuillotineTrap.png","goblin.png",
									   "imp.png", "boss.png","MagicEffect.png", "PlayerStatus.png", "avatar.png","yeti.png","ent.png" ,"MineTrap.png",
									   "planetMineTrap.png","WinGate.png", "MagicEffectIcons.png" , "FallingBomb.png","knight.png","nadav.png","ariel.png",
										"noam.png","efrat.png","orc.png","beholder.png","dino.png","dworf.png","box2.png","scull.png", "gameStatus.png",
									   "tileset2.png" ,"tileset3.png", "laba.png", "imp2.png", "lamp.png", "ghost.png","goneTile.png", "sound.png", "victory.png", "defeat.png","snake.png","boos2.png" };

const std::vector <std::string> levelIcon = { "levelSelect.png","mountain.png", "forest.png","dungeon.png","circleBright.png" ,"circlePale.png" ,"target.png" };

const std::vector <std::string> BACKGROUND_TEXTURE_NAMES = { "OpenScreen.png", "GameName.png", "MenuBackground.png", "board.png", "InstructionsScreen.png", "network.png","board1.png","board2.png","board3.png", "blueSky.png", "Leadboard.png" };

const std::string soundFilesName[] = { "menuMusic.wav","buttonClick.wav","coinCollect.wav","jumpSound.wav","attack.wav","bonusLifeSound.wav", "enemyDie.wav", "waterFalling.wav", "magicAttack.wav","playerDie.wav" ,"Win.wav","Lose.wav","Level1.wav","Level2.wav","Level3.wav" };

const std::vector <std::string> BUTTONS = { "ButtonBox.png", "ButtonBoxPressed.png", "MinimapButton.png", "MinimapPressed.png", "nextBotton.png", "nextButtonPressed.png", "prevButton.png", "prevButtonPressed.png",  "gameBox.png", "gamePressedBox.png", "homeBox.png", "settingsButton.png", "exit.png", "lead.png"};
enum buttons { BUTTON_BOX = 0, MINIMAP_BOX = 2, NEXT_BOX = 4, PREV_BOX = 6, GAME_BOX = 8, HOME_BOX = 10, SETTINGS = 11, EXIT = 12, LEAD = 13 };
enum backgrounds { OPEN, MENU, LEVEL1 };
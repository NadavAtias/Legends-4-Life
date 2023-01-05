#pragma once
#include <SFML/Graphics.hpp>


enum class Direction
{
    Right,
    Left,
    Down,
    Jump,
    Attack,
    None,
};


using directionData = std::pair<Direction, sf::Vector2f>;

//Direction                opposite    (Direction);
directionData            toVector    ();
Direction                toDirection(const sf::Vector2f&);
Direction                next(Direction);
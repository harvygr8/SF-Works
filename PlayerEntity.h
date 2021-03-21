#pragma once
#include<iostream>
#include<vector>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include "Entity.h"

class PlayerEntity
{
private:
  sf::RectangleShape player;


public:
  void InitializePlayer(sf::Vector2i &InitPos,sf::Vector2f &InitSize);
  void MoveEntity(float &xSpeed,float &ySpeed,float &dt);
  void CheckBoundaryCollision(sf::RenderWindow& mWindow);
  void Render(sf::RenderWindow& mWindow);
};

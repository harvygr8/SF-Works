#pragma once
#include<iostream>
#include<vector>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

class Entity
{
private:
  //sf::RenderWindow win;
  sf::RectangleShape enemy;

public:
  Entity();
  void InitializeEntity();
  void MoveEntity(float &xSpeed,float &ySpeed,float &dt);
  void Render(sf::RenderWindow& mWindow);
};

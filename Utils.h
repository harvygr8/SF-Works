#pragma once
#include<iostream>
#include<SFML/System.hpp>

class Utils
{
private:
  sf::Clock clock;
  sf::Time time;

public:
  void FPSCounter();
};

#pragma once
#include<iostream>
#include<vector>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include "Entities/SpawnerEntity.h"
#include "Utils.h"
#include "Entities/PlayerEntity.h"

class Game
{
private:
  sf::RenderWindow mWindow;
  sf::Event event;
  sf::Clock DeltaTimeClock;
  sf::Vector2i PlayerSpawn;
  sf::Vector2f PlayerSize;
  float DeltaTime;
  bool done;
  float xs,ys;
  Utils Utilities;
  //float SpawnTimer;
  //float SpawnTimerMax;
  //int MaxEnemies;

  //Entities
  SpawnerEntity SpawnerEntities;
  PlayerEntity Player;
  std::vector<Entity> SpawnedEnemies;


public:
  Game(std::string title,int height,int width);
  ~Game();
  void Update();
  void ProcessEvents();
  float UpdateDeltaTime();
  void Render();
  void Run();
};

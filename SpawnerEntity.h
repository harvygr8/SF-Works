#pragma once
#include<iostream>
#include<vector>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include "Entity.h"

class SpawnerEntity
{
private:
  float SpawnTimer;
  float SpawnTimerMax;
  //int MaxEnemies;
  bool done;

  //std::vector<Entity> SpawnedEnemies;

public:
  SpawnerEntity();
  void InitializeEntity();
  void SpawnSubEntities(std::vector<Entity> &enemies,int size);
  bool CheckSpawnDone();
};

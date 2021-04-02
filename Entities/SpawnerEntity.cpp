#include "SpawnerEntity.h"

SpawnerEntity::SpawnerEntity()
{
  SpawnTimerMax=1.f;
  SpawnTimer=SpawnTimerMax;
  //MaxEnemies=10;
  done=false;
}

bool SpawnerEntity::CheckSpawnDone()
{
  return done;
}

void SpawnerEntity::SpawnSubEntities(std::vector<Entity> &enemies,int size)
{
  //std::cout << "SPAWNED" << '\n';
  //enemies.emplace_back();

  for(int i=0;i<size;i++)
  {
    std::cout << "SPAWNED" << '\n';
    enemies.emplace_back();
  }
  done=true;
}

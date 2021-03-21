#include "Game.h"


Game::Game(std::string title,int height,int width)
  :mWindow(sf::VideoMode(height,width), title ,sf::Style::Close | sf::Style::Resize)
{
  //mWindow.setFramerateLimit(30);
  mWindow.setVerticalSyncEnabled(true);
  done=false;
  xs=100.f;
  ys=100.f;
  PlayerSpawn.x=height/2;
  PlayerSpawn.y=width/2;
  PlayerSize.x=50.f;
  PlayerSize.y=50.f;

  Player.InitializePlayer(PlayerSpawn,PlayerSize);

}


Game::~Game()
{

}



void Game::ProcessEvents()
{
  while (mWindow.pollEvent(event))
  {
    switch(event.type)
    {
      case sf::Event::Closed:
        mWindow.close();
        break;

      case sf::Event::Resized:
        std::cout<<event.size.width<<","<<event.size.height<<std::endl;
        break;

    }
  }
}

void Game::Update()
{
  ProcessEvents();
  Player.CheckBoundaryCollision(mWindow);
  Player.MoveEntity(xs,ys,DeltaTime);

  /*                                                          ENEMY SPAWN CODE (WORKING)
  if(!SpawnerEntities.CheckSpawnDone())
  {
    SpawnerEntities.SpawnSubEntities(SpawnedEnemies,1);
  }

  for(int i=0;i<SpawnedEnemies.size();i++)
  {
    SpawnedEnemies[i].MoveEntity(xs,ys,DeltaTime);
  }
  */

}

float Game::UpdateDeltaTime()
{
  DeltaTime=DeltaTimeClock.restart().asSeconds();
  return DeltaTime;
}

void Game::Render()
{
    mWindow.clear();
    Player.Render(mWindow);
    /*                                ENEMY RENDER CODE(WORKING)
    for(auto i: SpawnedEnemies)
    {
      i.Render(mWindow);
    }
    */
    mWindow.display();
}

void Game::Run()
{
  sf::Clock clock;
  sf::Time time;

  while (mWindow.isOpen())
  {
    UpdateDeltaTime();
    Update();
    Utilities.FPSCounter();
    //time = clock.getElapsedTime();
    //std::cout << "fps =" << 1.0f / time.asSeconds() << std::endl;
    //clock.restart().asSeconds();

    Render();


  }
}

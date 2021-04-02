#include "PlayerEntity.h"


void PlayerEntity::InitializePlayer(sf::Vector2i &InitPos,sf::Vector2f &InitSize)
{
  //player.setOrigin(InitSize.x/2,InitSize.y/2);
  player.setPosition(InitPos.x,InitPos.y);
  //player.move(rand()%255+1,rand()%255+1);
  player.setSize(InitSize);
  sf::Color color(0,0,240);
  player.setFillColor(color);
  player.setOutlineColor(sf::Color::White);
  player.setOutlineThickness(2.f);
}

void PlayerEntity::MoveEntity(float &xSpeed,float &ySpeed,float &dt)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
      player.move(-xSpeed*dt,0.f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
      player.move(xSpeed*dt,0.f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
      player.move(0.f,-ySpeed*dt);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
      player.move(0.f,ySpeed*dt);
    }
  //std::cout << dt << '\r';

}

void PlayerEntity::CheckBoundaryCollision(sf::RenderWindow& mWindow)
{
  if(player.getPosition().x<0)
  {
    player.setPosition(0.f,player.getPosition().y);
  }
  if(player.getPosition().y<0)
  {
    player.setPosition(player.getPosition().x,0.f);
  }
  if(player.getPosition().x+player.getGlobalBounds().width>mWindow.getSize().x)
  {
    player.setPosition(mWindow.getSize().x-player.getGlobalBounds().width,player.getPosition().y);
  }
  if(player.getPosition().y+player.getGlobalBounds().height>mWindow.getSize().y)
  {
    player.setPosition(player.getPosition().x,mWindow.getSize().y-player.getGlobalBounds().height);
  }
}


void PlayerEntity::Render(sf::RenderWindow& mWindow)
{
  mWindow.draw(player);
}

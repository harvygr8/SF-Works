#include "Entity.h"

Entity::Entity()
{
  InitializeEntity();
}



void Entity::InitializeEntity()
{
  enemy.setPosition(rand()%255+1,rand()%255+1);
  enemy.move(rand()%255+1,rand()%255+1);
  enemy.setSize(sf::Vector2f(50.f,50.f));
  sf::Color color(rand()%255+1,rand()%255+1,rand()%255+1);
  enemy.setFillColor(color);
  enemy.setOutlineColor(sf::Color::White);
  enemy.setOutlineThickness(2.f);
}

/*passing DeltaTime by pointer(works! but why use pointers when you can avoid them :))
void Entity::MoveEntity(float* dt)
{
  enemy.move(0.f,10.f*(*dt));
  std::cout << *(dt) << '\n';
}
*/

void Entity::MoveEntity(float &xSpeed,float &ySpeed,float &dt)
{
  enemy.move(xSpeed*dt,ySpeed*dt);
  //std::cout << dt << '\r';

}

void Entity::Render(sf::RenderWindow& mWindow)
{
  mWindow.draw(enemy);
}

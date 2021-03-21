#include "Utils.h"


//PROBABLY RENDER THIS IN_GAME
void Utils::FPSCounter()
{
  time = clock.getElapsedTime();
  std::cout << "fps =" << 1.0f / time.asSeconds() << "\r";
  clock.restart().asSeconds();
}

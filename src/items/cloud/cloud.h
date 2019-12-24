#ifndef CLOUD
#define CLOUD

#include "game_item.h"
#include "renderer.h"

class Cloud : public GameItem
{
public:
  Cloud(const char*, Renderer*);
  void update();
  void draw();
  bool offScreen();
private:
  int speed;
};

#endif

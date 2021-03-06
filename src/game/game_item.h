#ifndef GAME_ITEM
#define GAME_ITEM

#include <SDL2/SDL.h>
#include "game_object.h"
#include "renderer.h"



class GameItem : public GameObject
{
public:
  GameItem(Renderer*);
  virtual ~GameItem();

  virtual void update() = 0;
  virtual void draw();
protected:
  SDL_Texture* texture;
  SDL_Rect srcRect, destRect;
  Renderer* renderer;
};

#endif

#include "game_states.h"

GameState GameStates::state = GAME_GAME;
GameState GameStates::newState = GAME_GAME;
bool GameStates::firstTick = true;

GameState GameStates::getState()
{
  return state;
}

void GameStates::changeState(GameState tempState)
{
  newState = tempState;
}

bool GameStates::getFirstTick()
{
  return firstTick;
}

void GameStates::updateState()
{
  // Check if the state is new, update firstTick
  if (state != newState)
    firstTick = true;
  else
    firstTick = false;
  // Update the state
  state = newState;
}

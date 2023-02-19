#include <stdio.h>
#include <SDL2/SDL.h>
#include "system.h"

bool setup_system(void)
{
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    fprintf(stderr, "Error: Unable to initialize SDL.\n");
    return false;
  }

  return true;
}

void cleanup_system(void)
{
  SDL_Quit();
}
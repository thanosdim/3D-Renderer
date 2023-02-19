#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

// Functions //
bool setup(void);
void cleanup(void);

int main(void)
{
  setup();

  cleanup();

  return 0;
}

bool setup(void)
{
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    fprintf(stderr, "Error: Unable to initialize SDL.\n");
    return false;
  }

  return true;
}

void cleanup(void)
{
  SDL_Quit();
}
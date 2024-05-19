#define SDL_MAIN_HANDLED

#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    (void) argc; (void) argv;

    printf("Hello, %s\n", "World!");

    return 0;
}

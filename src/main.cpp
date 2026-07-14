#include <iostream>
#include <raylib.h>

int main(int argc, char const *argv[])
{
    (void) argc;
    (void) argv;

    SetConfigFlags(FLAG_FULLSCREEN_MODE);

    InitWindow(1920, 1080, "Game");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        BeginDrawing();

            ClearBackground(Color({0, 0, 0, 1}));
            DrawText(TextFormat("FPS: %i", GetFPS()), 20, 5, 15, WHITE);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}

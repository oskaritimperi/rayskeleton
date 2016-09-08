#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main(int argc, char **argv)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "rayskeleton");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        const char *text = "rayskeleton!";
        int w = MeasureText(text, 20);
        DrawText(text, SCREEN_WIDTH/2 - w/2, SCREEN_HEIGHT/2, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

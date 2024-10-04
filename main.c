#include <stdio.h>
#include <raylib.h>

#define WIDTH 1280
#define HEIGHT 720
#define TSODING_BLACK (Color){18, 18, 18, 00}
#define TOP_BG (Color){0x2E, 0x2E, 0x2F, 0xFF}
int main()
{
    InitWindow(WIDTH, HEIGHT, "This is a test.");
    SetTargetFPS(120);
	bool exitWindow = false;
    while (!exitWindow) {
        BeginDrawing();
				//  DrawRectangle (x,  y, width, height)
			ClearBackground(TSODING_BLACK);
			
				/*{
				
					DrawRectangle(100, 100, 200, 20, BLUE);
					DrawText("This is good!", 100, 100, 25, YELLOW);
					DrawRectangle(100, 200, 200, 20, BLUE);
					DrawText("This is another good!", 100, 200, 25, YELLOW);
					DrawRectangle(100, 300, 200, 20, BLUE);
					DrawRectangle(100, 400, 200, 20, BLUE);
				}*/
				{
					DrawRectangle((GetScreenHeight()/2), 15, 260*2, 64, TOP_BG);
					DrawText("This is fun!!", (GetScreenHeight()/2)*1.331, 25, 45, BLUE);
					
					DrawRectangle(40, 100, 64, 64, GRAY); // r1
					DrawText("Main Menu", 110, 120, 25, WHITE);																								
					DrawRectangle(40, 200, 64, 64, GRAY); // r2
					DrawText("Main Menu", 110, 220, 25, WHITE);																								
					DrawRectangle(40, 300, 64, 64, GRAY); // r3
					DrawText("Main Menu", 110, 320, 25, WHITE);																								
					DrawRectangle(40, 400, 64, 64, GRAY); // r4
					DrawText("Main Menu", 110, 420, 25, WHITE);																								
					DrawRectangle(40, 500, 64, 64, GRAY); // r5
					DrawText("Main Menu", 110, 520, 25, WHITE);																								
					DrawRectangle(40, 600, 64, 64, GRAY); // r6
					DrawText("Main Menu", 110, 620, 25, WHITE);																								
					DrawRectangle(40, 700, 64, 64, GRAY); // r7
					DrawText("Main Menu", 110, 720, 25, WHITE);																								
				}

				{
					if (IsKeyPressed(KEY_Q) || WindowShouldClose()) {
						printf("INFO: Exiting the application.\n");
						EndDrawing();
						exitWindow = true;
					}
				}
		EndDrawing();

    }
    CloseWindow();
    return 0;
}

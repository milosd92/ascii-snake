#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
#include <unistd.h>

#include "snake.h"
#include "map.h"
#include "keyboard.h"

//#define U_DOUBLE_HORIZONTAL         L'\u2550'
//#define U_DOUBLE_VERTICAL           L'\u2551'
//#define U_DOUBLE_DOWN_AND_RIGHT     L'\u2554'
//#define U_DOUBLE_DOWN_AND_LEFT      L'\u2557'
//#define U_DOUBLE_UP_AND_RIGHT       L'\u255A'
//#define U_DOUBLE_UP_AND_LEFT        L'\u255D'

#define clear() printf("\033[H\033[J")

int main()
{

//    setlocale(LC_CTYPE, "en_US.utf8");
//    wprintf(L"%lc", U_DOUBLE_HORIZONTAL);

    s_snake *snake;
    char *map = get_map();

    snake = snake_init(map);

    while (1)
    {
        int ch;

        if (kbhit())
        {
            ch = getchar();
            switch (ch)
            {
                case KEY_ESC:
                    return 0;
                case KEY_W:
                    snake_move(SNAKE_MOVE_UP);
                    break;
                case KEY_A:
                    snake_move(SNAKE_MOVE_LEFT);
                    break;
                case KEY_S:
                    snake_move(SNAKE_MOVE_DOWN);
                    break;
                case KEY_D:
                    snake_move(SNAKE_MOVE_RIGHT);
                    break;
                default:
                    break;
            }
        }

        clear();
        map_draw();
        snake_update(map);
        usleep(150000);
    }
}

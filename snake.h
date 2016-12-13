//
// Created by danilov on 11.12.16..
//

#ifndef ASCII_SNAKE_SNAKE_H
#define ASCII_SNAKE_SNAKE_H

typedef enum {
    SNAKE_MOVE_UP = 1,
    SNAKE_MOVE_LEFT = 2,
    SNAKE_MOVE_DOWN = 3,
    SNAKE_MOVE_RIGHT = 4
} e_snake_dir;

typedef struct {
    int x;
    int y;
    int xspeed;
    int yspeed;
} s_snake;

s_snake *snake_init(char *map);

void snake_move(e_snake_dir direction);

void snake_update(char *map);

#endif //ASCII_SNAKE_SNAKE_H

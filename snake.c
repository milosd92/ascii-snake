//
// Created by danilov on 11.12.16..
//

#include "map.h"
#include "snake.h"

s_snake _snake;

static void _update_pos(char *map);

static void _clear_prev_pos(char *map);

static void _set_direction_speed(int x, int y);

s_snake *snake_init(char *map)
{
    _snake.x = 4;
    _snake.y = 7;

    _update_pos(map);

    _snake.xspeed = 1;
    _snake.yspeed = 0;

    return &_snake;
}

void snake_move(e_snake_dir direction)
{
    switch (direction)
    {
        case SNAKE_MOVE_UP:
            _set_direction_speed(0, -1);
            break;
        case SNAKE_MOVE_LEFT:
            _set_direction_speed(-1, 0);
            break;
        case SNAKE_MOVE_DOWN:
            _set_direction_speed(0, 1);
            break;
        case SNAKE_MOVE_RIGHT:
            _set_direction_speed(1, 0);
            break;
        default:
            break;
    }
}

void snake_update(char *map)
{
    _clear_prev_pos(map);

    if ((_snake.x + _snake.xspeed) >= MAP_WIDTH - 2 || (_snake.x + _snake.xspeed) == 0)
    {
        _update_pos(map);
        return;
    }

    if ((_snake.y + _snake.yspeed) >= MAP_HEIGHT - 1 || (_snake.y + _snake.yspeed) == 0)
    {
        _update_pos(map);
        return;
    }

    _snake.x += _snake.xspeed;
    _snake.y += _snake.yspeed;

    _update_pos(map);
}

static void _set_direction_speed(int x, int y)
{
    _snake.xspeed = x;
    _snake.yspeed = y;
}

static void _update_pos(char *map)
{
    map[_snake.y * MAP_WIDTH + _snake.x] = 'S';
}

static void _clear_prev_pos(char *map)
{
    map[_snake.y * MAP_WIDTH + _snake.x] = ' ';
}

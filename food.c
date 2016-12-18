//
// Created by danilov on 18.12.16..
//

#include "food.h"

#include "map.h"

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

static void _pick_location(s_food *food);

static void _clear(s_food *food, char *map);

void food_init(s_food *food)
{
    srand((unsigned int)time(NULL));

    _pick_location(food);
}

void food_new_location(s_food *food, char *map)
{
    _clear(food, map);
    _pick_location(food);
}

void food_draw(s_food *food, char *map)
{
    map[food->y * MAP_WIDTH + food->x] = 'x';
}

static void _pick_location(s_food *food)
{
    food->x = rand() % (MAX_LIM_X - MIN_LIM_X) + MIN_LIM_X;
    food->y = rand() % (MAX_LIM_Y - MIN_LIM_Y) + MIN_LIM_Y;
}

static void _clear(s_food *food, char *map)
{
    map[food->y * MAP_WIDTH + food->x] = 'S';
}

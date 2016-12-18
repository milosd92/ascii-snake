//
// Created by danilov on 18.12.16..
//

#ifndef ASCII_SNAKE_FOOD_H
#define ASCII_SNAKE_FOOD_H

typedef struct {
    int x;
    int y;
} s_food;

void food_init(s_food *food);

void food_new_location(s_food *food, char *map);

void food_draw(s_food *food, char *map);

#endif //ASCII_SNAKE_FOOD_H

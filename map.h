//
// Created by danilov on 11.12.16..
//

#ifndef ASCII_SNAKE_MAP_H
#define ASCII_SNAKE_MAP_H

#define MAP_HEIGHT      16
#define MAP_WIDTH       43

#define MIN_LIM_X       1
#define MAX_LIM_X       MAP_WIDTH - 3
#define MIN_LIM_Y       1
#define MAX_LIM_Y       MAP_HEIGHT - 2

//typedef char t_map[MAP_HEIGHT][MAP_WIDTH];

char *get_map(void);

void map_draw(void);

#endif //ASCII_SNAKE_MAP_H

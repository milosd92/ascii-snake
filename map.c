//
// Created by danilov on 11.12.16..
//
#include <stdio.h>

#include "map.h"

char grid[MAP_HEIGHT][MAP_WIDTH] = {
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "X                                        X\n",
        "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n"
};

char *get_map()
{
    return &grid[0][0];
}

void map_draw()
{
    for (int i = 0; i < MAP_HEIGHT; i++)
    {
        for (int j = 0; j < MAP_WIDTH; j++)
        {
            printf("%c", grid[i][j]);
        }
    }
}

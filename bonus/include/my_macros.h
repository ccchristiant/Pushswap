/*
** EPITECH PROJECT, 2021
** infin_add.h
** File description:
** infin add header
*/

#ifndef CTOI
#define CTOI(x) (x - '0')
#endif

#ifndef ITOC
#define ITOC(x) (x + '0')
#endif

#ifndef ABS
#define ABS(x)  ((x > 0) ? (x) : (-x))
#endif

#ifndef FRAMEBUFFER_H_H_
#define FRAMEBUFFER_H_H_

#include <SFML/Graphics.h>

struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};

typedef struct framebuffer framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);

#endif

static const int MAX_ID = 6;

static const int WIDTH = 1920;

static const int HEIGHT = 1080;

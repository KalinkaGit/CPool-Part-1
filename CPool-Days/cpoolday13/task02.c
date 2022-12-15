/*
** EPITECH PROJECT, 2022
** Task02
** File description:
** CSFML
*/

#include <stddef.h>
#include <stdlib.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/PrimitiveType.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics/Vertex.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Window/WindowHandle.h>
#include <SFML/Window/Window.h>
#include <SFML/System/Vector2.h>

struct framebuffer_t {
    unsigned char *pixels;
    unsigned int width;
    unsigned int height;
};

struct framebuffer_t *framebuffer_create(unsigned int width,
    unsigned int height)
{
    struct framebuffer_t *pixels;
    pixels->width[800];
    pixels->height[600];

    return (pixels);
}

sfRenderWindow *createWindow(unsigned int width, unsigned int height)
{
    sfVideoMode mode = {width, height, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, "Test", sfDefaultStyle, NULL);
    return (window);
}

int main(void)
{
    int width = 800;
    int height = 600;
    int bpp = 32;

    sfRenderWindow *window = createWindow(width, height);    
}

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#ifndef FONCTION_H_
#define FONCTION_H_


void pause ();
SDL_Rect init_img(int x, int y, SDL_Surface *source,SDL_Surface *destination);
void bg(SDL_Surface *ecran, SDL_Surface *background) ;
void scrolling (SDL_Rect *camera, SDL_Event event, SDL_Surface *ecran);
void HandleEvent(SDL_Event event);
void audio(Mix_Music *audio);



#endif



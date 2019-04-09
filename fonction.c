#include "fonction.h"
#include <SDL/SDL_mixer.h>

void pause (){
  int continuer = 1;
  SDL_Event event;
  while(continuer){
    SDL_WaitEvent(&event);
    switch(event.type){
      case SDL_QUIT:
        continuer = 0;
      break;
      default:
      break;
    }
  }
}



SDL_Rect init_img(int x, int y, SDL_Surface *source,SDL_Surface *destination)
{
SDL_Rect offset;
offset.x=x;
offset.y=y;
return (offset);}





void bg(SDL_Surface *ecran, SDL_Surface *background)
{SDL_Rect sett;
background= SDL_LoadBMP("bg.bmp");
sett=init_img(-37,-90, background,ecran);
SDL_BlitSurface(background , NULL, ecran, &sett );

}




/*void set_camera(SDL_Rect j,SDL_Surface *img){
  camera.x = (j.x + img->w / 2) - 400;
  camera.y = (j.y + img->h / 2) - 640;
  if (camera.x < 0){
    camera.x = 0;
  }
  if (camera.x > 9196)
  {
    camera.x = 9196;
  }
  if (camera.y < 0){
    camera.y = 0;
  }
  if (camera.y > 640 - camera.y){
    camera.y = 640 - camera.y;
  }
}








void scrolling (SDL_Rect *camera, SDL_Event event, SDL_Surface *ecran)
{
 
        switch (event.key.keysym.sym)
   {

	case SDLK_RIGHT:
       camera->x = camera->x + 50;
               
	break;

	case SDLK_LEFT:
       camera->x = camera->x - 50;
              
	break;
    }
      SDL_BlitSurface( camera, ecran, NULL);
              SDL_Flip(ecran);
}





*/


void audio(Mix_Music *audio)
{
if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
{
  printf("ERROR2");
}

audio = Mix_LoadMUS("music.mp3");
Mix_PlayMusic(audio, -1);

}








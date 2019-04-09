
#include "fonction.h"

int main()
{
    SDL_Surface *screen = NULL, *bg1 = NULL ;    
    Mix_Music *music;
    
   

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_AUDIO); 

    screen = SDL_SetVideoMode(900, 600, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("AWAKE", NULL);

    bg(screen, bg1);
    /*scrolling (cam, event1, screen);*/
    audio(music);
    
   
    
 
     


    
    SDL_Flip(screen);
    pause();
    
    SDL_FreeSurface(bg1); 
    Mix_FreeMusic(music);
    Mix_CloseAudio(); 
    SDL_Quit();

    return EXIT_SUCCESS;
}
 









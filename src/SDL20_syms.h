/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2019 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

/* don't #pragma once this file, it gets #included multiple times! */

#ifndef SDL20_SYM
#define SDL20_SYM(rc,fn,params,args,ret)
#endif

#ifndef SDL20_SYM_PASSTHROUGH
#define SDL20_SYM_PASSTHROUGH(rc,fn,params,args,ret) SDL20_SYM(rc,fn,params,args,ret)
#endif

#ifndef SDL20_SYM_VARARGS
#define SDL20_SYM_VARARGS(rc,fn,params) SDL20_SYM(rc,fn,params,unused,unused)
#endif

SDL20_SYM(int,Init,(Uint32 a),(a),return)
SDL20_SYM(int,InitSubSystem,(Uint32 a),(a),return)
SDL20_SYM(Uint32,WasInit,(Uint32 a),(a),return)
SDL20_SYM(char*,GetError,(void),(),return)
SDL20_SYM_VARARGS(int,SetError,(const char *fmt, ...))

SDL20_SYM_PASSTHROUGH(int,Error,(SDL_errorcode a),(a),return)
SDL20_SYM_PASSTHROUGH(void,ClearError,(void),(),)
SDL20_SYM(void,Quit,(void),(),)
SDL20_SYM(void,QuitSubSystem,(Uint32 a),(a),)
SDL20_SYM_PASSTHROUGH(int,VideoInit,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(void,VideoQuit,(void),(),)
SDL20_SYM_PASSTHROUGH(int,AudioInit,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(void,AudioQuit,(void),(),)
SDL20_SYM(const char *,GetCurrentAudioDriver,(void),(),return)
SDL20_SYM(const char *,GetCurrentVideoDriver,(void),(),return)

SDL20_SYM(SDL_assert_state,ReportAssertion,(SDL_assert_data *a,const char *b,const char *c, int d),(a,b,c,d),return)

SDL20_SYM(void,PumpEvents,(void),(),)
SDL20_SYM(void,SetEventFilter,(SDL_EventFilter a, void *b),(a,b),)

SDL20_SYM(int,GetNumDisplayModes,(int a),(a),return)
SDL20_SYM(int,GetDisplayMode,(int a, int b, SDL_DisplayMode *c),(a,b,c),return)
SDL20_SYM(int,GetDesktopDisplayMode,(int a, SDL_DisplayMode *b),(a,b),return)
SDL20_SYM(int,GetCurrentDisplayMode,(int a, SDL_DisplayMode *b),(a,b),return)

SDL20_SYM(void,EnableScreenSaver,(void),(),)
SDL20_SYM(void,DisableScreenSaver,(void),(),)

SDL20_SYM(SDL_Window *,CreateWindow,(const char *a, int b, int c, int d, int e, Uint32 f),(a,b,c,d,e,f),return)
SDL20_SYM(void,DestroyWindow,(SDL_Window *a),(a),)
SDL20_SYM(void,SetWindowIcon,(SDL_Window *a,SDL_Surface *b),(a,b),)
SDL20_SYM(int,UpdateWindowSurface,(SDL_Window *a),(a),return)
SDL20_SYM(SDL_Surface *,GetWindowSurface,(SDL_Window *a),(a),return)
SDL20_SYM(void,GetWindowPosition,(SDL_Window *a,int *b, int *c),(a,b,c),)
SDL20_SYM(void,SetWindowSize,(SDL_Window *a, int b, int c),(a,b,c),)
SDL20_SYM(void,GetWindowSize,(SDL_Window *a, int *b, int *c),(a,b,c),)
SDL20_SYM(void,MinimizeWindow,(SDL_Window *a),(a),)
SDL20_SYM(void,RaiseWindow,(SDL_Window *a),(a),)
SDL20_SYM(int,SetWindowGammaRamp,(SDL_Window *a,const Uint16 *b,const Uint16 *c,const Uint16 *d),(a,b,c,d),return)
SDL20_SYM(int,GetWindowGammaRamp,(SDL_Window *a,Uint16 *b,Uint16 *c,Uint16 *d),(a,b,c,d),return)
SDL20_SYM(Uint32,GetWindowFlags,(SDL_Window *a),(a),return)
SDL20_SYM(void,SetWindowGrab,(SDL_Window *a,SDL_bool b),(a,b),)
SDL20_SYM(SDL_bool,GetWindowGrab,(SDL_Window *a),(a),return)
SDL20_SYM(void,SetWindowTitle,(SDL_Window *a,const char *b),(a,b),)
SDL20_SYM(int,SetWindowFullscreen,(SDL_Window *a, Uint32 b),(a,b),return)
SDL20_SYM(void,SetWindowBordered,(SDL_Window *a, SDL_bool b),(a,b),return)
SDL20_SYM(void,SetWindowResizable,(SDL_Window *a, SDL_bool b),(a,b),return)

SDL20_SYM(SDL_PixelFormat *,AllocFormat,(Uint32 a),(a),return)
SDL20_SYM(void,FreeFormat,(SDL_PixelFormat *a),(a),)
SDL20_SYM(SDL_Surface *,CreateRGBSurface,(Uint32 a, int b, int c, int d, Uint32 e, Uint32 f, Uint32 g, Uint32 h),(a,b,c,d,e,f,g,h),return)
SDL20_SYM(SDL_Surface *,CreateRGBSurfaceFrom,(void *a, int b, int c, int d, int e, Uint32 f, Uint32 g, Uint32 h, Uint32 i),(a,b,c,d,e,f,g,h,i),return)
SDL20_SYM(SDL_Surface *,CreateRGBSurfaceWithFormat,(Uint32 a, int b, int c, int d, Uint32 e),(a,b,c,d,e),return)
SDL20_SYM(SDL_Surface *,ConvertSurface,(SDL_Surface *a, const SDL_PixelFormat *b, Uint32 c),(a,b,c),return)
SDL20_SYM(int,LockSurface,(SDL_Surface *a),(a),return)
SDL20_SYM(void,UnlockSurface,(SDL_Surface *a),(a),)
SDL20_SYM(int,UpperBlit,(SDL_Surface *a,const SDL_Rect *b,SDL_Surface *c, SDL_Rect *d),(a,b,c,d),return)
SDL20_SYM(int,LowerBlit,(SDL_Surface *a,const SDL_Rect *b,SDL_Surface *c, SDL_Rect *d),(a,b,c,d),return)
SDL20_SYM(SDL_bool,HasColorKey,(SDL_Surface *a),(a),return)
SDL20_SYM(int,SetColorKey,(SDL_Surface *a, int b, Uint32 c),(a,b,c),return)
SDL20_SYM(int,GetColorKey,(SDL_Surface *a, Uint32 *b),(a,b),return)
SDL20_SYM(void,FreeSurface,(SDL_Surface *a),(a),)
SDL20_SYM(int,SetSurfaceAlphaMod,(SDL_Surface *a, Uint8 b),(a,b),return)
SDL20_SYM(int,GetSurfaceAlphaMod,(SDL_Surface *a, Uint8 *b),(a,b),return)
SDL20_SYM(int,SetSurfaceBlendMode,(SDL_Surface *a, SDL_BlendMode b),(a,b),return)
SDL20_SYM(SDL_Surface*,LoadBMP_RW,(SDL_RWops *a, int b),(a,b),return)
SDL20_SYM(int,SaveBMP_RW,(SDL_Surface *a, SDL_RWops *b, int c),(a,b,c),return)
SDL20_SYM(int,SetPaletteColors,(SDL_Palette *a, const SDL_Color *b, int c, int d),(a,b,c,d),return)
SDL20_SYM(int,GL_LoadLibrary,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(void *,GL_GetProcAddress,(const char *a),(a),return)
SDL20_SYM(int,GL_SetAttribute,(SDL_GLattr a, int b),(a,b),return)
SDL20_SYM(int,GL_GetAttribute,(SDL_GLattr a, int *b),(a,b),return)
SDL20_SYM(int,GL_SetSwapInterval,(int a),(a),return)
SDL20_SYM(int,GL_GetSwapInterval,(void),(),return)
SDL20_SYM(SDL_GLContext,GL_CreateContext,(SDL_Window *a),(a),return)
SDL20_SYM(int,GL_MakeCurrent,(SDL_Window *a, SDL_GLContext b),(a,b),return)
SDL20_SYM(void,GL_SwapWindow,(SDL_Window *a),(a),)
SDL20_SYM(void,GL_DeleteContext,(SDL_GLContext a),(a),)
SDL20_SYM(void,GetClipRect,(SDL_Surface *a, SDL_Rect *b),(a,b),)
SDL20_SYM(SDL_bool,SetClipRect,(SDL_Surface *a, const SDL_Rect *b),(a,b),return)
SDL20_SYM(int,FillRect,(SDL_Surface *a,const SDL_Rect *b,Uint32 c),(a,b,c),return)
SDL20_SYM(SDL_bool,IntersectRect,(const SDL_Rect *a,const SDL_Rect *b,SDL_Rect *c),(a,b,c),return)
SDL20_SYM(void,GetRGB,(Uint32 a,const SDL_PixelFormat *b,Uint8 *c,Uint8 *d,Uint8 *e),(a,b,c,d,e),)
SDL20_SYM(void,GetRGBA,(Uint32 a,const SDL_PixelFormat *b,Uint8 *c,Uint8 *d,Uint8 *e,Uint8 *f),(a,b,c,d,e,f),)
SDL20_SYM(Uint32,MapRGB,(const SDL_PixelFormat *a,Uint8 b,Uint8 c,Uint8 d),(a,b,c,d),return)
SDL20_SYM(Uint32,MapRGBA,(const SDL_PixelFormat *a,Uint8 b,Uint8 c,Uint8 d,Uint8 e),(a,b,c,d,e),return)
SDL20_SYM(void,CalculateGammaRamp,(float a, Uint16 *b),(a,b),)
SDL20_SYM(Uint32,MasksToPixelFormatEnum,(int a,Uint32 b,Uint32 c,Uint32 d,Uint32 e),(a,b,c,d,e),return)
SDL20_SYM(SDL_bool,PixelFormatEnumToMasks,(Uint32 a,int *b,Uint32 *c,Uint32 *d,Uint32 *e,Uint32 *f),(a,b,c,d,e,f),return)

SDL20_SYM_PASSTHROUGH(void,SetModState,(SDL_Keymod a),(a),)
SDL20_SYM_PASSTHROUGH(SDL_Keymod,GetModState,(void),(),return)

SDL20_SYM(Uint32,GetMouseState,(int *a, int *b),(a,b),return)
SDL20_SYM(void,WarpMouseInWindow,(SDL_Window *a, int b, int c),(a,b,c),)
SDL20_SYM(int,SetRelativeMouseMode,(SDL_bool a),(a),return)
SDL20_SYM(int,ShowCursor,(int a),(a),return)
SDL20_SYM(SDL_Cursor *,CreateCursor,(const Uint8 *a,const Uint8 *b,int c,int d,int e,int f),(a,b,c,d,e,f),return)
SDL20_SYM(void,SetCursor,(SDL_Cursor *a),(a),)
SDL20_SYM(SDL_Cursor *,GetCursor,(void),(),return)
SDL20_SYM(void,FreeCursor,(SDL_Cursor *a),(a),)

#ifdef SDL_PASSED_BEGINTHREAD_ENDTHREAD
SDL20_SYM(SDL_Thread *,CreateThread,(SDL_ThreadFunction a, const char *b, void *c, pfnSDL_CurrentBeginThread d, pfnSDL_CurrentEndThread e),(a,b,c,d,e),return)
#else
SDL20_SYM(SDL_Thread *,CreateThread,(SDL_ThreadFunction a, const char *b, void *c),(a,b,c),return)
#endif

SDL20_SYM_PASSTHROUGH(Uint32,GetThreadID,(SDL_Thread *a),(a),return)
SDL20_SYM_PASSTHROUGH(Uint32,ThreadID,(void),(),return)
SDL20_SYM_PASSTHROUGH(void,WaitThread,(SDL_Thread *a, int *b),(a,b),)
SDL20_SYM_PASSTHROUGH(SDL_mutex*,CreateMutex,(void),(),return)
SDL20_SYM(int,LockMutex,(SDL_mutex *a),(a),return)
SDL20_SYM(int,UnlockMutex,(SDL_mutex *a),(a),return)
SDL20_SYM_PASSTHROUGH(void,DestroyMutex,(SDL_mutex *a),(a),)
SDL20_SYM_PASSTHROUGH(SDL_sem*,CreateSemaphore,(Uint32 a),(a),return)
SDL20_SYM_PASSTHROUGH(void,DestroySemaphore,(SDL_sem *a),(a),)
SDL20_SYM_PASSTHROUGH(int,SemWait,(SDL_sem *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,SemTryWait,(SDL_sem *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,SemWaitTimeout,(SDL_sem *a, Uint32 b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,SemPost,(SDL_sem *a),(a),return)
SDL20_SYM_PASSTHROUGH(Uint32,SemValue,(SDL_sem *a),(a),return)
SDL20_SYM_PASSTHROUGH(SDL_cond*,CreateCond,(void),(),return)
SDL20_SYM_PASSTHROUGH(void,DestroyCond,(SDL_cond *a),(a),)
SDL20_SYM_PASSTHROUGH(int,CondSignal,(SDL_cond *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,CondBroadcast,(SDL_cond *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,CondWait,(SDL_cond *a, SDL_mutex *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,CondWaitTimeout,(SDL_cond *a, SDL_mutex *b, Uint32 c),(a,b,c),return)

SDL20_SYM(SDL_AudioSpec *,LoadWAV_RW,(SDL_RWops *a, int b, SDL_AudioSpec *c, Uint8 **d, Uint32 *e),(a,b,c,d,e),return)
SDL20_SYM(int,OpenAudio,(SDL_AudioSpec *a, SDL_AudioSpec *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(SDL_AudioStatus,GetAudioStatus,(void),(),return)
SDL20_SYM_PASSTHROUGH(void,PauseAudio,(int a),(a),)
SDL20_SYM_PASSTHROUGH(void,FreeWAV,(Uint8 *a),(a),)
SDL20_SYM_PASSTHROUGH(int,BuildAudioCVT,(SDL_AudioCVT *a, Uint16 b, Uint8 c, int d, Uint16 e, Uint8 f, int g),(a,b,c,d,e,f,g),return)
SDL20_SYM_PASSTHROUGH(int,ConvertAudio,(SDL_AudioCVT *a),(a),return)
SDL20_SYM_PASSTHROUGH(void,MixAudio,(Uint8 *a, const Uint8 *b, Uint32 c, int d),(a,b,c,d),)
SDL20_SYM_PASSTHROUGH(void,LockAudio,(void),(),)
SDL20_SYM_PASSTHROUGH(void,UnlockAudio,(void),(),)
SDL20_SYM_PASSTHROUGH(void,CloseAudio,(void),(),)

SDL20_SYM_PASSTHROUGH(void*,LoadObject,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(void*,LoadFunction,(void *a, const char *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(void,UnloadObject,(void *a),(a),)

SDL20_SYM_PASSTHROUGH(SDL_bool,HasRDTSC,(void),(),return)
SDL20_SYM_PASSTHROUGH(SDL_bool,HasMMX,(void),(),return)
SDL20_SYM_PASSTHROUGH(SDL_bool,Has3DNow,(void),(),return)
SDL20_SYM_PASSTHROUGH(SDL_bool,HasSSE,(void),(),return)
SDL20_SYM_PASSTHROUGH(SDL_bool,HasSSE2,(void),(),return)
SDL20_SYM_PASSTHROUGH(SDL_bool,HasAltiVec,(void),(),return)

SDL20_SYM(SDL_TimerID,AddTimer,(Uint32 a, SDL_TimerCallback b, void *c),(a,b,c),return)
SDL20_SYM(SDL_bool,RemoveTimer,(SDL_TimerID a),(a),return)
SDL20_SYM_PASSTHROUGH(Uint32,GetTicks,(void),(),return)
SDL20_SYM_PASSTHROUGH(void,Delay,(Uint32 a),(a),)

SDL20_SYM_PASSTHROUGH(int,NumJoysticks,(void),(),return)
SDL20_SYM(const char *,JoystickNameForIndex,(int a),(a),return)
SDL20_SYM(SDL_Joystick *,JoystickOpen,(int a),(a),return)
SDL20_SYM_PASSTHROUGH(int,JoystickNumAxes,(SDL_Joystick *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,JoystickNumBalls,(SDL_Joystick *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,JoystickNumHats,(SDL_Joystick *a),(a),return)
SDL20_SYM_PASSTHROUGH(int,JoystickNumButtons,(SDL_Joystick *a),(a),return)
SDL20_SYM_PASSTHROUGH(void,JoystickUpdate,(void),(),)
SDL20_SYM_PASSTHROUGH(int,JoystickEventState,(int a),(a),return)
SDL20_SYM_PASSTHROUGH(Sint16,JoystickGetAxis,(SDL_Joystick *a, int b),(a,b),return)
SDL20_SYM_PASSTHROUGH(Uint8,JoystickGetHat,(SDL_Joystick *a, int b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,JoystickGetBall,(SDL_Joystick *a, int b, int *c, int *d),(a,b,c,d),return)
SDL20_SYM_PASSTHROUGH(Uint8,JoystickGetButton,(SDL_Joystick *a, int b),(a,b),return)
SDL20_SYM(void,JoystickClose,(SDL_Joystick *a),(a),return)
SDL20_SYM(void,LockJoysticks,(void),(),)
SDL20_SYM(void,UnlockJoysticks,(void),(),)
SDL20_SYM(SDL_JoystickID,JoystickGetDeviceInstanceID,(int a),(a),return)

SDL20_SYM(SDL_RWops *,RWFromFile,(const char *a, const char *b),(a,b),return)
SDL20_SYM(SDL_RWops *,RWFromFP,(FILE *a, int b),(a,b),return)
SDL20_SYM(SDL_RWops *,RWFromMem,(void *a, int b),(a,b),return)
SDL20_SYM(SDL_RWops *,RWFromConstMem,(const void *a, int b),(a,b),return)
SDL20_SYM(SDL_RWops *,AllocRW,(void),(),return)
SDL20_SYM(void,FreeRW,(SDL_RWops *a),(a),)

SDL20_SYM_PASSTHROUGH(void *,malloc,(size_t a),(a),return)
SDL20_SYM_PASSTHROUGH(void *,calloc,(size_t a, size_t b),(a,b),return)
SDL20_SYM_PASSTHROUGH(void *,realloc,(void *a, size_t b),(a,b),return)
SDL20_SYM_PASSTHROUGH(void,free,(void *a),(a),)
SDL20_SYM_PASSTHROUGH(char *,getenv,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(void,qsort,(void *a, size_t b, size_t c, int (*d)(const void *, const void *)),(a,b,c,d),)
SDL20_SYM_PASSTHROUGH(void *,memset,(void *a, int b, size_t c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(void *,memcpy,(void *a, const void *b, size_t c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(int,memcmp,(const void *a, const void *b, size_t c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(size_t,strlen,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(size_t,strlcpy,(char *a, const char *b, size_t c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(size_t,strlcat,(char *a, const char *b, size_t c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(char *,strdup,(const char *a),(a),return)
SDL20_SYM_PASSTHROUGH(char *,strrev,(char *a),(a),return)
SDL20_SYM_PASSTHROUGH(char *,strupr,(char *a),(a),return)
SDL20_SYM_PASSTHROUGH(char *,strlwr,(char *a),(a),return)
SDL20_SYM_PASSTHROUGH(char *,strchr,(const char *a, int b),(a,b),return)
SDL20_SYM_PASSTHROUGH(char *,strrchr,(const char *a, int b),(a,b),return)
SDL20_SYM_PASSTHROUGH(char *,strstr,(const char *a, const char *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(char *,ltoa,(long a, char *b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(char *,ultoa,(unsigned long a, char *b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(long,strtol,(const char *a, char **b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(unsigned long,strtoul,(const char *a, char **b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(char*,lltoa,(Sint64 a, char *b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(char*,ulltoa,(Uint64 a, char *b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(Sint64,strtoll,(const char *a, char **b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(Uint64,strtoull,(const char *a, char **b, int c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(double,strtod,(const char *a, char **b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,strcmp,(const char *a, const char *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,strncmp,(const char *a, const char *b, size_t c),(a,b,c),return)
SDL20_SYM_PASSTHROUGH(int,strcasecmp,(const char *a, const char *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,strncasecmp,(const char *a, const char *b, size_t c),(a,b,c),return)
SDL20_SYM_VARARGS(int,sscanf,(const char *text, const char *fmt, ...))
SDL20_SYM_VARARGS(int,snprintf,(char *text, size_t maxlen, const char *fmt, ...))
SDL20_SYM_PASSTHROUGH(int,vsnprintf,(char *a, size_t b, const char *c, va_list d),(a,b,c,d),return)
SDL20_SYM_PASSTHROUGH(SDL_iconv_t,iconv_open,(const char *a, const char *b),(a,b),return)
SDL20_SYM_PASSTHROUGH(int,iconv_close,(SDL_iconv_t a),(a),return)
SDL20_SYM_PASSTHROUGH(size_t,iconv,(SDL_iconv_t a, const char **b, size_t *c, char **d, size_t *e),(a,b,c,d,e),return)
SDL20_SYM_PASSTHROUGH(char *,iconv_string,(const char *a, const char *b, const char *c, size_t d),(a,b,c,d),return)
SDL20_SYM(int,setenv,(const char *a, const char *b, int c),(a,b,c),return)
SDL20_SYM(int,atoi,(const char *a),(a),return)

SDL20_SYM(SDL_Renderer *,CreateRenderer,(SDL_Window *a, int b, Uint32 c),(a,b,c),return)
SDL20_SYM(int,GetRendererInfo,(SDL_Renderer *a, SDL_RendererInfo *b),(a,b),return)
SDL20_SYM(SDL_Texture *,CreateTexture,(SDL_Renderer *a, Uint32 b, int c, int d, int e),(a,b,c,d,e),return)
SDL20_SYM(int,LockTexture,(SDL_Texture *a, const SDL_Rect *b, void **c, int *d),(a,b,c,d),return)
SDL20_SYM(void,UnlockTexture,(SDL_Texture *a),(a),)
SDL20_SYM(int,RenderSetLogicalSize,(SDL_Renderer *a, int b, int c),(a,b,c),return)
SDL20_SYM(int,SetRenderDrawColor,(SDL_Renderer *a, Uint8 b, Uint8 c, Uint8 d, Uint8 e),(a,b,c,d,e),return)
SDL20_SYM(int,RenderClear,(SDL_Renderer *a),(a),return)
SDL20_SYM(int,RenderCopy,(SDL_Renderer *a, SDL_Texture *b, const SDL_Rect *c, const SDL_Rect *d),(a,b,c,d),return)
SDL20_SYM(void,DestroyTexture,(SDL_Texture *a),(a),)
SDL20_SYM(void,DestroyRenderer,(SDL_Renderer *a),(a),)
SDL20_SYM(void,RenderPresent,(SDL_Renderer *a),(a),)

#undef SDL20_SYM
#undef SDL20_SYM_PASSTHROUGH
#undef SDL20_SYM_VARARGS

/* vi: set ts=4 sw=4 expandtab: */


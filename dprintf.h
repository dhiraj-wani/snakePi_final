#ifndef __DPRINTF_H__
#define __DPRINTF_H__

#ifdef DEBUG
#include <stdio.h>
# define DPRINTF(fmt, args...) printf(fmt, ## args)
#else

# define DPRINTF(fmt, args...)
#endif
#endif

//version 4.0 Marina Gil Blanco y Dhiraj Tejwani Jethani 

/**
	\file
	
	Client-specific functions used by shared code.
	i.e. these functions differ in implementation between SP and MP.
	
	They are thus not implemented in the CommonLib & co, they'll be linked in when the libraries are linked into the client.
**/

#pragma once

#include "qcommon/q_platform.h"
#include "qcommon/q_sharedtypes.h"

/**
	\brief Print a formatted string to the console. Format like printf.
**/
void	QDECL Com_Printf( const char *format, ... );

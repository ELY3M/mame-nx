 
#include "osdepend.h"
#include "osd_cpu.h"
 

#include "fileio.h"
 
 
#include <stdio.h>
 
 
//---------------------------------------------------------------------
//	osd_get_path_count
//---------------------------------------------------------------------
int osd_get_path_count( int pathtype )
{
	 
	return 0;
}

//---------------------------------------------------------------------
//	osd_get_path_info
//---------------------------------------------------------------------
int osd_get_path_info( int pathtype, int pathindex, const char *filename )
{
 
}









//---------------------------------------------------------------------
//	osd_fopen
//---------------------------------------------------------------------
osd_file *osd_fopen( int pathtype, int pathindex, const char *filename, const char *mode )
{
 

	return 0;
}


//---------------------------------------------------------------------
//  osd_fflush
//---------------------------------------------------------------------
void osd_fflush( osd_file *file )
{
 
}


//---------------------------------------------------------------------
//	osd_fseek
//---------------------------------------------------------------------
INT32 osd_fseek( osd_file *file, INT64 offset, int whence )
{
 
	return 0;
}

//---------------------------------------------------------------------
//	osd_ftell
//---------------------------------------------------------------------
UINT64 osd_ftell( osd_file *file )
{
 
    return 0;
  
}

//---------------------------------------------------------------------
//	osd_feof
//---------------------------------------------------------------------
int osd_feof( osd_file *file )
{
      
    return 0;
   
}

//---------------------------------------------------------------------
//	osd_fread
//---------------------------------------------------------------------
UINT32 osd_fread( osd_file *file, void *buffer, UINT32 length )
{
   
  
}

//---------------------------------------------------------------------
//	osd_fwrite
//---------------------------------------------------------------------
UINT32 osd_fwrite( osd_file *file, const void *buffer, UINT32 length )
{
  

  return 0;
}

//---------------------------------------------------------------------
//	osd_fclose
//---------------------------------------------------------------------
void osd_fclose( osd_file *file )
{
 
  
}
 
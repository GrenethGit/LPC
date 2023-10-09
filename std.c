 /*****************************************************************************
* Location: /d/
*
* Description: STD File for PLACENAME
*
* Created:
*
* Changes:    
*    
*
 *****************************************************************************/

 /*****************************************************************************
* Includes
 *****************************************************************************/
#pragma strict_types
#include <stdproperties.h>

 /*****************************************************************************
* Inherits
 *****************************************************************************/
inherit "/std/room";

 /*****************************************************************************
* Functions
 *****************************************************************************/
public void         create_room();
public void         create_std_PLACENAME();
public void         add_PLACENAME_items();

 /*****************************************************************************
* Function name: create_room
* Description  : Creates the room
 *****************************************************************************/
public void
create_room()
{
  create_std_PLACENAME();
  add_PLACENAME_items();
  add_prop(ROOM_I_INSIDE, 0); // 1 = Inside 0 = Outside
}

 /*****************************************************************************
* Function name: create_std_PLACENAME
* Description  : Dummy function for inheriting rooms to mask
 *****************************************************************************/
public void
create_std_PLACENAME()
{
}

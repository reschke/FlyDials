/*
	@(#)FlyDial/vvshowc.c
	@(#)Julian F. Reschke, 7. September 1991

	Cursor an
*/

#include <aes.h>
#include <vdi.h>
#include <flydial\vditool.h>

void
V_ShowCursor (VDIWK *V, WORD restore)
{
	v_show_c (V->handle, restore);
}

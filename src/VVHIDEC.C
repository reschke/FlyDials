/*
	@(#)FlyDial/vvhidec.c
	@(#)Julian F. Reschke, 7. September 1991

	Cursor aus
*/

#include <aes.h>
#include <vdi.h>
#include <flydial\vditool.h>

void
V_HideCursor (VDIWK *V)
{
	v_hide_c (V->handle);
}

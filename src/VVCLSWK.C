/*
	@(#)FlyDial/clsvwk.c
	@(#)Julian F. Reschke, 6. Oktober 1991

	Schliežen einer Workstation
*/

#include <aes.h>
#include <vdi.h>
#include <flydial\vditool.h>

void
V_CloseWorkstation (VDIWK *V)
{
	v_clswk (V->handle);
}

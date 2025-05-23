#include <aes.h>
#include <flydial\flydial.h>

static unsigned int imagedata[] =
{
	0x0000, 0x0000,
	0x0000, 0x0000,
	0x0000, 0x2000,
	0x0000, 0x7000,
	0x0000, 0xF800,
	0x0001, 0xFC00,
	0x0002, 0xFE00,
	0x0004, 0x7F00,
	0x0008, 0x3F80,
	0x0010, 0x3FC0,
	0x0020, 0x7FE0,
	0x0043, 0xE7C0,
	0x0087, 0xC3A0,
	0x0087, 0xC160,
	0x0147, 0xC2E0,
	0x01A3, 0x85E0,
	0x01D0, 0x0BE0,
	0x00E8, 0x17E0,
	0x0134, 0x2FC0,
	0x019A, 0x5F80,
	0x018D, 0xBF00,
	0x00C6, 0x7E00,
	0x0066, 0xFC00,
	0x0032, 0xF800,
	0x001C, 0xF000,
	0x000E, 0xE000,
	0x0006, 0xC000,
	0x0002, 0x8000,
	0x0000, 0x0000,
	0x0000, 0x0000,
	0x0000, 0x0000,
	0x0000, 0x0000
};


static BITBLK Image =
{
	(int *)imagedata, 4, 32, 0, 0, 1
};

BITBLK *ImDrive (void)
{
	static int scaled = 0;

	if (!scaled)
	{
		scaled = 1;
		RastTrans (imagedata, 4, 32, HandAES);
	}
	return &Image;
}

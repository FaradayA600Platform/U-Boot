#include "serdes.h"

struct init_seq pwrup_rxeq[] = {
	{0xe015,0x78},
	{0x802e,0x1c},
	{0x8030,0x1c},
	{0x802f,0x4},
	{0x802d,0x2},
	{0x801d,0x8},
	{0x803b,0x1},
	{0x801d,0xc},
	{0xe01a,0x23},	
	{0xe01a,0x3},
};

struct init_seq pwrup_reset[] = {
	{0x801e,0x3},
	{0xe01a,0x43},
};

#include <iostream>

#include "World.h"

// Startpattern, endet nach 54 Generationen
// XXX
// X X
// X X
//
// X X
// X X
// XXX
const unsigned int Start_Pattern_1[7][3] =
{
	{ 1, 1, 1 },
	{ 1, 0, 1 },
	{ 1, 0, 1 },
	{ 0, 0, 0 },
	{ 1, 0, 1 },
	{ 1, 0, 1 },
	{ 1, 1, 1 }
};

int main()
{
    //std::cout << "Hello World!\n";

	World MyWorld;

	MyWorld.Init_World( &Start_Pattern_1[0][0], _countof(Start_Pattern_1), _countof(Start_Pattern_1[0]));

	int stop = 0;
}

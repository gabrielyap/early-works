/* Gabriel Yap
 * 917175659
 *
 * File: pyramid.c
 * -----------------
 *  This program builds a pyramid
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "graphics.h"
#define NBricksInBase 16
#define BrickWidth 0.3
#define BrickHeight 0.15

void DrawPyramid()
{
	int bricks, crntX, crntY, oldX, oldY, holdX, holdY;
	crntX = 0;
	crntY = 0;
	oldX = 0;
	oldY = 0;
	MovePen(0, 0);
	for(int i = 0; i <= NBricksInBase; i++)
	{
		DrawLine(BrickWidth, 0);
		crntX += BrickWidth;
		DrawLine(0, BrickHeight);
		crntY += BrickHeight;
		DrawLine(-BrickWidth, 0);
		DrawLine(0, -BrickHeight);
		MovePen(crntX, 0);
	}
}
int main()
{
	InitGraphics();
	DrawPyramid();
	

}

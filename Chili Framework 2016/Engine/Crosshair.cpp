#include "Crosshair.h"

Crosshair::Crosshair(MainWindow& wnd)
	:
	wnd(wnd)
		
{
}

void Crosshair::Draw(Graphics& gfx)
{
	SetMouse(gfx);
	gfx.PutPixel(mouseX, mouseY, 255, 255, 255);
}

void Crosshair::SetMouse(Graphics& gfx)
{

	if (wnd.mouse.GetPosX() >= gfx.ScreenWidth - 1)
	{
		mouseX = gfx.ScreenWidth - 1;
	}
	
	else if (wnd.mouse.GetPosX() <= 0)
	{
		mouseX = 1;
	}

	else
	{
		mouseX = wnd.mouse.GetPosX();
	}
	
	if (wnd.mouse.GetPosY() >= gfx.ScreenHeight - 1)
	{
		mouseY = gfx.ScreenHeight - 1;
	}

	else if (wnd.mouse.GetPosY() <= 0)
	{
		mouseY = 1;
	}
	else
	{
		mouseY = wnd.mouse.GetPosY();
	}
	
	
}


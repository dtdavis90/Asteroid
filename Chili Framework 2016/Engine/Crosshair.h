#pragma once
#include "Graphics.h"
#include "MainWindow.h"


class Crosshair
{
public:
	Crosshair(class MainWindow& wnd);
	void Draw(Graphics& gfx);
	void SetMouse(Graphics& gfx);
	
private:

	
	MainWindow& wnd;
	int mouseX = 100;
	int mouseY = 100;
};

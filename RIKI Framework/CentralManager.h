#pragma once

#include "D3Dgraphics.h"

#include <cmath>
#include <d3dx9math.h>
#include <string>
#include <sstream>
#include <d3dx9.h>
#include <d3d9.h>
#include <fstream>
#include <iostream>

#include "tileManager.h"
#include "Time.h"
#include "Input.h"
#include "AnimationManager.h"
#include "scrollingEngine.h"

#include "Player.h"


using namespace std;

class CentralManager:public D3Dgraphics
{
private:
	D3DXVECTOR2 tilePos, centerTile, mountainCenter;

	tileManager TM;

	Time time;

	LPDIRECT3DTEXTURE9 tile[2], playerTexture, mountain;

	Player player, playerP;

	Input *input;

	AnimationManager playerAnimation; 

	//Scrolling
	scrollingEngine scroll_mountain;

public:
	CentralManager(void);
	~CentralManager(void);

	//core functions
	void initialize();
	void loadPicture();
	void setRectsAndCenter();
	void drawTexture();
	void checkKey();
	void updateLogic();
	void release();
	void readConfig();
};


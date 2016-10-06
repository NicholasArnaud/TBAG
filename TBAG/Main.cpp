#include <iostream>
#include "Classes.h"

int main()
{


	Forest ArrayofForest[4][4];
	
	/*
	Forest A;
	A.tiles.m_position[0][0];
	A.s_Start = true;

	Forest B;
	B.tiles.m_position[1][0];
	
	Forest C;
	C.tiles.m_position[2][0];
	C.tiles.m_message = true;
	
	Forest D;
	D.tiles.m_position[3][0];
	
	Forest E;
	E.tiles.m_position[0][1];
	
	Forest F;
	F.tiles.m_position[0][2];

	Forest G;
	G.tiles.m_position[0][3];

	Forest H;
	H.tiles.m_position[1][1];

	Forest I;
	I.tiles.m_position[1][2];

	Forest J;
	J.tiles.m_position[1][3];

	Forest K;
	K.tiles.m_position[2][1];

	Forest L;
	L.tiles.m_position[2][2];

	Forest M;
	M.tiles.m_position[2][3];
	*/



	Enemy Joe;
	Joe.m_hp = 500;
	Joe.weapon.m_dmg = 50;
	Joe.weapon.m_equiped = true;
	Joe.weapon.Name = "Stick";

	Player you;
	you.m_hp = 500;
	you.m_position[0][0];
	you.weapon.m_dmg = 50;
	you.weapon.m_equiped = false;
	you.weapon.Name = "Hands";


	return 1;
}
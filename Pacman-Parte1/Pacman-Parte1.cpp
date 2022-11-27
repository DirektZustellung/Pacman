// Pacman-Parte1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#define MAP_VERTICAL 29
#define MAP_HORIZONTAL 120 //Es una Macro sustituye los valores por el nombre que hayamos puesto
enum TILES {EMPTY = ' ', WALL = '#', POINT ='.' };
TILES map[MAP_VERTICAL][MAP_HORIZONTAL];
bool run = true;

enum INPUT {QUIT, UP, DOWN, LEFT, RIGHT, UNKNOWN };
INPUT currentInput = INPUT::UNKNOWN;

void Setup()
{
	for (size_t i = 0; i < 29; i++)
	{
		for (size_t j = 0; j < 120; j++)
		{
			if (i == 0 || j== 0 || i == MAP_VERTICAL -1 || j == MAP_HORIZONTAL -1)
			{
				map[i][j] = TILES::WALL;
			}
			else {
				map[i][j] = TILES::EMPTY;
			}
		}

	}


}

void Input()
{
	char input;
	std::cin >> input;
	switch (input)
	{
	case 'w':
	case 'W':
		currentInput = INPUT::UP;
		break;
	case 's':
	case 'S':
		currentInput = INPUT::DOWN;
		break;
	case 'a':
	case 'A':
		currentInput = INPUT::LEFT;
		break;
	case 'd':
	case 'D':
		currentInput = INPUT::RIGHT;
		break;
	case 'q':
	case 'Q':
		currentInput = INPUT::QUIT;
		break;
		
	}
}

void Draw()
{
	system("CLS"); //Limpiamos la pantalla antes de volver a imprimir
	for (size_t i = 0; i < 29; i++)
	{
		for (size_t j = 0; j < 120; j++)
		{
			std::cout << (char)map[i][j]; //Convertimos el codigo asccii en un char
		}
		std::cout << std::endl;

	}

}

void Logic()
{
	switch (currentInput)
	{
	case QUIT:
		run = false;
		break;
	case UP:
		break;
	case DOWN:
		break;
	case LEFT:
		break;
	case RIGHT:
		break;
	
	}
}
int main()
{
	Setup();
	Draw();
	while (run)
	{
		Input();
		Logic();
		Draw();
	}
}

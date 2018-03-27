#include "stdafx.h"
#include "CTriangle.h"


CTriangle::CTriangle()
{
}

void CTriangle::DrawTriangle(int length = 5, int width = 5)
{
	for (int l = 0; l < length; l++)
	{
		std::cout << "\n|";
		for (int w = 0; (w-1) < l; w++)
		{
			std::cout << "\\";
		}
	}
	std::cout << "\n";
	for (int b = 0; b < width+1; b++)
	{
		std::cout << "-";
	}
}

CTriangle::~CTriangle()
{
}

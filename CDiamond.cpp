#include "stdafx.h"
#include "CDiamond.h"

using namespace std;

CDiamond::CDiamond()
{
	length = 5;
}


CDiamond::~CDiamond()
{
}

void CDiamond::draw()
{
	cout << "Drawing a diamond with length " << length;
}

#include "stdafx.h"
#include "CDiamond.h"

using namespace std;

CDiamond::CDiamond(int l)
{
	length = l;
}


CDiamond::~CDiamond()
{
}

void CDiamond::draw()
{
	cout << "Drawing a diamond with length " << length;
}

#include "canvas.h"
Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{

}

void Canvas::Print()
{
	for (int i = 0; i < this->width; i++)
	{
		for (int j = 0; j < this->height; j++)
			std::cout << this->mat[i][j];
		std::cout << '\n';
	}
}

void Canvas::Clear()
{
	memset(mat, ' ', sizeof(mat));
}

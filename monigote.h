#pragma once
using namespace System::Drawing;
#include "Entidad.h"

class Humano : public Entidad
{
private:
	int idx, idy;
public:
	Humano(int x, int y)
	{
		this->x = x;
		this->y = y;

		//x = 100;
		//y = 100;
	   //comentario salvaje de prueba aparece xd xdxdxdxd

		dx = 5;
		dy = 5;

		idx = 0;
		idy = 0;
	};
	~Humano();

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		ancho = bmp->Width / 4;;
		alto = bmp->Height / 4;;
		Rectangle seccionmostrar = Rectangle(idx * ancho, idy * alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho * 1.0, alto * 1.0);
		g->DrawImage(bmp, zoom, seccionmostrar, GraphicsUnit::Pixel);
	}

	void mover(Graphics^ g, char i)
	{
		switch (i)
		{
		case 'A':
			if (x > 0)
			{
				idy = 1;
				x -= dx;
			} break;

		case 'W':

			if (y > 50)
			{
				idy = 3;
				y -= dy;

			}break;
		case 'D':
			if (x + ancho * 1.0 < g->VisibleClipBounds.Width)
			{
				idy = 2;
				x += dx;
			}break;
		case 'S':
			if (y + alto * 1.0 < g->VisibleClipBounds.Height)
			{
				idy = 0;
				y += dy;
			}break;
		}

		idx++;
		if (idx > 3)
		{
			idx = 0;
		}
	}
};

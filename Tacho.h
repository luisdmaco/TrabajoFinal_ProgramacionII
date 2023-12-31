#pragma once
#include "Entidad.h"

class Tacho : public Entidad {
public:
	Tacho(Bitmap^ img, int x, int y) {
		width = img->Width;
		height = img->Height;
		this->x = x;
		this->y = y;
		dx = dy = 0;
		IDx = 0;
	}
	~Tacho() {}
	Rectangle AreaTacho() { return Rectangle(x, y , 20 , 30 ); }
	Rectangle AreaRecoleccionTacho() { return Rectangle(x - 20, y - 20, width + 40, height + 40); }
	//inicio del area - hasta el final del ba�o + el area restante
	void draw(Graphics^ g, Bitmap^ img) {
		Rectangle corte = Rectangle(IDx * width, 0 * height, width, height);
		g->DrawImage(img, AreaRectangle(), corte, GraphicsUnit::Pixel);
	}
	//para obtener y / x, las funciones est�n en entidad (herencia)
};
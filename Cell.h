#ifndef _CELL_H_
#define _CELL_H_

#include "Attr.h"
#include "Color.h"

//#PREPROCESSING
#include <cwchar>
#include <cstring>
//#PREPROCESSING_END

//#DECLARATION
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ CLASS CELL

class Cell
{
public:
	wint_t character;
	Color color;
	Attr attr;

	Cell();
	Cell(cchar_t);
	Cell(wint_t, Color color = Color::White, Attr attr = Attr::Normal);
	operator cchar_t() const; //verifier avec valgrind pas de problème d'initialisation de variable local
};

//#DECLARATION_END

#endif

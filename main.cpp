#include "FigureEditor.h"
#include "triangle.h"
#include "Circle.h"

int main(void) {
	Figure* f1 = new Figure();
	Figure* triangle1 = new Triangle(3, 4);
	Circle* circle1 = new circle(5);

	cout << FigureEditor::get_info(f1) << endl;
	cout << FigureEditor::get_info(triangle1) << endl << endl;
	cout << FigureEditor::get_info(circle1) << endl << endl;
	return 0;
}
#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib; // our graphics facilities are in Graph_lib
	Point tl{ 100, 100 };
	Simple_window win(tl, 1000, 800, "Excersises");
	//1. feladat:
	Graph_lib::Rectangle r{ Point{200, 200}, 100, 200 };
	Graph_lib::Polygon poly;
	poly.add(Point{ 500, 300 });
	poly.add(Point{ 500, 500 });
	poly.add(Point{ 600, 500 });
	poly.add(Point{ 600, 300 });
	poly.set_color(Color::red);
	r.set_color(Color::blue);
	win.attach(r);
	win.attach(poly);
	win.wait_for_button(); //mindegyik feladathoz
}

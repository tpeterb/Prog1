#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib; // our graphics facilities are in Graph_lib
	Point p{ 200, 300 };
	Simple_window win(p, 800, 600, "My window");
	Graph_lib::Rectangle r{ Point{400, 400}, 100, 30 };
	Text t{ Point{420, 420}, "Howdy!" };
	r.set_fill_color(Color::blue);
	win.attach(r);
	win.attach(t);
	win.wait_for_button();
}

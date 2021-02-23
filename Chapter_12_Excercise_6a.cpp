#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	Point p{ 200, 300 };
	Simple_window win(p, 300, 300, "My window");
	Circle c{ Point{200, 400}, 300 };
	c.set_color(Color::green);
	c.set_fill_color(Color::green);
	win.attach(c);
	win.wait_for_button();
}

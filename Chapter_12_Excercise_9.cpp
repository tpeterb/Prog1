#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	Point p{ 200, 200 };
	Simple_window win(p, 1200, 800, "My window");
	Image img(Point(500, 500), "Snowfall.jpg");
	Text t(Point(600, 700), "Snowfall");
	t.set_color(Color::dark_blue);
	win.label("Snowfall");
	win.attach(img);
	win.attach(t);
	win.wait_for_button();
	//A kép megjelenítéséhez kell a snowfall.jpg kép
}

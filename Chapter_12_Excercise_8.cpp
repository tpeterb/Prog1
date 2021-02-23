#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	Point p{ 200, 200 };
	Simple_window win(p, 1200, 800, "My window");
	Circle c1(Point(300, 300), 100);
	Circle c2(Point(420, 400), 100);
	Circle c3(Point(540, 300), 100);
	Circle c4(Point(660, 400), 100);
	Circle c5(Point(780, 300), 100);
	c1.set_color(Color::blue);
	c2.set_color(Color::yellow);
	c3.set_color(Color::black);
	c4.set_color(Color::green);
	c5.set_color(Color::red);
	win.attach(c1);
	win.attach(c2);
	win.attach(c3);
	win.attach(c4);
	win.attach(c5);
	win.wait_for_button();
}

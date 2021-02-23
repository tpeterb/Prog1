#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	Point p{ 200, 200 };
	Simple_window win(p, 1600, 1000, "My window");
	Graph_lib::Rectangle r{ Point{250, 250}, 1000, 600};
	Graph_lib::Rectangle t(Point{600, 350}, 200, 500);
	Graph_lib::Polygon poly;
	Graph_lib::Rectangle v(Point(900, 300), 300, 400);
	Graph_lib::Rectangle a1(Point(900, 475), 300, 50);
	Graph_lib::Rectangle a2(Point(1030, 300), 50, 400);
	Graph_lib::Rectangle kemeny(Point(770, 25), 50, 100);
	poly.add(Point(250, 250));
	poly.add(Point(750, 80));
	poly.add(Point(1250, 250));
	r.set_fill_color(Color::yellow);
	t.set_fill_color(Color::dark_green);
	v.set_fill_color(Color::dark_blue);
	a1.set_fill_color(Color::red);
	a2.set_fill_color(Color::red);
	poly.set_fill_color(Color::blue);
	kemeny.set_fill_color(Color::dark_magenta);
	win.attach(r);
	win.attach(t);
	win.attach(poly);
	win.attach(v);
	win.attach(a1);
	win.attach(a2);
	win.attach(kemeny);
	win.wait_for_button();
}

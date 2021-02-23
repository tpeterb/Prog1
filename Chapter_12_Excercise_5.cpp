#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	Point p{ 200, 300 };
	Simple_window win(p, 1200, 800, "My window");
	const int w = 0.66 * Fl::w();
	const int h = 0.75 * Fl::h();
	Graph_lib::Rectangle r{ Point{100, 100}, w, h};
	Line l{ Point{100, 100}, Point{w+100, 100} };
	Line g{ Point{100, h+100}, Point{w+100, h+100} };
	Line f{ Point{100, 100}, Point{100, h+100} };
	Line b{ Point{w+100, 100}, Point{w+100, h+100} };
	l.set_color(Color::red);
	g.set_color(Color::red);
	f.set_color(Color::red);
	b.set_color(Color::red);
	win.attach(r);
	win.attach(l);
	win.attach(g);
	win.attach(f);
	win.attach(b);
	win.wait_for_button();
}

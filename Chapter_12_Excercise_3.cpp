#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib; // our graphics facilities are in Graph_lib
	Point p{ 200, 300 };
	Simple_window win(p, 800, 600, "My window");
	Text T{ Point{200, 200}, "T" };
	Text P{ Point{300, 200}, "P" };
	Text B{ Point{400, 200}, "B" };
	T.set_color(Color::red);
	P.set_color(Color::green);
	B.set_color(Color::dark_yellow);
	T.set_font_size(150);
	P.set_font_size(150);
	B.set_font_size(150);
	T.set_font(Graph_lib::Font::times_bold);
	P.set_font(Graph_lib::Font::times_bold);
	B.set_font(Graph_lib::Font::times_bold);
	win.attach(T);
	win.attach(P);
	win.attach(B);
	win.wait_for_button();
}

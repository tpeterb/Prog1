#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib; // our graphics facilities are in Graph_lib
	Point p{ 200, 300 };
	Simple_window win(p, 800, 600, "My window");
	int s = 200, t = 200;
	Graph_lib::Rectangle* r = new Graph_lib::Rectangle(Point{0,0}, 10,10);
	constexpr Fl_Color l = Color::red;
	const Fl_Color w = Color::white;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			r = new Graph_lib::Rectangle{ Point{s, t}, 200, 200 };
			if (i % 2 == 0 && j % 2 == 0)
			{
				r->set_fill_color(l);
			}
			else if (i % 2 == 0 && j % 2 != 0)
			{
				r->set_fill_color(w);
			}
			else if (i % 2 != 0 && j % 2 == 0)
			{
				r->set_fill_color(w);
			}
			else
			{
				r->set_fill_color(l);
			}
			win.attach(*r);
			s += 200;
		}
		s = 200;
		t += 200;
	}
	win.wait_for_button();
}

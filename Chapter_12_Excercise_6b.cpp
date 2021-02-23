#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	Point p{ 200, 300 };
	Simple_window win(p, 3000, 2000, "My window");
	win.wait_for_button();
}

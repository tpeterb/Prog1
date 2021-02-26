#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
{
	using namespace Graph_lib;
	constexpr int xstart = 0, ystart = 0;
	int cy = 0, dx = 0, l = 0;
	Point p{ xstart, ystart };
	Simple_window win(p, 1000, 800, "My window"); //1. feladat
	Graph_lib::Rectangle *r;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			r = new Graph_lib::Rectangle(Point(xstart+dx, ystart+cy), 100, 100);
			if(xstart+dx == ystart+cy) //3. feladat
			{
				r->set_fill_color(Color::red);
			}
			win.attach(*r);
			dx += 100;
		}
		l++;
		dx = 0;
		cy += 100;
	} //2. feladat
	Image img1(Point(0, 600), "Landscape.jpg");
	Image img2(Point(300, 600), "Landscape.jpg");
	Image img3(Point(600, 0), "Landscape.jpg");
	win.attach(img1);
	win.attach(img2);
	win.attach(img3); //4. feladat
	Image cool(Point(xstart, ystart), "dice.jpg");
	win.attach(cool);
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			win.wait_for_button();
			cool.move(100, 0);
		}
		cool.move(-800, 100);
	} //5. feladat
	win.wait_for_button();
} //A kód sikeres futtatásához szükségesek a Landscape.jpg és a dice.jpg állományok

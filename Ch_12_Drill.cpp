#include "Simple_window.h" // get access to our window library
#include "Graph.h" // get access to our graphics library facilities

int main()
try {
	using namespace Graph_lib; // our graphics facilities are in Graph_lib
	//12.7.1
	Point p{200, 300}; //1. feladat, ez ne legyen kikommentelve
	Simple_window win(p, 800, 600, "My window");
	//12.7.2
	Point tl{ 200, 300 };
	//Simple_window win(tl, 1000, 800, "Canvas");
	//12.7.3
	Axis x{ Axis::x, Point{50, 400}, 280, 15, "x axis" }; //12.7.3
	Axis y{ Axis::y, Point{50, 400}, 280, 15, "y axis" }; //12.7.3
	y.set_color(Color::green); //12.7.3
	y.label.set_color(Color::dark_yellow); //12.7.3
	win.attach(x); //12.7.3
	win.attach(y); //12.7.3
	win.set_label("Canvas #2"); //12.7.3
	//12.7.4
	Function sine{ sin,0,100,Point{40,130},1000,50,50 };
	win.attach(sine);
	win.set_label("Vászon #4");
	//12.7.5
	sine.set_color(Color::magenta);
	Graph_lib::Polygon poly; 
	poly.add(Point{ 300,600 }); 
	poly.add(Point{ 350,120 });
	poly.add(Point{ 470,250 });
	poly.set_color(Color::yellow);
	poly.set_style(Line_style::dot);
	win.attach(poly);
	win.set_label("Canvas #5");

	//12.7.6
	Graph_lib::Rectangle r{ Point{200,150}, 200, 300 }; // top left corner, width, height
	win.attach(r);
	win.set_label("Vászon #6");
	Closed_polyline poly_rect;
	poly_rect.add(Point{ 100,50 });
	poly_rect.add(Point{ 200,50 });
	poly_rect.add(Point{ 200,100 });
	poly_rect.add(Point{ 100,100 });
	win.attach(poly_rect);
	poly_rect.add(Point{ 50,200 });
	//12.7.7
	r.set_fill_color(Color::blue);
	poly.set_style(Line_style(Line_style::dash, 5));
	poly_rect.set_style(Line_style(Line_style::dash, 1));
	poly_rect.set_fill_color(Color::dark_green);
	win.set_label("Canvas #7");
	//12.7.8
	Text t{ Point{150,150}, "Heyho, what's up?" };
	win.attach(t);
	win.set_label("Canvas #8");
	t.set_font(Font::times_bold);
	t.set_font_size(30);
	win.set_label("Canvas #9");
	//12.7.9
	Image ii{ Point{100,50},"fltk.jpg" };
	win.attach(ii);
	win.set_label("Canvas #10");
	ii.move(100, 400);
	win.set_label("Canvas #11");
	//12.7.10
	Circle c{ Point{100,200},500 };
	Graph_lib::Ellipse e{ Point{100,200}, 75,250 };
	e.set_color(Color::dark_red);
	Mark m{ Point{100,200},'x' };
	ostringstream oss;
	oss << "screen size: " << x_max() << "*" << y_max()
	<< "; window size: " << win.x_max() << "*" << win.y_max();
	Text sizes {Point{100,20},oss.str()};
	Image cal {Point{225,225},"snow.jpg"}; // 320*240-pixel gif
	cal.set_mask(Point{40,40},200,150); 
	win.attach(c);
	win.attach(m);
	win.attach(e);
	win.attach(sizes);
	win.attach(cal);
	win.set_label("Vászon #12");
	//
	win.wait_for_button(); //mindegyik feladathoz
} catch(exception& e) //12.7.1
{
	cerr << "Hello! What have you messed up yet again?" << endl;
	return 1;
} catch(...) //12.7.1
{
	cerr << "Heyho! Something looks suspicious!" << endl;
	return 2;
}

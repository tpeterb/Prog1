#include <iostream>

using namespace std;

class DivideByZero{};

int main() 
try {
	setlocale(LC_ALL, "hun");
	cout<<"8-ban a(z) a = ?"<<endl;
	int a = 5;
	cout<<"Adjon meg egy egész számot!"<<"a = ";
	cin>>a;
	if(a == 0) 
	{
		throw DivideByZero{};
	}
	return 0;
} catch(DivideByZero) 
{
	cout<<"Há mié akarsz nullávaa osztani? Há Nómális Maagit? Há nem!"<<endl;
}

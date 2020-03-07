// Example for using class in c++ //
#include <iostream>
#include<string>
using namespace std;
class cars
{
    public:
        string brand;
        string type;
        int year;
};

int main() {
	cars car1,car2,car3;
	car1.brand="BMW A50";
	car1.type="A";
	car1.year=2019;
	
	car2.brand="AUDI Q30";
	car2.type="C";
	car2.year=1999;
	
	car3.brand="HONDA L99";
	car3.type="D";
	car3.year=1888;
	
	cout<<car1.brand<<","<<car1.type<<","<<car1.year<<endl;
	cout<<car2.brand<< ","<<car2.type<< ","<<car2.year<<endl;
	cout<<car3.brand<<","<<car3.type<<","<<car3.year<<endl;
	
	
	return 0;
}

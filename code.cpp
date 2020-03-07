//Code to define function outside the class//
#include<iostream>
using namespace std;

class first
{
public:

	void function();

};

 void first::function()   //defined a  function outside the class// 
{
	cout << "Hello World!!" << endl;
}


int main()
{
	first print1;
	print1.function();    // calling function //
	return 0;	
 }
 
 *******************************************************************************************************
 *******************************************************************************************************
                                   //simple code to use cout keyword //
    #include<iostream>
    using namespace std;
    int main()
{
	  cout << "I am Lucifer: ";
	  return 0;      
 }

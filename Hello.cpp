/* Kirill Begaliev st129977@student.spbu.ru
first "Hello world V2.0" project
*/

#include <iostream>
#include <string>
using namespace std;

string text = "";

int Hello()
{
	cout<<"Hello, world!"<<endl;
	
	while (true)
	{
		cin>>text;
		cout<<"Hello, " << text << "!" <<endl; 
	}
	
	return 0;
}

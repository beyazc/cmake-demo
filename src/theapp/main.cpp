#include <iostream>
extern "C"  int sum(int a,int b);

int main()
{
	int a=sum(1,2);
	std::cout << "Hello world from The App!"<<a<< std::endl;

   return 0;
}

#include <iostream>

int main(){
	int total;
	for (int i=0;i<1000;i++)
		if (i % 3 ==0 || i % 5 ==0)
			total += i;
	std::cout << "The sum of integers <1000 divisible by 3 or 5 is: " <<  total;	
	return total;
}

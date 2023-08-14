#include <iostream>

int main(){
	int result = 0;
	int i=1;
	int j=2;
	while (i<4000000 && j<4000000){
		if (i % 2 == 0){result+=i;}
		if (j % 2 == 0){result+=j;}
		i = i+j;
		j = i+j;
	}
	std::cout << result;
	return 0;
}

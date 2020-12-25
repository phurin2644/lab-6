#include<iostream>
using namespace std;

char before(char x){
	char before(char x){
	char b;
if(x == 'A'){
	b = 'Z';
}else if(x <= 'Z'&& x >= 'A'){
	b = x-1;
}else {
	b = '0';
}
return b;
}

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
ofstream ex;

int number=5877474;
int one;

ex.open("numbers.dat");

ex << number;

ifstream next;
next.open("numbers.dat");

next >> one;

cout << one;


return 0;
}
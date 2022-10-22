#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char *argv[])
{
	Calculator calculator;
	
	if (argv[2][0] == '+') {
		cout<<argv[1]<<" + "<<argv[3]<<" = "<<calculator.Add(atof(argv[1]), atof(argv[3]))<<endl;
	} else if (argv[2][0] == '-') {
		cout<<argv[1]<<" - "<<argv[3]<<" = "<<calculator.Sub(atof(argv[1]), atof(argv[3]))<<endl;
	} else cout << "No such sign" << endl;

	return 0;
}
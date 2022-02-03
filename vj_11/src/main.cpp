#include <iostream>
#include <fstream>
#include <vector>
#include "functions.hpp"
using namespace std;

int main()
{
	ifstream number_txt;
	number_txt.open("/home/makelli/Desktop/c++/vj_11/src/numbers.txt",ios::in);
	vector <int> vec;

	check_if_found(number_txt);
	append_from_file_to_vector(number_txt,vec);

	int totalover500= total_over500(vec);	
	minandmax(vec);
	remove_under_300(vec);
	print(vec);
}
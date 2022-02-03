#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


void check_if_found(ifstream &textfile);
void append_from_file_to_vector(ifstream& textfile, vector <int> &vec);
int total_over500(vector <int> vec);
void minandmax(vector <int> vec);
void print(vector <int> vec);
void remove_under_300(vector <int> &vec);
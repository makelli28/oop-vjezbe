#pragma once
#include "functions.hpp"

void check_if_found(ifstream &textfile){
    try
    {
        if(!textfile){
            throw string ("File not found");
        }
        else
            cout << "File found and opened"<< endl;
    }
    catch(string error)
    {
        cout << error << endl;
    }
}

void append_from_file_to_vector(ifstream& textfile, vector <int> &vec){
   istream_iterator <int> start(textfile);
   istream_iterator <int> end;
   copy(start,end,back_inserter(vec));

}

int total_over500(vector <int> vec){
    int count=0;

    for(auto x : vec){
        count++;
    }
    return count;
}

void minandmax(vector <int> vec){
    cout << "Max found: " << *max_element(vec.begin(),vec.end())<<endl;
    cout << "Min found: " << *min_element(vec.begin(),vec.end())<<endl;

}

void print(vector <int> vec){
    // for(auto x : vec){
    //     cout << vec.at(x) << endl;
    // }

    for (int i = 0 ; i < vec.size();i++){
        cout << vec[i] << endl;
    }
}

void remove_under_300(vector <int> &vec){
    
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        if (*i <300) {
            vec.erase(i);
            i--;
        }
    }
}
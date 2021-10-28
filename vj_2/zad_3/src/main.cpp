#include <iostream>
using namespace std;

struct rectangle{
	int left_bottom_dot_x,left_bottom_dot_y;
	int right_upper_dot_x,right_upper_dot_y;
};

struct circle{
	int circle_middle_x,circle_middle_y; 
	int circle_radious;
};

///funkcija u koju cemo slat niz pravoktnika i kruznicu
int circle_rectangle_collision_array(const rectangle* rect,const circle &cir, int size){
	int max=0;
	for (int i = 0; i < size; i++){

		if(rect[i].left_bottom_dot_x <= cir.circle_middle_x and cir.circle_middle_x <= rect[i].right_upper_dot_x){
			if (rect[i].left_bottom_dot_y <= (cir.circle_middle_y-cir.circle_radious) and (cir.circle_middle_y-cir.circle_radious) <= rect[i].right_upper_dot_y){
				//sijece li,tocka je povic pravokutnika
				max++;
			}else if (rect[i].left_bottom_dot_y <= (cir.circle_middle_y+cir.circle_radious) and (cir.circle_middle_y+cir.circle_radious) <= rect[i].right_upper_dot_y){
				//sijece li , tocka je uspod pravokutnia
				max++;
			}
		}else if (rect[i].left_bottom_dot_y <= cir.circle_middle_y and cir.circle_middle_y <= rect[i].right_upper_dot_y){
			if (rect[i].left_bottom_dot_x <= (cir.circle_middle_x-cir.circle_radious) and rect[i].right_upper_dot_x >= (cir.circle_middle_x-cir.circle_radious)  ){
				max++;
			}
			else if (rect[i].left_bottom_dot_x <= (cir.circle_middle_x+cir.circle_radious) and rect[i].right_upper_dot_x >= (cir.circle_middle_x+cir.circle_radious)  ){
				max++;
			}	
		}
	}
	return max;
};

int main(){

circle circ_hardcoded;
circ_hardcoded.circle_middle_x = 2;
circ_hardcoded.circle_middle_y = 4;
circ_hardcoded.circle_radious = 2;

rectangle array_rectangle[3];
array_rectangle[0]={1,1,4,3};
array_rectangle[1]={3,4,6,6};
array_rectangle[2]={1,5,4,8};

int a = circle_rectangle_collision_array(array_rectangle,circ_hardcoded,3);
cout << "Rectangle array collide with circle " << a << " times" << endl;
}
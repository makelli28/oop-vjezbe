#include <iostream>
using namespace std;

/*
2. Napišite template klasu Stack. Implementirajte funkcije članove za operacije
push, pop i is_empty.

*/
template <typename T>
class stack
{
	private:
	int top;
	T stack_array[10];

	public:

	stack(){this->top = 0;}

	void push(T element);
	T pop();
	bool is_empty();
	bool is_full();
};

template <class T>
bool stack<T>::is_full(){
	if (top == 10 || top > 10)
		return 1;
	else 
		return 0;
}


template <class T>
void stack<T>::push(T element){
	if(is_full()){
		cout << "Stack is full" << endl;
		
	}else {
	cout << "New element in stack: " << element << endl;
	top = top + 1;

	stack_array[top] = element;
	}
}

template <class T> 
bool stack<T>::is_empty(){
    if (top == 0)
        return 1;
    else
        return 0;
}

template <class T> 
T stack<T>::pop()
{
    T remove_element= stack_array[top];
    top--;

    return remove_element;
}

//sort
template <typename swapy>
void sorty(swapy arr[], int SIZE){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				swapy temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
//specijalizran za chars -upper-lower

template <>
void sorty<char>(char arr[],int SIZE){
	for (int i = 0; i < SIZE ; i++){
		for (int j = 0; j < SIZE; j++){
			if(tolower(arr[i]) < tolower(arr[j])){
				char tmp;
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}	
		}	
		
	}
}


int main()
{
	int array[5] = {11,44,21,231,2};
	float arfloat[5] = {1.1,5.5,2.2,100.1,88.88};
	char arrchar[5] = {'o','Z','A','m','b'};


	sorty(array,5);
	sorty(arfloat,5);
	sorty(arrchar,5);

	
	for (int i = 0; i < 5;i++){
		cout << array[i] << ", ";
	}
	cout << endl;

	for (int i = 0; i < 5;i++){
		cout << arfloat[i] << ", ";
	}
	cout << endl;
	
	for(int i = 0; i < 5; i++){
		cout << arrchar[i] << ", ";
	}
	cout << endl;

	//zadatak 2
	stack <int> int_type_stack;
	int_type_stack.push(1);
	int_type_stack.push(2);
	int_type_stack.push(3);
	int_type_stack.push(4);
	int_type_stack.push(5);
	int_type_stack.push(6);
	int_type_stack.push(7);
	int_type_stack.push(8);
	int_type_stack.push(9);
	int_type_stack.push(100);
	int_type_stack.push(124);
	int_type_stack.push(131);
	int_type_stack.push(1121);

	cout << "removed element: " << int_type_stack.pop()<< endl;
	cout << "removed element: " << int_type_stack.pop()<< endl;
	cout << "removed element: " << int_type_stack.pop()<< endl;
	cout << "removed element: " << int_type_stack.pop()<< endl;
	cout << "removed element: " << int_type_stack.pop()<< endl;
	cout << "removed element: " << int_type_stack.pop()<< endl;

	int_type_stack.push(365);

}
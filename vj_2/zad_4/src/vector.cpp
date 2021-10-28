#include "vector.hpp"

void MyVector::vector_new (size_t capacity)
{
    int* copy_elements;
    //prvo alociranje
    this->capacity =  capacity ;
    if(this->capacity == 0){
        arr = new int[1];
        this->capacity=1;
    } 

    //svako naredno duplo alociranje
    else{
        this->capacity =this-> capacity*2;
        copy_elements = new int[this->capacity];

        for(int i = 0 ; i < this->capacity; i++){
            copy_elements[i] = arr[i];
        }
        arr = new int[this->capacity];
        
        for (int j = 0; j < this-> capacity; j++)
        {
            arr[j] = copy_elements[j];
        }
        

        delete[] copy_elements;
    }
}
void MyVector::vector_delete()
{
    delete[] arr;
}
void MyVector::vector_push_back(int n)
{
    if(capacity == size){


        vector_new(size);
    }
    arr[size]=n;
    size++;
}
void MyVector::vector_pop_back()
{
    arr[size]=0;
    size--;
}
int& MyVector::vector_front()
{
    return arr[0];
}
int& MyVector::vector_back()
{
    return arr[size-1];
}
size_t MyVector::vector_size() 
{
    return size;
}   


void MyVector::print_vector()
{
    for (size_t i = 0; i < vector_size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
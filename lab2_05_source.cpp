#include<iostream>
#include<ctime>
using namespace std;

void merge(int* array, int p, int q, int r);
void merge_sort(int* array, int l, int r);
int quick_partition(int*array, int l, int r);
void quick_sort(int* array, int l, int r);
void counting_sort(int* array, unsigned int size);


void swap(int& a, int& b);
void bubble_sort(int* array, unsigned int size);
void insertion_sort(int* array, unsigned int size);
void selection_sort(int* array, unsigned int size);






int main()
{   
    srand(time(0));
    int size;
    int type;
    int array[1000];
    
    while(1){
        cout <<"Give me the size (max=1000) : ";
        cin >> size ;

        for (int i=0; i<size; i++) 
            array[i] = rand() % size ;

        for (int i=0; i<size; i++) 
            cout << array[i] << ' ';
        cout << endl;

        cout <<"Give me the type of algorithm (0:Bubble, 1:Insert, 2:Selection, 3:Merge, 4:Quick, 5:Counting) : ";
        cin >> type;

        if (type == 0) 
            bubble_sort(array, size);
        else if (type == 1) 
            insertion_sort(array, size);
        else if (type == 2) 
            selection_sort(array, size);
        else if (type == 3) 
            merge_sort(array, 0, size-1);
        else if (type == 4) 
            quick_sort(array, 0, size-1);
        else if (type == 5) 
            counting_sort(array, size);
        else break;


        for (int i=0; i<size; i++) 
            cout << array[i] << ' ';


    }
    
    
}

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}



void merge(int* array, int l, int q, int r){

    // initialize new arrays.
    int n1 = q - l + 1;
    int n2 = r - q;
    int* L = new int[n1+1];
    int* R = new int[n2+1];

    // .....TODO.....




    // .....TODO.....


    // set the end of the arrays to inifinite 
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0;
    int j = 0;

    
    // .....TODO.....




    // .....TODO.....


}

void merge_sort(int* array, int l, int r){

   // .....TODO.....




    // .....TODO.....
}

int quick_partition(int*array, int l, int r){
    
    int pivot = array[r];
    int i = l - 1;

    // .....TODO.....




    // .....TODO.....

    return i+1;
}

void quick_sort(int* array, int l, int r){

    // .....TODO.....




    // .....TODO.....

}

void counting_sort(int* array, unsigned int size){
    // Find maximum value
    int max_value = array[0];
    for (int i = 1; i < size; i ++){
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    // Initialize counting array
    int * counts = new int [max_value+1];
    for (int i = 0; i < max_value+1; i++){
        counts[i] = 0;
    }
    int* sorted = new int [size];
    for(int i = 0; i < size; i++){
        sorted[i] = array[i];
    }

    
    // .....TODO.....




    // .....TODO.....

    // update array with sorted array
    for (int i = 0; i < size; i++)
        array[i] = sorted[i];
}



void bubble_sort(int* array, unsigned int size){
    for (unsigned int i=0; i < size-1; i++)
        for (unsigned int j=0; j<size-1-i; j++)
        {
            if (array[j] < array[j+1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
}

void insertion_sort(int* array, unsigned int size){
    for (unsigned int i = 1; i< size; i++)
    {
        int temp = array[i];
        int j = i-1 ;
        while(1)
        {
            if (j<0) break;
            if (array[j] <= temp) break;
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}

void selection_sort(int* array, unsigned int size){
    for (unsigned int i = 0; i < size-1; i++)
    {
        int min = array[i];
        int min_idx = i;
        for (unsigned int j=i+1; j < size; j++ )
        {
            if (array[j] < min)
            {
                min = array[j];
                min_idx = j;
            }
        }
        // swap(array[i], array[min_idx])
        int temp;
        temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}
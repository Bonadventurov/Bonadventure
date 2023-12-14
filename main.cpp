#include <iostream>

int getMax(const int* ar, int size){
	int max = ar[0];
	for(int i = 1; i < size; i++){
		if(max - ar[i] < 0){
			max = ar[i];
		}
	}
	return max;
}

int getMin(const int* ar, int size){
	int min = ar[0];
	for(int i = 1; i < size; i++){
		if(min - ar[i] > 0){
			min = ar[i];
		}
	}  
	return min;
}

void swap(int* a, int* b){
	int number1 = *a;
	int number2 = *b;
	int* c = b;
	a = c;
	b = a;
	*b = number2;
	*a = number1;
}

void swap2(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;}

void swap2(int number1, int number2){
	int number3 = number2;
	number2 = number1;
	number1 = number3;}


void showEl_line(int* ar, int size, char del = ' '){
	for(int i = 0; i < size; i++){
		std::cout << ar[i] << del;
	}
	std::cout << std::endl;}

void showEl_matrix(const int* ar, int size, int col, char del = ' '){
	int string = size / col;
	int a = 1;
	for(int j = 0; j < string; j++){
		for(int i = 0;i < col; i++){
			std::cout << ar[i] << del;		
		}
	std::cout << "\n";
	}	
	std::cout << std::endl;}


void SelSort(int size; int ar[size]){
    for(int i = 0; i < size; i++){
        int max = ar[i];				
        for(int j = 0; j < size; j++){	
            if(max - ar[j] < 0){	
               max = ar[j];			
			}
		}
		int temp = ar[j];
    	ar[j] = ar[0];
    	ar[0] = temp;
	}
		std::cout << ar << std::endl 
}
 

int main(){
	
}






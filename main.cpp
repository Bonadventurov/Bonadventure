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

void swap2(int number1, int number2){
	int number3 = number2;
	number2 = number1;
	number1 = number3;
}

void showEl_line(int* ar, int size, char del = ' '){
	for(int i = 0; i < size; i++){
		std::cout << ar[i] << del;
	}
	std::cout << std::endl;
}

void showEl_matrix(const int* ar, int size, int col, char del = ' '){
	int string = size / col;
	int a = 1;
	for(int j = 0; j < string; j++){
		for(int i = 0;i < col; i++){
			std::cout << ar[i] << del;		
		}
	std::cout << "\n";
	}	
	std::cout << std::endl;
}

void SelSort(int size; int ar[size]){
  3     for(int i = 0; i < size; i++){
  4         int max = ar[0];
  5         for(int j = 0; j < size; j++){
  6             if(max - ar[j] < 0){
  7                 max = ar[j];
  8             }
  9         }
 10                 int temp = ar[j];
 11                 ar[j] = ar[0];
 12                 ar[0] = temp;
 13                 int br[size - 1];
 14                 for(int q = 1; q < size - 1; q++){
 15                     br[i] = ar[q];
 16                 }
 17     }
 18     std::cout <<
 19 }
 

int main(int c, char** agv){
	std::cout << "--------\ntest test\n------" << std::endl;;
	for (int i = 0; i < c; i++) {
		std::cout << agv[i] << std::endl;
	}
    return 0;
}






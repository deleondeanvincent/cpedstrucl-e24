#include <iostream>
using namespace std;

int main ()
{
	int n = 5;
	int Array[n]= {35, 10, 55, 20, 5};
	cout << "Original Array is {35, 10, 55, 20, 5}" << endl;
	cout << endl;
	
		for (int i=n; i>1; i--){
		
			for(int j=0; j<i-1; j++)
				if (Array[j] > Array[j+1]){
					int swap = Array[j];
					Array[j] = Array[j+1];
					Array[j+1] = swap;
				}
			for (int k=0; k<5; k++)
				cout << Array[k] << " ";
				cout << endl;
			}
}

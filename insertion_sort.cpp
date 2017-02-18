#include <iostream>
using namespace std;

int main (){
	int n = 5;
	int Array[n] = {40, 30, 20, 50, 10};
	int i, j;
	cout << "Original Array is {40, 30, 20, 50, 10}" << endl;
	cout << endl;
	
		for (i=1; i<n; i++){
		{
			
			int tmp = Array[i];
			for (j=i-1; j>=0 && tmp < Array[j]; j--)
			{
				Array[j+1] = Array[j];
			}
			Array[j+1] = tmp;
		}
		for (int k=0; k<5; k++)
		cout << Array[k] << " ";
		cout << endl;
	}
}

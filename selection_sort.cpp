#include <iostream>
using namespace std;

int main (){
	int n = 5;
	int Array[n] = {30, 40, 20, 10, 50};
	cout << "Original Array is {30, 40, 20, 10, 50}" << endl;
	cout << endl;
	
	for (int i=0; i<n-1; i++){
	{
			int min=Array[i], index=i;
		for (int j=i+1; j<n; j++)
		{
			if(Array[j] < min)
			{
				min=Array[j];
				index=j;
			}
		}
		Array[index] = Array[i];
		Array[i] = min;
	}
		for (int k=0; k<5; k++)
		cout << Array[k] << " ";
		cout << endl;
	}
}

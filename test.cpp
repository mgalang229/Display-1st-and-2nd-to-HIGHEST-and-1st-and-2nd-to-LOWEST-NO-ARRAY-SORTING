#include <iostream>
using namespace std;

int main(){
	
	int arr[10], min, min2, max, max2;
	int counter = 1;
	
	cout << "Enter ten numbers: \n";
	
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < 10; i++){
		if(arr[i] == arr[i+1]){
			counter++;
		} 
	}
	
	if(counter != 10){
		max = max2 = 0;
		for(int i = 0; i < 10; i++){
			if(max < arr[i]){
				max = arr[i];
			}
		}
		cout << "\nfirst to the highest: " << max << endl;
		for(int i = 0; i < 10; i++){
			if(max2 < arr[i] && arr[i] != max){
				max2 = arr[i];
			}
		}
		cout << "second to the highest: " << max2 << endl;
		
		for(int i = 0; i < 10; i++){
			if(min > arr[i]){
				min = arr[i];
			}
		}
		cout << "first to the lowest: " << min << endl;
		for(int i = 0; i < 10; i++){
			if(min2 > arr[i] && arr[i] != min){
				min2 = arr[i];
			}
		}
		cout << "second to the lowest: " << min2;
	} else{
		cout << "\nfirst to the highest: " << arr[0] << endl;
		cout << "second to the highest: " << arr[0] << endl;
		cout << "first to the lowest: " << arr[0] << endl;
		cout << "second to the lowest: " << arr[0] << endl;
	}
	
	
	return 0;
}

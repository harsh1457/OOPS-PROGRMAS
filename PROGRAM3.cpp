// using binary search and quick sort
#include <iostream>
using namespace std;
void read(int[], int);
void display(int[], int);
void swap(int*, int*);
void search(int[], int);
void sort(int[], int, int);
int partition(int[], int, int);
void search(int[], int, int, int);
int main() {
int a;
int x;
int y;
int t;
cout << "Enter number of elements in array: ";
cin >> a;
int arr[a];
read(arr, a);
display(arr, a);
sort(arr,0,a-1);
cout<< endl << "Sorrted array is: ";
for (int i = 0; i < a; i++) {
cout << arr[i] << " ";
}
cout << endl;
cout << "Enter Element to Find: ";
cin >> t;
search(arr,0,a-1,t);
return 0;
}
void swap(int *x, int *y) {
int temp = *x;
*x = *y;
*y = temp;
}
void read(int array[], int a) {
cout << "Enter Array elements: \n";
for (int i = 0; i < a; i++) {
cin >> array[i];
}
}
void display(int array[], int a) {
cout<< endl << "Entered array is: ";
for (int i = 0; i < a; i++) {
cout << array[i] << " ";
}
cout << endl;
}
int partition(int array[], int l, int h){
int pivot = array[h];
int i = l-1;
for(int j = l; j < h; j++ ){
if(array[j]<pivot){
i++;
swap(&array[i],&array[j]);
}
}
swap(&array[i+1],&array[h]);
return (i+1);
}
void sort(int array[],int l, int h){
if(l<h){
int pi = partition(array,l,h);
sort(array,l,pi-1);
sort(array,pi+1,h);
}
}
void search(int array[], int l, int h, int t){
if (l > h) {
cout << endl << "Not Found";
return;
}
int mid = l + (h - l) / 2;
if(t== array[mid]){
cout << endl << "Found at index: "<< mid;
}
else if(array[mid] < t ){
search(array,mid+1,h,t);
}
else if(array[mid] > t ){
search(array,l,mid-1,t);
}
else {
cout << "Not Found";
}
}

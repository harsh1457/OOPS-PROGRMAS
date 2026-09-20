#include <iostream>
using namespace std;
class numbersum{
private:
int str, end,evensum=0,
oddsum=0;
public:
void range(){
cout<<"Enter start and end
numbers\n";
cin>>str>>end;
}
void sum(){
for(int i=str;i<end;i++){
if(i % 2 == 0){
evensum += i;}
else{
oddsum +=i;}
}
}
void display(){
cout<<"\nRange: From "<<str;
cout<<" to "<<end;
cout<<"\nSum of even numbers:
"<<evensum;
cout<<"\nSum of odd numbers:
"<<oddsum;
}
};
int main() {
numbersum N;
N.range();
N.sum();
N.display();
return 0;
}

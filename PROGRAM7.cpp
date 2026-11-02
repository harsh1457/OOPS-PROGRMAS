#include <iostream>
#include <cstring>
using namespace std;
class String
{
char str[100];
public:
String()
{
str[0] = '\0';
}
String(const char s[])
{
    strcpy(str, s);
}
// Destructor
~String()
{
    cout << "Destructor called." << endl;
}

void Accepts()
{
    cout << "Enter a string: ";
    cin.getline(str, 100);
}

void Display()
{
    cout << "String: " << str << endl;
}
};
int main()
{
String s1;
s1.Accepts();
s1.Display();
String s2("Hello World");
cout << "Parameterized constructor: ";
s2.Display();
return 0;
}

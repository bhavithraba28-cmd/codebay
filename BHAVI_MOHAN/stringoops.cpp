#include<bits/stdc++.h>
using namespace std;
class gostring
{
    private:
 string name,rev;
 char a[5];
 public:
 void getdata()
 {
    cout<<"\nENTER THE STRING: ";
    getline(cin, name);
    cout<<"\n ENTER THE CHARACTER OF ALAPHABETS: ";
    cin>>a;
 }

 void display()
 {
    cout<<"\nSTRING: \n"<<name<<endl;

    cout<<"\n CHARACTER OF ALAPHABETS: "<<a<<endl;
 }
 void reverse()
    {
        cout<<"\nREVERSE STRING:";

        for(int i = name.length() - 1; i >= 0; i--)
        {
            cout<<name[i];
        }
    
       
        cout<<"\n REVERSE CHARACTER: "<<a[5];

    for(int i = strlen(a) - 1; i >= 0; i--)
    {
        cout<<a[i];
    }

    }

void vowelscount()
{
   { 
   int vowelsc; 
    for(int i = 0; i < name.length(); ++i)
    {
        if(name[i] == 'a'||name[i] == 'e'|| name[i] =='i'|| name[i] =='o'||name[i] =='u'||
        name[i] =='A'||name[i] =='E'||name[i] =='I'||name[i] =='O'||name[i] =='U')
       { vowelsc++;}

    }
        cout<<"\nCOUNT OF VOWELS IN STRING: "<<vowelsc;
   }
}
void palindrome()
{
    int flag =0;
    int n = name.length();

    for(int i = 0; i < n/2; i++)
    {
        if(name[i] != name[n-i-1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout<<"\nPalindrome String";
    else
        cout<<"\nNot a Palindrome String";
 
 } };


int main(){
    gostring g;

    g.getdata();
    g.display();
    g.reverse();
    g.vowelscount();
    g.palindrome();
    return 0;

}
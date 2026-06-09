 #include<bits/stdc++.h>
 using namespace std;
 class calculator
 {
    private:
    int a,b,c;
     int m;
     int n;
  public:
  void getintput()
  {
    cout<<"enter the 2 number to add:"<<endl;
    cin>>a>>b;
     cout<<"give number to check whther the number id odd or even: "<<endl;
     cin>>n;
   
    cout<<"give input for multiplication: "<<endl;
    cin>>m;
  }
   void add()
   {
    int sum;
    sum= a+b;
    cout<<"sum= "<<sum<<endl;
      }
void table()
 {
    
    for(int i=1;i<=10;i++)
    cout<<m<<"x"<<i<<"=" <<m*i<<endl;
 }

 void even()
 {
    
   
    if(n%2==0)
    cout<<"even number"<<endl;
    else
    cout<<"odd number"<<endl;
 }
 
 };
int main()
 {
  calculator c;
   c.getintput();
  c.even();
 
  c.add();
  c.table();

 }
/* code to understand for mathematical problems*/

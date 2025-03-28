#include<iostream>
#include<stdlib.h>
using namespace std;
class calc
{
	public:
		void intro()
		{
			cout<<"This is a simple Calculator that performs basic arithmetic operations of Addition,Subtraction,Multiplication and\nDivision.";
			cout<<"\nEnter any two numbers as well as your choice the perform an arithmetic operation.\n 1].for Addition\n 2].for Subtraction\n 3].for Multiplication\n 4].for Division\n 5].for exiting\n"; 
		}
};
int main()
{
	class calc c;
	int num1,num2,choice,res;
	float quo,rem;
	c.intro();
	while(true)
	{
	  cout<<"enter your choice number to perform the arithmetic operation from the information provided\n";
	  cin>>choice;
	  if(choice==5)
	  {
	    cout<<"Exiting...,\n";
	    break; 
      }
      cout<<"enter any two numbers\n";
	  cin>>num1>>num2;
	  switch(choice)
	  {
	     case 1:
	      res=num1+num2;
	      cout<<"Summation:"<<res<<"\n";
	      break;
	     case 2:
		   if(num2>num1)
		   {
		     res=num2-num1;
			 cout<<"Difference:"<<res<<"\n";
		   }
		   else
		   {
		     res=num1-num2;
		     cout<<"Difference:"<<res<<"\n";
	       }
	       break;
	      case 3:
	       res=num1*num2;
	       cout<<"Product:"<<res<<"\n";
	       break;
	      case 4:
		   quo= num1/num2;
		   rem = num1%num2;
		   cout<<"Quotient:"<<quo<<"\n";
		   cout<<"Remainder:"<<rem<<"\n";
		   break;
		  default:
		   cout<<"Invalid choice ,operation cannot be performed\n";
		   exit(1);  
      }
    }
	return 0;
}

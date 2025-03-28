#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class guessnum
{ 
    public:
   	void intro()
   	{
   	  cout<<"Welcome to the number guessing game...";
      cout<<"\nInstructions:\n 1].Here a random number will be generated between 0 to 249 whereas the user will will have to guess the number.\n 2].Appropriate hints will be provided and the user will be given unlimited number of chances to guess the number.";	
      cout<<"\n So let's begin...!!"; 
	}
	void play()
	{ 
	  int random = rand()%250;
	  int guess,tries;
	  do{
	  	cout<<"guess the number..\n";
	  	cin>>guess;
	  	tries++;
	  	if(guess<random)
	  	{
	  		cout<<"To Low\n";
		}
		else if(guess>random)
		{
			cout<<"To High\n";
		}
		else
		{
			 if(tries==1)
			 {
			 	cout<<"Congratulations!! you did it in the first try....let's jump to next number!\n";
			 }
			 else
			 {
			   cout<<"Congratulations!!you have guessed it correct in "<<tries<<" tries\n";	
			 }
		}
	  }while(guess!=random);
	}
};
int main()
{
	srand(time(NULL));
	class guessnum g;
	int choice;
	g.intro();
	while(true)
	{
	  cout<<"\n1]Play game \t 2].quit game\nplease enter your choice...\n";
	  cin>>choice;
	  switch(choice)
	  {
		  case 1:
			 g.play();
			 break;
		  case 2:
		     return 0;
	  }	
	}
	return 0;
}

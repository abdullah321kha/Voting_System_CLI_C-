#include <iostream>
using namespace std;

int main() {
  int age;
  cout<<"Enter the age:"<<endl;
  cin>>age;
  bool citizen=true;
  cout<<"Are You USA Born Citizen Yes/No:"<<endl;
  cin>>citizen;
  bool registered=false;
  cout<<"Are you Resgistered Yes/No:"<<endl;
  cin>>registered;
  
  if(age>=18 && citizen==true && registered==true)
  {
    cout<<"You can vote!"<<endl;
    cout<< " Your age, citizenship, and registration status all meet the requirements."<<endl;
    cout<< " Don't forget to check your local voting schedule and polling station."<<endl;
    cout<< " Make your voice heard – every vote counts!"<<endl; 
    
  }
  else if(age<18 &&  age>=1 && citizen==true && registered==false )
  {
    cout<<"You are not eligible to vote because you are under 18."<<endl;
    cout<<" In the U.S., you must be at least 18 years old to vote in elections."<<endl;
    cout<<" Please wait until you reach the eligible age."<<endl;
    cout<<"Have a nice day, thank you for checking your eligibility!"<<endl;

  }
  else if(registered==false && citizen==true && age>=18)
  {
    cout<<"You need to register first."<<endl;
    cout<<"Voter registration is required before you can vote in the U.S."<<endl;
    cout<<"Visit your local election office or register online at vote.gov."<<endl;
    cout<<"Thank you for checking your voting eligibility!"<<endl;
  }
  else if (age>= 18 && citizen==false )
  {
cout <<"Sorry, you are not allowed to vote because you are not a U.S.A Born citizen." << endl;
cout << "Only U.S.A Born citizens are eligible to vote in federal and most state elections." << endl;
cout << "Voting requires that you be a U.S. citizen, at least 18 years old, and registered to vote." << endl;
cout << "Please review the eligibility criteria and try again if you become eligible in the future." << endl;
cout << "Have a nice day, thank you for using the Voting Eligibility Checker!" << endl;
    
  }
  
  else if(age<18 && age>=1 && citizen==false && registered==true)
  {
  	cout <<"Sorry, you are not allowed to vote because you are not a U.S.A Born citizen." << endl;
  	cout<<" Also You're Under 18!"<<endl;
  	cout<<"Thank You!!"<<endl;
  }
  else 
  {
  	cout<<"Invalid Age!!"<<endl;
  	cout<<"Plz Enter the correct age!!"<<endl;
  }

  
  return 0;
}


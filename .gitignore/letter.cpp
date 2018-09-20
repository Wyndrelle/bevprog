#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string friend_name;
    string tfn;
    cout<<"What is your name?   -> ";
    string firstname;
    cin>>firstname;
    cout<<"Hello, "+firstname;
    cout<<"To whom, do you want this email to be sent? ->";
    cin>>tfn;
    cout<<"\n Dear "+tfn + ", \n How are you? How was your day? etc... ";
    cout<<"Enter your friend's name please ->";
    cin>>friend_name;
    cout<<"\n Have you seen" + friend_name + " Lately?";
    char friend_sex='0';
    
    cout<<"Your friend is male or female (f/m) -> ";
    cin>>friend_sex;
    
    if (friend_sex == 'm')
    {
    cout << "If you see " + friend_name + " please ask him to call me." ;
    }
    else
    {
    cout << "If you see " + friend_name + " please ask her to call me.";
    }
    
    cout<<"Your friend's age is -> ";
    int age;
    cin>> age;
    
    if (age > 0 && age < 110) //simple_error("You're kidding")
   
    {
        cout<<"I hear you just had your birthday, and you're " + age;
    }
    else
    {
        cout<<"You're kidding!";
    }
    
    if (age > 13)
    {
        cout<<"Next year, you'll be " + age+1;
    }
    else if (age == 17)
    {
        cout<<"Next year, you'll be able to vote";
    }
    else if (age > 70)
    {
        cout<<"I hope you are enjoying your retirement";
    }
    
    cout<<"Yours, sincerely, \n ___________ \n" + firstname;
    
    
    
    
}


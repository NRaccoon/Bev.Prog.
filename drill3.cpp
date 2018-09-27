#include <iostream>
using namespace std;

int main()
{
cout << "Please enter your first name: ";
string your_name;
cin >> your_name;

cout << "Please enter the name of the person you want to write to: ";
string first_name;
cin >> first_name;

cout<<"Please enter your another friend's name: ";
string friends_name;
cin >> friends_name;

cout << "Please enter "<<friends_name<<"'s sex write 'm' if male and 'f' if female: ";
char friends_sex;
cin >> friends_sex;

cout << "How old is "<<friends_name<<"? ";
int age;
cin >> age;

cout << "\n\nDear "<<first_name<<",\n\n";

cout << "How are you? I love you. And I miss you and hmmmmm.\n";

cout << "Have you seen "<<friends_name<<" lately?\n";


if(friends_sex == 'm')
cout << "If you see "<<friends_name<<" please ask him to call me.\n\n";
else if(friends_sex == 'f')
cout << "If you see "<<friends_name<<" please ask her to call me.\n\n";


if (age <= 0 || age >= 110)
perror ("You are kidding!");
else
cout << "I hear you just had a birthday and you are "<<age<<" years old.\nHappy birthday to you!\n\n";

if(age < 12)
cout << "Next year you will be "<<age<<"+1.\n\n";
else if(age == 17)
cout << "Next year you will be able to vote.\n\n";
else if(age > 70)
cout << "I hope you are enjoying retirement.\n\n";

cout << "Yours sincerely,\n";
cout <<your_name<< '\n';
}


#include <iostream>
using namespace std;

struct Person{
    char name[50];
    char family[50];
    int age;
};
void displayPerson(Person);

int main(){
    // create the struct
    Person person;
    // get values from the user
    cout<<"enter the name :"<<endl;
    cin.get(person.name, 50);
    getchar();
    cout<<"enter the family :"<<endl;
    cin.get(person.family , 50);
    getchar();
    cout<<"enter the age :"<<endl;
    cin>>person.age;
    // print the data
    getchar();
    displayPerson(person);

    getchar();
}
// function for print person struct
void displayPerson(Person person){
    cout<<"the person name is : ";
    cout<<person.name<<endl;

    cout<<"the person family is : ";
    cout<<person.family<<endl;

    cout<<"the person age is : ";
    cout<<person.age<<endl;

}

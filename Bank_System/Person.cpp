#include "Person.h"


#include"string"
#include "limits"

//default constructor
Person::Person()
{}


Person::Person(string name, int id, string password)
    :name(name), id(id), password(password) {
    set_name(name);
    set_password(password);
}


//setters
void Person::set_name(string name) {

    while (1)
    {
        if (Validation::check_name(name))
        {
            Person::name = name;
            return;
        }
        else
        {
            cout << "Invalid Name!\n Renter new name : ";
            cin.clear();
            cin.ignore(28, '\n');
            getline(cin >> ws, name);


        }
    }
}


void Person::set_password(string password)
{

    while (true) {


        if (Validation::check_pass(password)) {
            Person::password = password;
            return;
        }
        else {

            cout << "Invalid Password \n Renter new password : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> password;

        }
    }



}


void Person::set_id(int id) {

    Person::id = id;
}


//getters

string Person::get_name() {

    return name;
}

int Person::get_id() {

    return id;
}

string Person::get_password() {

    return password;
}

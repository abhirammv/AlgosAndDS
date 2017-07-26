//
// Created by Abhiram MV on 7/26/17.
//

#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

//A function to add the entry to the phonebook
void AddEntry(map <string, long> &PhoneBook, const string str);

int main()
{
    map<string, long> PhoneBook;
    string str;
    string LookUpName;

    long value = 0;
    int num =  0;
    cin >> num;

    for(int i =0; i <=num; i++)
    {
        getline(cin, str);
        AddEntry(PhoneBook, str);
    }

    //Warning: Loop runs indefinetly. This is only meant for use on HackerRank's code submission.
    while(cin>>LookUpName)
    {
        value = PhoneBook[LookUpName];
        if(value)
            cout<<LookUpName<<"="<<PhoneBook[LookUpName]<<endl;
        else
            cout<<"Not found"<<endl;
    }

    return 0;
}


void AddEntry(map <string, long> &PhoneBook, const string str)
{
    //Creating an object of type istringstream -> an input stream class to operate on strings
    //reference: http://www.cplusplus.com/reference/sstream/istringstream/
    //Basically tokenizing the input seperated by whitespaces

    istringstream iss(str);
    string temp;
    long value = 0;
    string::size_type sz;

    int i = 0; //Counter
    do
    {
        string subs;
        iss >> subs;

        if(i == 0) {
            temp = subs;
            i++;
        }
        else if(i == 1){

            value = stol(subs); //Conversion from string to long
            //value = stol(subs, &sz);
            // The &sz is a pointer to object of type size_t and it is set by the function to point to the next character in str after numerical value
            //This can be used in case the number is alphanumeric. It's default value is nullptr (= 0)
            //Reference: http://www.cplusplus.com/reference/string/stol/

            PhoneBook[temp] = value;
            i = 0;
        }

    }while(iss);

}

//
// Created by Abhiram MV on 7/27/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Person{
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }

};

class Student :  public Person{
private:
    vector<int> testScores;
public:
    /*
    *   Class Constructor
    *
    *   Parameters:
    *   firstName - A string denoting the Person's first name.
    *   lastName - A string denoting the Person's last name.
    *   id - An integer denoting the Person's ID number.
    *   scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
    Student(string fN, string lN, int ID, vector<int> scores):Person(fN, lN, ID), testScores(scores)
    {
        testScores = scores;
    }

    /*
    *   Function Name: calculate
    *   Return: A character denoting the grade.
    */
    // Write your function here
    char calculate()
    {
        int size = testScores.size();
        float avg =0.0;
        int sum = 0;
        char grade = ' ';
        for(int i = 0; i<size; i++)
        {
            sum += testScores[i];
        }
        avg = sum/size;

        if((avg >= 90) && (avg<=100))
            grade = 'O';
        else if((avg >= 80) && (avg<90))
            grade = 'E';
        else if((avg >= 70) && (avg <80))
            grade = 'A';
        else if((avg >= 55) && (avg < 70))
            grade = 'P';
        else if((avg>=40) && (avg < 55))
            grade = 'D';
        else
            grade = 'T';

        return grade;

    }
};


int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}

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
        Student(string firstName, string lastName, int id, vector<int> scores): Person(firstName,lastName,id){
            testScores=scores;
        }
        
    char calculate()
         {             
            int i,sum=0,avg;
            char grade;
         for(i=0; i<testScores.size(); i++)
             sum+=testScores[i];
         avg=sum/testScores.size();

         if(avg<=100 && avg>=90)
            grade='O';
         else if(avg<90 && avg>=80)
            grade='E';
         else if(avg<80 && avg>=70)
            grade='A';
         else if(avg<70 && avg>=55)
            grade='P';
         else if(avg<55 && avg>=40)
            grade='D';
         else
            grade='T';

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

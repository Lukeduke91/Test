#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
//#include "A1N.h"
using namespace std;
//enum firstName[Name1 = "Lucas"];

class Person
{
protected:
	string name;
	int age;
public:
	virtual void Draw() const = 0;
	void setSurveyList(string N, int A)
	{
		name = N;
		age = A;
	}
};

class Student: public Person
{
public:


	virtual void Draw() const
	{
		
		string Colleges[3] = { "George Brown", "Sheridan", "Niagra College" };
		string Name = Colleges[1];

		string Program[3] = { "Game Programming", "Fashion", "Computer engineer" };
		string college = Program[1];

		cout << "Students name is " << name << " from " << Name << " currently enrolled in " << college << " on their " 
			<< 8 << " semester at the age of " << age;
	}
};

class NonGamingStudents : public Student
{
public:
	virtual void Draw() const
	{

	}
};

int main()
{
	const int MAX_PEOPLE = 1;
	string Name;
	int age = 20;

	string firstname[20] = { "Thea", "aida", "katie", "Lieselotte", "Talitha", "Lynda", "Jule", "Leida", "Leia", "Padme"
		"Werner", "Elden", "Bobbie", "Chance", "Edward", "Genaro", "Erich", "Adbul", "Luke", "Anakin" };
	string lastname[25] = { "Washington", "Fox", "Sutton", "Park", "Little", "Patton", "Rojas", "Barlow", "Duncan", "Fitzgerald",
			"Cruz", "Craig", "Connor", "Townsend", "Mac", "Moss", "Webb", "Snyder", "Bell", "Acosta", "Coleman", "Solo", "Skywalker",
			"Amidala", "Kenobi" };
	

	Person* PersonArray[MAX_PEOPLE]{new Student()};

	
		/*Name = firstname[rand() % 19] + " " + lastname[rand() % 24];
		age = 17+rand()%27;*/
	PersonArray[0]->setSurveyList("Lucas Gurney", age);
	

	
	PersonArray[0]->Draw();
	

	return 0;
}

//string randomNames()
//{
//	unsigned seed = time(0);
//	srand(seed);
//
//	string firstname[20] = { "Thea", "aida", "katie", "Lieselotte", "Talitha", "Lynda", "Jule", "Leida", "Leia", "Padme"
//	"Werner", "Elden", "Bobbie", "Chance", "Edward", "Genaro", "Erich", "Adbul", "Luke", "Anakin" };
//	string lastname[25] = { "Washington", "Fox", "Sutton", "Park", "Little", "Patton", "Rojas", "Barlow", "Duncan", "Fitzgerald",
//		"Cruz", "Craig", "Connor", "Townsend", "Mac", "Moss", "Webb", "Snyder", "Bell", "Acosta", "Coleman", "Solo", "Skywalker",
//		"Amidala", "Kenobi" };
//
//	string Name = firstname[rand() % 19] + " " + lastname[rand() % 24];
//	return Name;
//}
//
//string randomColleges()
//{
//	unsigned seed = time(0);
//	srand(seed);
//	string Colleges[3] = { "George Brown", "Sheridan", "Niagra College" };
//
//	string Name = Colleges[rand() % 2];
//	return Name;
//}
//
//string randomProgram()
//{
//	unsigned seed = time(0);
//	srand(seed);
//	string Program[3] = { "Game Programming", "Fashion", "Computer engineer" };
//
//	string Name = Program[rand() % 2];
//	return Name;
//}
//
//string randomService()
//{
//	unsigned seed = time(0);
//	srand(seed);
//	string Program[3] = { "Disney+", "Netflix", "Hulu" };
//
//	string Name = Program[rand() % 2];
//	return Name;
//}
//
//string randomConsole()
//{
//	unsigned seed = time(0);
//	srand(seed);
//	string Program[3] = { "PS5", "Xbox series X", "Nintendo Switch" };
//
//	string Name = Program[rand() % 2];
//	return Name;
//}
//
//int averageHourG(int limit)
//{
//	GamingStudent hour[500];
//	int average{};
//	for (int i = 0; i < limit; i++)
//	{
//		average += hour[i].getHour();
//	}
//	return average / limit;
//}
//
//int averageHourS(int limit)
//{
//	NonGamingStudent hour[500];
//	int average{};
//	for (int i = 0; i < limit; i++)
//	{
//		average += hour[i].getHour();
//	}
//	return average / limit;
//}
//
//string averageConsole(int limit)
//{
//	GamingStudent stream[500];
//	int PS5 = 0;
//	int Xbox = 0;
//	int NS = 0;
//
//	for (int i = 0; i < limit; i++)
//	{
//		if (stream[i].getGaming() == "PS5")
//		{
//			PS5++;
//		}
//
//		else if (stream[i].getGaming() == "Xbox series X")
//		{
//			Xbox++;
//		}
//
//		else if (stream[i].getGaming() == "Nintendo Switch")
//		{
//			NS++;
//		}
//	}
//
//	string P = "PS5";
//	string X = "Xbox series X";
//	string N = "Nintendo Switch";
//	if (PS5 > Xbox && NS)
//	{
//		return P;
//	}
//
//	else if (Xbox > PS5 && NS)
//	{
//		return X;
//	}
//
//	else if (NS > Xbox && PS5)
//	{
//		return N;
//	}
//}
//
//string averageStream(int limit)
//{
//	NonGamingStudent stream[500];
//	int PS5 = 0;
//	int Xbox = 0;
//	int NS = 0;
//
//	for (int i = 0; i < limit; i++)
//	{
//		if (stream[i].getStreaming() == "Disney+")
//		{
//			PS5++;
//		}
//
//		else if (stream[i].getStreaming() == "Netflix")
//		{
//			Xbox++;
//		}
//
//		else if (stream[i].getStreaming() == "Hulu")
//		{
//			NS++;
//		}
//	}
//
//	string D = "Disney+";
//	string N = "Netflix";
//	string H = "Hulu";
//	if (PS5 > Xbox && NS)
//	{
//		return D;
//	}
//
//	else if (Xbox > PS5 && NS)
//	{
//		return N;
//	}
//
//	else if (NS > Xbox && PS5)
//	{
//		return H;
//	}
//}
//
//int averageAge(int limit)
//{
//	Person age[500];
//	int average{};
//	for (int i = 0; i < limit; i++)
//	{
//		average += age[i].getAge();
//	}
//	return average / limit;
//}
//
//int main()
//{
//	unsigned seed = time(0);
//	srand(seed);
//
//	int age;
//	string name;
//	Person fullName[100];
//
//	string college;
//	string program;
//	int semester;
//	Student Class[100];
//	
//	string stream;
//	int hoursS;
//	NonGamingStudent resultsS[100];
//	
//	string console;
//	int hoursG;
//	GamingStudent resultsG[100];
//
//	int averageA;
//	int averageHS;
//	int averageHG;
//	string preferredDS;
//	string preferredDG;
//	Survey finaleResult[100];
//
//	int participants;
//
//	//intro to the survey
//	cout << "Welcome to our survey for gaming and non-gaming students." << endl 
//		 << "===========================================================" << endl;
//	cout << "How many participants do you want to participate: ";
//	cin >> participants;
//
//	for (int i = 0; i > participants; i++)
//	{
//		name = randomNames();
//		age = 17 + rand() % 27;
//
//		fullName[i] = Person(name, age);
//	}
//
//	for (int e = 0; e > participants; e++)
//	{
//		college = randomColleges();
//		program = randomProgram();
//		semester = 1 + rand() % 8;
//
//		Class[e] = Student(college, program, semester);
//
//	}
//	for (int i = 0; i > participants; i++)
//	{
//		stream = randomService();
//		hoursS = 1 + rand() % 500;
//
//		resultsS[i] = NonGamingStudent(stream, hoursS);
//
//	}
//	for (int i = 0; i > participants; i++)
//	{
//		console = randomConsole();
//		hoursG = 1 + rand() % 500;
//
//		resultsG[i] = GamingStudent(console, hoursG);
//
//	}
//	
//	averageA = averageAge(participants);
//	averageHS = averageHourG(participants);
//	averageHG = averageHourS(participants);
//	preferredDS = averageConsole(participants);
//	preferredDG = averageStream(participants);
//	finaleResult[0] = Survey(averageA, averageHS, "Streaming",preferredDS);
//	finaleResult[1] = Survey(averageA, averageHG, "Gaming", preferredDG);
//
//	cout << "Do you want to start the survey?: \n1. Yes \n2. No" << endl;
//	cin >> participants;
//	
//	if (participants == 1)
//	{
//		cout << finaleResult[0].getSurvey();
//	}
//	else if (participants == 2)
//	{
//		cout << "Have a good day." << endl;
//	}
//}
//create other loops that will randomly generate names (20 * 25), age(17-27), hours, 
//prefered devices(PS5, Xbox series X, Switch)/service, college, program, and semesters.
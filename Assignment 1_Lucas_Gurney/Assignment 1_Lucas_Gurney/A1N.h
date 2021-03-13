#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person()
	{
		setName("");
		setAge(0);
	}

	Person(string N, int A)
	{
		setName(N);
		setAge(A);
	}

	void setName(string N)
	{
		this->name = N;
	}

	void setAge(int A)
	{
		this->age = A;
	}

	string getName() const
	{
		return name;
	}

	int getAge() const
	{
		return age;
	}

};

class Student : public Person
{
private:
	string college;
	string program;
	int semester;
	Person* ID;
public:
	Student(string, string, int, Person*);

	void setCollege(string C)
	{
		college = C;
	}

	void setProgram(string P)
	{
		program = P;
	}

	void setSemester(int S)
	{
		semester = S;
	}

	void setID(Person* I)
	{
		ID = I;
	}

	string getCollege()
	{
		return college;
	}

	string getProgram()
	{
		return program;
	}

	int getSemester()
	{
		return semester;
	}

	Person* getID()
	{
		return ID;
	}

};

class NonGamingStudent : public Student
{
private:
	string Streaming;
	int Hours;
	Student* College;
public:

	NonGamingStudent(string, int, Student*);
	/*NonGamingStudent(string S, int H)
	{
		Streaming = S;
		Hours = H;
	}

	NonGamingStudent()
	{
		Streaming = "No service";
		Hours = 0;
	}

	void setStreaming(string S)
	{
		Streaming = S;
	}

	void setHour(int H)
	{
		Hours = H;
	}

	string getStreaming()
	{
		return Streaming;
	}

	int getHour()
	{
		return Hours;
	}*/
	void setStreaming(string S)
	{
		Streaming = S;
	}

	void setHourS(int HS)
	{
		Hours = HS;
	}



	string getStreaming()
	{
		return Streaming;
	}

	int getHourS()
	{
		return Hours;
	}
};

class GamingStudent : public Student
{
private:
	string gaming;
	int Hours;
	Student* College;
public:
	/*GamingStudent(string S, int H)
	{
		gaming = S;
		Hours = H;
	}

	GamingStudent()
	{
		gaming = "No service";
		Hours = 0;
	}

	void setGaming(string S)
	{
		gaming = S;
	}

	void setHour(int H)
	{
		Hours = H;
	}

	string getGaming()
	{
		return gaming;
	}

	int getHour()
	{
		return Hours;
	}*/
	GamingStudent(string G, int H, Student* C);

	void setGaming(string G)
	{
		gaming = G;
	}

	void setHours(int H)
	{
		Hours = H;
	}

	string getGaming()
	{
		return gaming;
	}

	int getHours()
	{
		return Hours;
	}
};
//Added in the set and get just in case I need them.

class Survey //the main one that'll be displayed to the viewer.
{
private:
	int averageAge;
	int averageHour;
	string preferredDevice;
	string gamingStreaming;
public:
	Survey(int A, int H, string D, string GS)
	{
		averageAge = A;
		averageHour = H;
		preferredDevice = D;
		gamingStreaming = GS;
	}

	Survey()
	{
		averageAge = 0;
		averageHour = 0;
		preferredDevice = "Nothing";
		gamingStreaming = "neither";
	}

	void setAge(int A)
	{
		averageAge = A;
	}

	void setHour(int H)
	{
		averageHour = H;
	}

	void setDevice(string D)
	{
		preferredDevice = D;
	}

	void setService(string GS)
	{
		gamingStreaming = GS;
	}

	int getAge()
	{
		return averageAge;
	}

	int getHour()
	{
		return averageHour;
	}

	string getDevice()
	{
		return preferredDevice;
	}

	string getService()
	{
		return gamingStreaming;
	}

	string getSurvey()
	{
		string data = "\nAverage age of Students=======>" + to_string(averageAge);
		data += "\nAverage number of hours on said service=======>" + to_string(averageHour);
		data += "\nMost preferred " + preferredDevice + " service=======>" + gamingStreaming;

		return data;
	}

};


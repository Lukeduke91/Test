#include "A1N.h"

Student::Student(string C, string p, int s, Person* I)
{
	setCollege(C);
	setProgram(p);
	setSemester(s);
	setID(I);
}
NonGamingStudent::NonGamingStudent(string S, int H, Student* C) : Student(*C)
{
	setStreaming(S);
	setHourS(H);
}
GamingStudent::GamingStudent(string G, int H, Student* C) : Student(*C)
{
	setGaming(G);
	setHours(H);
}
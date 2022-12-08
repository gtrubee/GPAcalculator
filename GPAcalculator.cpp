// Author: Gavon Trubee
// This program will take the amount of credit hours and the grade for each
// class this semester, then calculate their GPA.
// Date Last Modified: 12/07/2022

#include <iostream>
#include <string>
using namespace std;

void getInfo(string grade[], int credHours[], int numClasses);
void pointConvert(string grade[], double points[], int credHours[], int numClasses);
double calcGPA(double points[], int credHours[], int numClasses);

int main()
{
int numClasses;
cout << "How many classes do you have this semester?" << endl;
cin >> numClasses;
string grade[numClasses];
double points[numClasses];
double gpa;
int credHours[numClasses];
getInfo(grade, credHours, numClasses);
pointConvert(grade, points, credHours, numClasses);
gpa=calcGPA(points, credHours, numClasses);
cout << "Your GPA: " << gpa << endl;
return 0;
}

void getInfo(string grade[], int credHours[], int numClasses)
{
for(int i=0; i<numClasses; i++)
{
cout << "Enter grade for class #" << i+1 << " "<< endl;
cin >> grade[i];
cout << "Enter credit hours for class #" << i+1 << " " << endl;
cin >> credHours[i];
}
}

// Convert letter grades to points using the standard grading scale
void pointConvert(string grade[], double points[], int credHours[], int numClasses)
{
for(int i=0; i<numClasses; i++)
{
if(grade[i]=="A")
points[i]=4.0 * credHours[i];
else if(grade[i]=="A-")
points[i]=3.7 * credHours[i];
else if(grade[i]=="B+")
points[i]=3.3 * credHours[i];
else if(grade[i]=="B")
points[i]=3.0 * credHours[i];
else if(grade[i]=="B-")
points[i]=2.7 * credHours[i];
else if(grade[i]=="C+")
points[i]=2.3 * credHours[i];
else if(grade[i]=="C")
points[i]=2.0 * credHours[i];
else if(grade[i]=="C-")
points[i]=1.7 * credHours[i];
else if(grade[i]=="D+")
points[i]=1.3 * credHours[i];
else if(grade[i]=="D")
points[i]=1.0 * credHours[i];
else
points[i]=0.0;
}
}

// Calculate the GPA for the semester
double calcGPA(double points[], int credHours[], int numClasses)
{
double totalPoints = 0;
int totalHours = 0;
for(int i=0; i<numClasses; i++)
{
totalPoints += points[i];
totalHours += credHours[i];
}
return totalPoints/totalHours;
}

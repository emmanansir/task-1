#include<iostream>
#include<string>
#include<iomanip>
int main()
{
	std::string Name, Department;
	int RollNo;
	double EnglishMarks, MathMarks, PhysicsMarks;
	std::cout<<"Enter student name";
	std::getline(std::cin,Name);
	std::cout<<"Enter Roll Number";
	std::cin>>RollNo;
	std::cin.ignore(10000, '\n');
	std::cout<<"Enter Department";
	std::getline(std::cin,Department);
	std::cout<<"Enter marks in english";
	std::cin>>EnglishMarks;
	std::cout<<"Enter marks in math";
	std::cin>>MathMarks;
	std::cout<<"Enter physics marks";
	std::cin>>PhysicsMarks;
	double TotalMarks = EnglishMarks + MathMarks + PhysicsMarks;
	double Percentage = (TotalMarks / 300.0)*100.0;
	std::string Grade;
	if (Percentage >= 85)
	   {
	   	Grade = "A+";
	   }
	   else if (Percentage >= 70)
	   {
	   	Grade = "A";
	   }
	   else
	   {
	   	Grade = "PASS";
	   }
    std::cout<<"\n\n";
    std::cout<<"=======================================\n";
    std::cout<<"\t**STUDENT RESULT CARD**\n";
    std::cout<<"=======================================\n";
    std::cout<<"Name:\t\t"<<Name<<"\n";
    std::cout<<"RollNo:\t"<<RollNo<<"\n";
    std::cout<<"Department:\t"<<Department<<"\n";
    std::cout<<"---------------------------------------\n";
    std::cout<<"Subject\t\tMarks\n";
    std::cout<<"---------------------------------------\n";
    std::cout<<"English\t\t"<<EnglishMarks<<"\n";
    std::cout<<"Maths\t\t"<<MathMarks<<"\n";
    std::cout<<"physics\t\t"<<PhysicsMarks<<"\n";
    std::cout<<"---------------------------------------\n";
    std::cout<<"TotalMarks:\t"<<"\t300\n";
    std::cout<<"Percentage:\t"<<Percentage<<"%\n";
    std::cout<<"Grade:\t\t"<<Grade<<"\n";
    std::cout<<"---------------------------------------\n";
    std::cout<<"Congratulations"<<Name<<"!\n";
    std::cout<<"=======================================\n";
    return 0;
}
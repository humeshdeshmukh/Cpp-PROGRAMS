#include <iostream>
#include <string>
using namespace std;

class student
{
    private :
     string collage_name;
     string branch;
     int year ;
     int marks[5];
     float percentage ;
     float  average;

     public:
     void getstudent()
     {
        cout <<"Enter collage name:";
        cin >>collage_name;

        cout <<"Enter branch :";
        cin.ignore();
        getline(cin, branch);


        cout <<"enter year :";
        cin >> year;

        cout <<"Enter marks for 5 subject :"<<endl;
        for (int i =0;i<5; i++)
        {
            cout <<"enter maeks for  subjects "<<i+1<<":"<<endl;
            cin >>marks[i];
        }

        //calculate percentage based on the sum of marks and the total possible maeks
        int totalMarks=500;
        int sum=0;
        for (int i=0;i<5;i++)
        {
            sum+=marks[i];
        }
        percentage=static_cast<float>(sum)/totalMarks *100;
        average =sum/5;
     }

     void showstudent()
     {
        cout <<"Collage Name :"<<collage_name<<endl;
        cout <<"branch"<<branch<<endl;
        cout <<"year:"<<year<<endl;
        cout <<"Marks for 5 subject :"<<endl;
        for(int i=0;i<5;++i)
        {
            cout <<"student percentage :"<<percentage<<"%"<<endl;
            cout <<"student average :"<<average<<endl;
        }
     }
};
int main()
{
    student student1;

    cout <<"Enter details for student 1:"<<endl;
    student1.getstudent();

    cout <<"\n student 1 detail :"<<endl;
    student1.showstudent();

    return 0;
}
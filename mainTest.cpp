#include<iostream>
#include <string>
using namespace std;

struct Student
{
    int nim;
    float uts;
    float uas;
    float average;
};

int main() {

    const int MAX_STUDENT = 50;
    int n=1;

    Student students[MAX_STUDENT];

    students[0].nim = 456789;
    students[0].uts = 80;
    students[0].uas = 94;

   /*const int MAX_STUDENT = 50;
    int n;

    cout<<"Enter The Number of Student (Max 50) : ";
    cin>>n;

    if(n < 1 || n > MAX_STUDENT){
        cout<<"Invalid Number of Student. Please Enter Number Between 1-50"<<endl;
        return 1;
    }

     Student students[MAX_STUDENT];

    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter The Data of Student "<<i+1<<":"<<endl;
        cout<<"Enter Student NIM: ";
        cin>>students[i].nim;
        cout<<"Enter UTS Value: ";
        cin>>students[i].uts;
        cout<<"Enter UAS Value: ";
        cin>>students[i].uas;

        students[i].average = (students[i].uts + students[i].uas)/2;
    }
    
    cout<<"\n------ Student Data ------\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"NIM: "<< students[i].nim<< endl;
        cout<<"Average: "<< students[i].average<<endl;
        cout << "--------------------------\n";
    }
    return 0;*/
    students[0].average = (students[0].uts + students[0].uas)/2;

    int expectedNim  = 456789;
    float expectedAverage = 87;

    if(students[0].nim == expectedNim && students[0].average == expectedAverage)
    {
        cout<< "SUCCESSFULLY"<< endl;
    } else
    {
        cout<< "FAILED"<< endl;
    }
    
    return 0;
	

}



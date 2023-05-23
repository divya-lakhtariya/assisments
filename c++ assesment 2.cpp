/*Create a lecture management System 
Make sure each business logic is denoted with appropriate comments and
make your code interactive and represent clean and clear output on your
console screen.
Adhere to the coding principles 
Define a class to represent lecture details. Include the following members and the 
program should handle at least details of 5 lecturers. 
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions: 
a) To assign initial values 
b) To add a lecture details 
c) To display name and lecture details 
Make sure you have to use constructor concept in it 
Make sure all naming conversion properly mention in this project work 
Make sure all method name 
Use class and object concepts 
Upload all features in develop branch after completion all features
merge it with the main branch*/

#include<iostream>
#include<string>

using namespace std;

class Lecturer //class declare//

{
	private:
    	
    	int lecturer;
        string name;
        string subject;
        string course;
        float hours, min;
        int no_lectures;
    public:

	Lecturer() 
	
	{
		
		cout<<"\n----------------enter lecturer details----------";
		
		cout <<"\n Lecturer number :- ";
    	cin>>lecturer;    
    	
		cout <<"\nEnter lecturer name  :- ";
		cin>>name;
    //	getline(cin, name);
  
        cout <<"\nEnter name of course :-";
        cin>>course;
    //getline(cin, course);
        
        cout <<"\nEnter name of subject  :- ";
        cin>>subject;
    //getline(cin, subject);

        cout <<"\nEnter no of lectures :- ";
    	cin>>no_lectures;
    	
        cout <<"\nEnter hours :- ";
        cin>>hours;
    	  	    	
        cout <<"\nEnter minutes :- ";
        cin>>min;
 
	} 
	
	void lecturer_details( )
	
	{
		        cout<<" ---------------------lecturer details------------";
	        	cout<<endl<<"Lecturer No.-"<<lecturer<<endl;
                cout << "Name : " << name << endl;
                cout << "Course: " << course << endl;
                cout << "Subject: " << subject << endl;           
                cout << "No of Lectures : "<< no_lectures << endl;
                
	}   
};	

int main()

{
	// 5 Lecturers and contructor.......

	Lecturer l1, l2,l3,l4,l5; 

	l1.lecturer_details();
	l2.lecturer_details();
	l3.lecturer_details();
	l4.lecturer_details();
	l5.lecturer_details();
	
	cout<<"---------bye bye-------";
	
	return 0;
	
}

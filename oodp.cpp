// #include<iostream>
// using namespace std;
// class student{
//     public:

//     int rollno;
//     string name;
//     void display(){
//         cout<<rollno;
//         cout<<name;
//     }

// };

// int main(){
//     student s1;  
//     s1.rollno=101;
//     s1.name="Raj";
//     s1.display();
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class bankacc{
//     public:
//     float balance;
//     int accnum;
//     string accname;
//     void display(){
//         cout<<balance<<endl;
//         cout<<accnum<<endl;
//         cout<<accname<<endl;
//     }

// };
// int main(){
//     bankacc b1;
//     b1.balance = 100.91;
//     b1.accnum = 345;
//     b1.accname = "Tanmay";
//     b1.display();
    
    
//     return 0;

// }








// #include<iostream>
// using namespace std;
// class student{
//     private:
//     int roll;
//     string name;
//     public:
//     void init(){
//         roll = 101;
//         name = "Raj";
//     }
//     void display(){
//         cout<<roll<<endl;
//         cout<<name;
//     }

// };

// int main(){
//     student s1;
//     s1.init();
//     s1.display(); 
//     return 0;
// }
   







// #include<iostream>
// using namespace std;
// class student{
//     private:
//     int rollno;
//     string name;
//     void getdata();
//     public:

//     void display();
// };


// void student :: getdata(){
//     cout<<"Enter rollno and name:";
//     cin>>rollno>>name;
// }

// void student:: display(){
//     getdata();
//     cout<<"Rollno:"<<rollno<<endl;
//     cout<<"Name:"<<name;
// }


// int main(){
//     student S[100]; 
//     student s1;
//     student s2; 
//     s1.getdata();
//     s1.display();
//     s2.display();
//     return 0;
// }







// #include<iostream>
// using namespace std;
// class book{
//     private:
//     int bookid;
//     string title,author;
//     float price;

//     public:
//     void inputdetails();
//     void showdetails();

// };

// void book:: inputdetails(){
//     cout<<"Enter bookid,title,author,price";
//     cin>>bookid>>title>>author>>price;

// }

// void book:: showdetails(){
//     cout<<bookid<<endl<<title<<endl<<author<<endl<<price;
// }

// int main(){
//     book b[3];
//     for(int i=0;i<3;i++){
//         b[i].inputdetails();
//     }
//     for(int i=0;i<3;i++){
//         b[i].showdetails();
//     }
//     return 0;
// }










// #include<iostream>
// using namespace std;
// class product{
//     private:
//     int productid,stock;
//     string productname;
//     float price;

//     public:
//     void getdetails();
//     void showdetails();

// };

// void product::getdetails(){
//     cout<<"Enter productid,productname,price,stock";
//     cin>>productid>>productname>>price>>stock;
// }

// void product::showdetails(){
//     cout<<productid<<endl<<productname<<endl<<price<<endl<<stock;
// }

// int main(){
//     product p1;
//     p1.getdetails();
//     p1.showdetails();
//     return 0;
// }










// #include<iostream>
// using namespace std;
// class studentresult{
//     private:
//     string name;
//     int marks;
    
//     public:
//     void calculategrade();
//     void getdetails();
//     void showdetails();

// };

// void studentresult::getdetails(){
//     cout<<"Enter name and marks";
//     cin>>name>>marks;
// }

// void studentresult::calculategrade(){
//     if(marks>=90){
//         cout<<"A";
//     }else if(marks>=75){
//         cout<<"B";
//     }else if(marks>=60){
//         cout<<"C";
//     }else{
//         cout<<"D";
//     }
// }

// void studentresult::showdetails(){
//     cout<<name<<endl<<marks<<endl;
// }










// #include<iostream>
// using namespace std;
// class student{
//     private:
//         int rollno;
//         string name;
    
//     public:
//         student(){
//             rollno=81;
//             name="Tanny";

//         }
//         void display()
//         {
//             cout<<"RollNo: "<<rollno<<endl;
//             cout<<"Name: "<<name;
//         }
// };

// int main(){
//     student s1;
//     s1.display();
//     return 0;
// }








// #include<iostream>
// using namespace std;
// class TempSensor{
//     private:
//         float temp;

//     public:
//         TempSensor(){
//             temp = 25.00;
//         }

//     void display(){
//         cout<<"Temp: "<<temp;
//     }
// };

// int main(){
//     TempSensor t1;
//     t1.display();
//     return 0;
// }







// #include<iostream>
// using namespace std;
// class IotDevice{
//     private:
//         int batterylevel;
//         string status;
    
//     public:
//         IotDevice(){
//             batterylevel=100;
//             status="Idle";
//         }

//     void display(){
//         cout<<"Battery Level: "<<batterylevel<<endl;
//         cout<<"Status: "<<status;
//     }
// };


// int main(){
//     IotDevice i1;
//     i1.display();
//     return 0;
// }









// #include<iostream>
// using namespace std;
// class student{
//     int id;

//     public:
//         student(int x){
//             id = x;

//         }

//     void display(){
//         cout<<"ID: "<<id<<endl;
//     }
// };

// int main(){
//     student s1;
//     s1.display();
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class rectangle{
//     private:
//         int length, breadth,area;
//         int a,b;

//     public:
//         rectangle(int a,int b){
//             length = a;
//             breadth = b;
            
//         }
    
//     void area(){
//         area = a*b;
//     }

//     void display(){
//         cout<<"Area: "<<area;

//     }
// };

// int main(){
//     rectangle r1;

//     r1.display();

//     return 0;
// }






// #include<iostream>
// using namespace std;
// class bankacc{
//     private:
//         int accno, deposit;
    
//     public:
//         bankacc(int a,int b){
//             accno=a;
//             deposit=b;

//         }

//     void display(){
//         cout<<"AccNo: "<<accno<<endl;
//         cout<<"Deposit: "<<deposit<<endl;
//     }
// };

// int main(){
// bankacc b(100);
//     b(100).display();
//     return 0;
// }








// #include<iostream>
// using namespace std;
// class sample{
//     int value;

//     public:
//         sample(int v){
//             value=v;
//         }
//         //Copy constructor
//         sample(const sample & s){
//             value=s.value;
//         }
//             void show(){
//                 cout<<value<<endl;
//             }
        
// };

// int main(){
//     sample s1(10);
//     sample s2=s1;//Copy constructor called
//     s1.show();
//     s2.show();
// }







// #include<iostream>
// using namespace std;
// class student{
//     int rollno;
//     string name;

//     public:
//         student(int r,string n){
//             rollno=r;
//             name=n;
//         }

//         student(const student&s1){
//             rollno=s1.rollno;
//             name=s1.name;
//         }

//         void show(){
//             cout<<rollno<<endl;
//             cout<<name<<endl;
//         }
// };

// int main(){
//     student s2(101,"ram");
//     student s3(s2); 
//         //OR
//     // student s3=s2;

//     s3.show();
//     return 0;
// }




//DESTRUCTOR

// #include<iostream>
// using namespace std;
// class Employee{
//       Employee(){
//         cout<<"Constructor invoked"<<endl;
//       }

//       ~Employee(){
//         cout<<"Destructor invoked"<<endl;
//       }
// };

// int main(){
//     Employee e1;
//     Employee e2;
// }







// #include<iostream>
// using namespace std;
//
// class student(){
//     int id;
//     string name;
//     public:
//         student{
//             id=0;
//             name="Unknown";

//         }

//     student(int i){
//         id=i;
//         name="Not assigned";
//     }

//     student(int i,string n){
//         id=i;
//         name=n;
//     }

//     void show(){
//         cout<<id<<endl;
//         cout<<name<<endl;
//     }
// };

// int main(){
//     student s1;
//     student s2(10);
//     student s3(10,"Tany");

//     s1.show();
//     s2.show();
//     s3.show();

//     return 0;
// }




//POLYMORPHISM


// #include<iostream>
// using namespace std;
// class math{
//     public:
//         int add(int a,int b){
//             return a+b;
//         }

//         double add(double a,double b){
//             return a+b;
//         }
// };

// int main(void){
//     math m;
//     //class object declaration
//     cout<<m.add(10,20)<<endl;
//     cout<<m.add(2.5,3.5)<<endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class areacalc{
//     public:
//         int area(int side){
//             return side*side;

//         }

//         int area(int l,int b){
//             return l*b;
//         }

//         double area(double radius){
//             return 3.14*radius*radius;
//         }
// };

// int main(){
//     areacalc obj;
//     cout<<"Area of square:"<<obj.area(5)<<endl;
//     cout<<"Area of rect:"<<obj.area(3,4)<<endl;
//     cout<<"Area of circle:"<<obj.area(3.5)<<endl;

//     return 0;
// }








// #include<iostream>
// using namespace std;
// class calcsalary{
//     public:
//         int basic,bonus,overtime;

//         int salary(int basic){
//             return basic;
//         }

//         int salary(int basic,int bonus){
//             return basic+bonus;
//         }

//         int salary(int basic,int bonus,int overtime){
//             return basic+bonus+overtime;
//         }
// };

// int main(){
//     calcsalary obj;

//     cout<<"Basic:"<<obj.salary(10000)<<endl;
//     cout<<"Basic + Bonus:"<<obj.salary(10000,5000)<<endl;
//     cout<<"Basic + Bonus + Overtime:"<<obj.salary(10000,5000,2000);

//     return 0;
// }




//UNARY OPERATOR OVERLOADING

// #include<iostream>
// using namespace std;
// class operoverload{
//     private: 
//         int num;
//     public:
//         operoverload(int n){
//             num=n;
//         }
//         void operator ++(){
//             num=num+2;
//         }

//         void display(){
//             cout<<"The count is:"<<num<<endl;
//         }
    
//     };

//     int main(){
//         operoverload ov(10);
//         ov.display();
//         ++ov; //OV OPERATOR++();
//         ov.display();
//         return 0;
//     }







// #include<iostream>
// using namespace std;
// class complex{
//     private:
//         int real,imag;

//     public:
//         complex(int r=0,int i=0){
//             real=r;
//             imag=i;
//         }

//         complex operator+(complex obj){
//             complex res;
//             res.real=real+obj.real;
//             res.imag=imag+obj.imag;
//             return res;
//         }

//         void print(){
//             cout<<real<<"+i"<<imag<<endl;
//         }

// };

// int main(){
//     complex c1(10,5), c2(2,4);
//     complex c3=c1+c2;
           //OR
//     complex c3=c1.operator+(c2);
//     c3.print();

//     return 0;
// }







// class base{
//     private:
//         //member
    
//     public:
//         //member
// };

// class derived:public base{  //access specifier
//     private:
//         //member
    
//     public:
//         //member
// };







// class A{
//     public:
//         void show();
// };

// class B{
//     public:
//         void show();
// };

// int main(){
//     A obj1,obj2;
//     B obj3,obj4;
//     return 0;
// }






//INHERITANCE ACCESS SPECIFIERS


// class base{
//     public:
//         int publicmember;
    
//     protected:
//         int protectedmember;

//     private:
//         int privatemember;

// };

// class derivedpublic: public base{
//     //publicmember becomes public member
//     // protectedmember becomes protected member
//     // privatemember is not accessible
// };

// class derivedprotected: protected base{
//     //publicmember become protected member
//     //protectedmember become protected member
//     //privatemember is not accessible
// };

// class derivedprivate: private base{
//     //publicmember becomes private member
//     //protectedmember become private member
//     //privatemember is not accessible
// };





//SINGLE INHERITANCE EXAMPLE


// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//         void eat(){
//             cout<<"Animal is eating"<<endl;
//         }

// };

// class Dog: public Animal{
//     public:
//         void bark(){
//             cout<<"Dog is barking"<<endl;
//         }
// };

// int main(){
//     Dog myDog;
//     myDog.eat();
//     myDog.bark();
//     return 0;
// }












// #include<iostream>
// using namespace std;
// class base{
//     public:
//         int a;
    
//     protected:
//         int b;

//     private:
//         int c;

//     public:
//         void setvalues(){
//             a=10;
//             b=20;
//             c=30;
//         }

//         void displaybase(){
//             cout<<"a="<<a<<endl;
//             cout<<"b="<<b<<endl;
//         }
// };

// class derived: public base{
//     public:
//         void displayderived()
// }








// #include<iostream>
// using namespace std;
// class base
// {
//     private:
//         int a;
//     public:
//         int b;
//     protected:
//         int c;
//     public:
//         void init(){
//             a=10;
//         }
// };

// class derived:public base{
//     private:
//         int d;
//     public:
//         void init_D(){
//             b=20;
//             c=30;
//             d=40;
//         }

//     void display(){
//         cout<<b<<c<<d;
//     }
// };

// int main(){
//     derived obj;
//     obj.init();
//     obj.init_D();
//     obj.display();
//     return 0;
// }







#include<iostream>
using namespace std;
class student{
    
}
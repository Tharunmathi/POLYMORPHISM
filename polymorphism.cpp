#include<iostream>
using namespace std;
/*
   "COMPILE TIME POLYMORPHISM" -->FUNCTION OVERLOADING
*/
/*int add(int a,int b){
    cout<<"FUNCTION 1 IS CALLED"<<endl;
    return a+b;
}
double add(double a, double b){
     cout<<"FUNCTION 2 IS CALLED"<<endl;
    return a+b;
}
int add(int a,int b,int c){
     cout<<"FUNCTION 3 IS CALLED"<<endl;
    return a+b+c;
}
double add(int a,double b){
     cout<<"FUNCTION 4 IS CALLED"<<endl;
    return a+b;
}
double add(double a,int b){
     cout<<"FUNCTION 5 IS CALLED"<<endl;
    return a+b;
}
int main(){
    cout<<"The addition is:"<<add(3,5)<<endl;
    cout<<"The addition is:"<<add(3.7,5.34)<<endl;
    cout<<"The addition is:"<<add(3,5,8)<<endl;
    cout<<"The addition is:"<<add(3,5.8)<<endl;
    cout<<"The addition is:"<<add(3.3,5)<<endl;
    return 0;
}*/
// Base class
/*class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n" ;
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n" ;
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n" ;
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}*/
/*class Cal {    
    public:    
static int add(int a,int b){      
        return a + b;      
    }      
static int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) {    
    Cal C;                                                    //     class object declaration.   
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12, 20, 23);     
   return 0;    
}   */
/*class Geeks
{
	public:
	
	// function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}
	
	// function with same name but 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}
	
	// function with same name and 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y << endl;
	}
};

int main() {
	
	Geeks obj1;
	
	// Which function is called will depend on the parameters passed
	// The first 'func' is called
	obj1.func(7);
	
	// The second 'func' is called
	obj1.func(9.132);
	
	// The third 'func' is called
	obj1.func(85,64);
	return 0;
}*/
/*void print(int i) {
cout << " Here is int " << i << endl;
}
void print(double f) {
cout << " Here is float " << f << endl;
}
void print(char const *c) {
cout << " Here is char* " << c << endl;
}

int main() {
print(10);
print(10.10);
print("ten");
return 0;
}*/
/*
   "RUN TIME POLYMORPHISM" -->FUNCTION OVERRIDING
*/
/*class Animal{
    public:
    void makesound(){
        cout<<"Animals makes sound...."<<endl;
    }
};
class Dog: public Animal{
    public:
    void makesound(){
        cout<<"Dogs barking..."<<endl;
    }
};
class Cat:public Animal{
    public:
    void makesound(){
        cout<<"cats meow.."<<endl;
    }

};
int main(){
    Animal a1;
    a1.makesound();
    Dog d1;
    d1.makesound();
    Cat c1;
    c1.makesound();
    return 0;
}*/
/*class Animal {  
    public:  
void eat(){    
cout<<"Eating...";    
    }      
};   
class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Eating bread...";    
    }    
};  
int main(void) {  
   Dog d = Dog();    
   d.eat();  
   return 0;  
}  */
/*class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}*/
/*class Base{
    public:
    void display(){
        cout<<"the BASE class is displayed"<<endl;
    }
};
class Derived:public Base{
    public:
    void display(){
        cout<<"The DERIVED class is displayed"<<endl;
    }

};
int main(){
    Derived d;
    Base b;
    d.display();
    b.display();
    return 0;
}*/
class Overload{
    public:
    Overload(){
        cout<<"constructor without perameter"<<endl;
    }
    Overload(int a){
        cout<<"constructor without perameter"<<endl;
        cout<<a<<endl;
        }
    void add(){
        int a,b;
        cin>>a;
        cin>>b;
        cout<<a+b;
    }
    void add(int p,int q){
        cout<<p+q<<endl;
    }
};
int main(){
    Overload obj,obj1(10);
    obj.add();
    obj.add(10,20);
    return 0;
}

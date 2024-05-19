    #include <iostream>  
      
    using namespace std;  
      
    class A  
    { 
    int x;
    public:
	A(int p)
	{
	  x=p ;
	}      
    
        friend class B;           // friend class.  
    };  
    class B  
    {  
      public:  
        void display(A &a)  
        {  
          
            cout<<"value of x is : "<<a.x;  
        }  
    };  
    int main()  
    {  
        A a(5);  
        B b;  
        b.display(a);  
        return 0;  
    }  
    /*
    A friend class is a class that can access the private and protected members of a 
	class in which it is declared as friend. */

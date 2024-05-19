#include<iostream>
       #include<conio.h>

       class ClassA
       {
              public:
              int a;
       };

       class ClassB : public ClassA
       {
              public:
              int b;
       };
       class ClassC : public ClassA
       {
              public:
              int c;
       };

       class ClassD : public ClassB, public ClassC
       {
              public:
              int d;
       };

        main()
       {

		  ClassD obj;

		  //obj.a = 10;        //Statement 1, Error occur
		  //obj.a = 100;      //Statement 2, Error occur

		  obj.b = 20;
		  obj.c = 30;
		  obj.d = 40;

		  //cout<< "\n A : "<< obj.a;
		  cout<< "\n B : "<< obj.b;
		  cout<< "\n C : "<< obj.c;
		  cout<< "\n D : "<< obj.d;

	   }

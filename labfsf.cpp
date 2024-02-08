// // #include<bits/stdc++.h>
// // using namespace std;
// // class complex1 
// // {
// //     int real,imag;
// //     public:
// //     void set(int num1,int num2)
// //    {
// //        real=num1;
// //        imag=num2;
// //    }
// // void print()
// // {
// //     cout<<real<<"  "<<"i"<<imag;
// // }
// //     complex1 operator+(complex1 c)
// //     {
// //         complex1 temp;
// //         temp.real=real+c.real;
// //         temp.imag=imag+c.imag;
// //         return temp;

// //     }
// // };
// // int main()
// // {
// //     complex1 c1,c2,c3;
// //     c1.set(3,4);
// //     c1.print();
// //     cout<<endl;
// //     c2.set(5,6);
// //     c2.print();
// //     cout<<endl;
// //     c3=c2+c1;
// //     c3.print();

// // return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// return 0;
// }
 #include<bits/stdc++.h>
 #include<fstream>
 using namespace std;
 int main()
 {
    // cout<<"enter string "<<endl;
 
    string st;
  st="my nem is good";
    fstream out("sample60.txt");
    
    out<<st;
 
    out.close();
 
 
    
 
 
    string ans;
   ifstream in ("sample60.txt");
   in>>ans;
   getline(in,ans);
   cout<<ans;
 
 
    
 
 }
 
 
 



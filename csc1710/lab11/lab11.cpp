/*
Name: Michael Henson
Class:Csc1710
Date:04/29/2020
Path:/home/students/mhenson/csc1710/P5/lab11.cpp

Program Desc: P5 Struct lab
*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;

struct stuInfoType {
   int stuId;
   string fname;
   string lname;
   int score;
   char grade;
   double average;
   int biggest;
};
void load(ifstream &in, stuInfoType stu[], int &cnt);
void readline(ifstream &in, stuInfoType &s);
void dump(ofstream &out, stuInfoType stu[], int &cnt);
void dumpline(ofstream &out, stuInfoType &s);
double classAvg (stuInfoType stu[], int cnt);
int getHighest( stuInfoType stu[], int cnt);
/*void sort(stuInfoType stu[], int cnt);
void organize(stuInfoType stu[], int cnt);
*/
int main()
{

   ifstream in;
   ofstream out;

   string infileName;
   string outfileName;

   stuInfoType AllStu[20];
      int n; 
      double average = classAvg(AllStu,n);
      int biggest = getHighest(AllStu, n);
      cout<< "Enter the input file name: ";
      cin>>infileName;
      in.open(infileName);
         if(in.fail()) {
            cerr<<"Input file problems"<<endl;
      exit(1);
      }

   cout<< "Enter the output file name: ";
   cin>>outfileName;
   out.open(outfileName);
      if(out.fail()) {
         cerr<<"Output file problems"<<endl;
      exit(1);
      }
   out<< "ID"<<setw(14)<<"First"<< setw(11)<<"Last"<<setw(10)<<"Score"<<  setw(10)<<"Grade"<<endl;
   load(in, AllStu, n);
   //sort(AllStu, n);
   //organize(AllStu, n);
   dump(out, AllStu, n);
   average=classAvg(AllStu, n);
   out<<"\n"<<endl;
   out<< "Class Average: "<<average<<endl;
   cout<<"\n"<<endl;
   biggest=getHighest(AllStu, n);
   out<<"Highest Test Score: "<<biggest<<endl;
   cout<<"\n"<<endl;
   out<<"Students with Highest Test Score: "<<endl;
   in.close();
   out.close();
   return 0;
   }
   void load(ifstream &in, stuInfoType stu[], int &cnt)
   {
      in >> cnt;
         for(int i = 0; i<cnt; i++){
         readline(in,stu[i]);
   }
   }

   void readline(ifstream &in, stuInfoType &s)
   {
      in >> s.stuId;
      in >> s.fname;
      in >> s.lname;
      in >> s.score;
   }

   void dump(ofstream &out, stuInfoType stu[], int &cnt)
   {
      cout << cnt;
      for( int i = 0; i<cnt;i++){
         dumpline(out,stu[i]);
      }   
   }  
   void dumpline(ofstream &out, stuInfoType &s)
   {
      if (s.score >= 90)
         s.grade = 'A';
      else if
         (s.score >= 80)
            s.grade = 'B';
         else if
            (s.score >= 70)
               s.grade = 'C';
            else if
               (s.score >= 60)
                  s.grade = 'D';
            else if 
               (s.score < 60)
                  s.grade = 'F';   

      
   out << s.stuId<<setw(10)<<s.fname<<setw(10)<<s.lname<<setw(8)<<s.score<<" "<<setw(8)<<s.grade<<endl;
}



  
   int getHighest(stuInfoType stu[], int cnt)
{

    int biggest= stu[0].score;

    for(int j = 1; j < cnt; j++)
        if (stu[j].score >biggest)
   biggest= stu[j].score;
   return biggest;
} 
   double classAvg (stuInfoType stu[], int cnt)
   {
      double sum=0;
      double average;
         for(int i=0; i<cnt;i++){
            sum+= stu[i].score;
   }
      average=sum/cnt;
      return average;
}
 
 /*  void organize(stuInfoType stu[], int cnt)
   {
         for(int j=0;j<cnt-1;j++){
            if (stu[j].fname>stu[j+1].fname)
                  exchange (stu[j].fname, stu[j+1].fname);
         }
    }
  void sort(stuInfoType stu[], int cnt)
   {
     for(int i=0;i<cnt-1;i++)
         organize(stu[i].fname, cnt);
   }

*/
  
               

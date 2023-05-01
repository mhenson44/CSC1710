/*
Name: Michael Henson
Class: Csc1710
Date: 04/29/2020
Path: /home/students/mhenson/csc1710/P4/redDotFlag.cpp

Program Desc: Creating a Flag PPM image
*/
#include<iostream>
#include<cmath>

using namespace std;

/* function prototypes */
void make_ppm_image(int width, int height, int country_code);
void make_flag(int width, int height, int country_code);
void make_header(string type, int width,int height, int maxColorCode);
void make_row(int y, int width,int height, int country_code);
void calc_pixel_color(int x, int y, int width, int height, int country_code);
void make_pixel(unsigned char r, unsigned char g, unsigned char b);
void make_french_pixel(int x, int width);
void make_lithuania_pixel(int y, int height);
void make_germany_pixel(int y, int height);
int calc_fheight(int width, int country_code);

int main()
{
   int width,height;
   int country_code;
   //Reads image width and country code
   cin >> width >> country_code;

  height= calc_fheight(width, country_code);

 switch(country_code) {
      case 0:  cerr << "Making the Flag of France " ;
               break;
      case 1:  cerr << "Making the Flag of Germany " ;
               break;
      case 2:  cerr << "Making the Flag of Lithuania " ;
               break;
      default: cerr << "Bad country code, try again";
               exit(1);
   }
   cout << "with a width of " << width << endl;

   /* Write the image data to stdout */
   
   make_ppm_image(width, height, country_code); 

   return(0);
}
   int calc_fheight(int width, int country_code)
   {
      int number;
      int height;
      if (country_code==0){
      number = width/3;
      height = number*2;
      }else{
      number = width/3;
      height = number * 5;
    }
      return height;
}

void make_ppm_image(int width, int height, int country_code)
{
   make_header("P4",width,height,255);
   make_flag(width,height,country_code);
}


void make_header(string type, int width,int height, int maxColorCode)
{
   //Output the header lines for a raw PPM image
   cout << type << endl;
   cout << "# My Image creation" << endl;
   cout << width << " " << height << endl;
   cout << maxColorCode << endl;
}



void make_flag(int width, int height, int country_code)
{
   int y;
   for(y=height-1; y>=0; y--)
      make_row(y, width,height, country_code);
}


void make_row(int y, int width,int height, int country_code)
{
   int x;
   for(x=0; x<=width-1; x++) 
      calc_pixel_color(x,y,width,height,country_code);

}


void calc_pixel_color(int x, int y, int width, int height, int country_code)
{
   if(x<width/3)
      make_pixel(0, 0, 255);
      else if(x<2*width/3)
         make_pixel(255,255,255);
      else
         make_pixel(255,0,0);    
  }


void make_pixel(unsigned char r, unsigned char g, unsigned char b)
{
   cout << r << g << b;
}



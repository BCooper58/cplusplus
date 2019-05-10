// ifelse_2d.cpp
//compile g++ ifelse_2d.cpp

#include <iostream>
#include <cmath>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;
		string word = "word";
		int val = 0;
		int m[8][8] = {
			{0,1,2,3,4,5,0,0} ,
			{1,0,0,0,0,0,0,0} ,
			{2,0,0,0,0,0,0,0} ,
			{3,0,0,0,0,0,0,0} ,
			{4,0,0,0,0,0,0,0} ,
			{5,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0}
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
				switch ( val ){
					case 1:
					word = "uwu";
					break;
					case 2:
					word = "0_0";
					break;
					case 3:
					word = "^-^";
					break;
					default:
					word = "0";
					break;
				}
			  cout<<word;
			}
			cout<<"\n";
		}
	return 0;
}

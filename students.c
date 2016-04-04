/*
 * students.c
 * 
 * Copyright 2016 Ismail <ismail@ismail-Lenovo-IdeaPad-Z500>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * Get the grades of 100 students from the user. If grade ≥ 60, student passes the course. If grade < 60, student fails the course. 
 * Find the number of students who pass the course, the number of students who fails the course, the average grade of the class. 
 * 
 */



#include <stdio.h>

int main()
{
	
	int grade[99];
	int pass=0;
	int fail=0;
	int sum=0;
	float average;
	int i=0;
	
	while(i<=99)
	{
		
		if(0<grade[i]<60)
		{
			fail=fail+1;
		}
		else if(60<=grade[i]<100)
		{
			pass=pass+1;
		}
		sum=sum+grade[i];
		i=i+1;
		
	}
	average=sum/100;
	
	printf("Passes: %d\n",pass);
	printf("Fails: %d}n",fail);
	printf("Average: %f\n",average);
	
	
	return 0;
		

/*
 * EvenOdd.c
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
 * Get a number from the user. If the number is odd, multiply it with 2 and print the result. If the number is even, 
 * divide it by 2 and print the result. Ask user whether he wants to continue getting number or not. 
 * If the user wants to continue he enters -1.
 */


#include <stdio.h>

int main(int argc, char **argv)
{

int number;
int mod, con;
float result;

do
{
	printf("Enter the number:\n");
	scanf("%d",&number);
	mod=number%2;
	switch(mod)
	{
		case 0 : result=number*2; printf("The result is: %f\n",result); break;
		case 1 : result=number/2; printf("The result is: %f\n",result); break;
		default: printf("Fatal Error!"); 
	}
	
	printf("Do you want to continue?\n");
	scanf("%d",&con);
}
	while(con==-1);
	
	return 0;
}


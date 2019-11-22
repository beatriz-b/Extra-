// 10.18 phone number list 
// This program asks the user to enter a name or partial name 
// then displays the matching entries in the array 
//https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/ strings/arrays
//https://www.dreamincode.net/forums/topic/318529-phone-number-list-issues/
//http://www.cplusplus.com/forum/beginner/99081/
//https://www.geeksforgeeks.org/strstr-in-ccpp/ used more

#include "pch.h"
#include <iostream>
#include <string> 
#include <string.h>
#include <stdio.h> 

using namespace std;

// 11- number of strings 100- max string size 
// List the contact list 
char phoneBook [11][100] = {"Alejandra Cruz, 555-1223", "Joe Looney, 555-0097",
				"Geri Palmer, 555-8787", "Li Chen, 555-1212", "Holly Gaddis, 555-8878",
				"Sam Wiggis, 55-0998", "Bob Kain, 555-8712","Tim Haynes, 555-7676",
				"Warren Gaddis, 555-9037", "Jean James, 555-4939", "Ron Palmer, 555-2783"}
				
int main (){

int i = 0;
length = 100; 
char* p;

cout << "To search for your contact's number please enter a name or partial name of the person.\n";

	cin.getline(search, length);

	p = strstr(phoneBook, search) 
	
// i know I have to create a while loop that searches through the names but i don't know how to 
// set its parameters 

// I also can't find a funciton that returns the whole string "find.()" and function like it only 
//return the index position the input matches

} 

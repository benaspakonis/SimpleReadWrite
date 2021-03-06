// LabsWeek18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include <ctype.h>
#include "string.h"
FILE *fptr;

typedef struct
{
	char *UserName;
	char *firstName;
	char *lastName;
	char *displayName;
	char *jobTitle;
	char *department;
	char *officeNumber;
	char *officePhone;
	char *mobilePhone;
	char *fax;
	char *address;
	char *city;
	char *state;
	char *zip;
	char *country;
} contact;

void printContact(contact *theContact);
contact *data[10];

void main()
{
	fptr = fopen("C:\\cProgramming\\Week18\\contacts.txt","r");
	char line[200];
	contact *data[10];
	char *token;
	char delim[2] = ",";
	int n = 0, i = 0;

	if (fptr == NULL)
	{
		printf("Error opening file ! \n");
	}

	fgets(line, 200, fptr);

	while (!feof(fptr))
	{
		fgets(line, 200, fptr);

		data[i] = (contact*)malloc(sizeof(contact));

		if ((token = strtok(line, delim)) != NULL)
		{
			data[i]->UserName = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->UserName, token);
		}
		if ((token = strtok(NULL,delim)) != NULL)
		{
			data[i]->firstName = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->firstName, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->lastName = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->lastName, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->displayName = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->displayName, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->jobTitle = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->jobTitle, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->department = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->department, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->officeNumber = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->officeNumber, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->officePhone = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->officePhone, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->mobilePhone = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->mobilePhone, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->fax = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->fax, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->address = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->address, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->city = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->city, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->state = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->state, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->zip = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->zip, token);
		}
		if ((token = strtok(NULL, delim)) != NULL)
		{
			data[i]->country = (char*)malloc(sizeof(char)*strlen(token));
			strcpy(data[i]->country, token);
		}
		printContact(data[i]);
		i++;
	}
}

void printContact(contact *theContact)
{
	
		printf("UserName: %s\nFirst Name: %s\nLast Name: %s\nDisplay: %s\nJob Title: %s\nDepartment: %s\nOffice Number: %s\nOffice Phone: %s\nMobile Number: %s\nFax: %s\nAddress: %s\nCity: %s\nState: %s\nZip: %s\nCountry: %s\n", theContact->UserName, theContact->firstName, theContact->lastName, theContact->displayName, theContact->jobTitle, theContact->department, theContact->officeNumber, theContact->officePhone, theContact->mobilePhone, theContact->fax, theContact->address, theContact->city, theContact->state, theContact->zip, theContact->country);
}
#define _CRT_SECURE_NO_WARNINGS //Disables the security warning for strcat
#include <iostream>
#include <conio.h>
#include <cstdlib> //Standard cpp library
#include <time.h> //Needed for random generation
using namespace std;

//Declare the function up here so that we can use it
// note that it does not return a value, rather it
// edits the character passed to it by reference
void NameGenFirstName(char *Name);
void NameGenLastName(char *Name);
//Little utility function to make getting char input easier...
char get_Char(void);

char syllables[][4]{ // Japanese syllables 2 - 105
	"", "a", "i", "u", "e", "o",
	"ka", "ki", "ku", "ke", "ko",
	"sa", "shi", "su", "se", "so",
	"ta", "chi", "tsu", "te", "to",
	"na", "ni", "nu", "ne", "no",
	"ha", "hi", "fu", "he", "ho",
	"ma", "mi", "mu", "me", "mo",
	"ra", "ri", "ru", "re", "ro",
	"ga", "gi", "gu", "ge", "go",
	"za", "ji", "zu", "ze", "zo",
	"da", "xji", "du", "de", "do",
	"ba", "bi", "bu", "be", "bo",
	"pa", "pi", "pu", "pe", "po",
	"ya", "yu", "yo", "wa", "wo",
	"kya", "kyu","kyo", "sha", "shu","sho",
	"cha", "chu","cho", "nya", "nyu","nyo",
	"hya", "hyu","hyo", "mya", "myu","myo",
	"rya", "ryu","ryo", "gya", "gyu","gyo",
	"ja", "ju","jo", "bya", "byu","byo",
	"pya", "pyu", "pyo", "n"
};

int lengthOfFirstName = 2;
int lengthOfLastName = 2;

int main()
{
	char Name1[30]; //Used to hold our character's name
	char Name2[30];
	char cIn; //Used to get user answers to prompts.

	srand((long)time(NULL)); //Seed the randum number generator...
	do
	{
		printf("Choose a length for the First Name (2-5)\n");
		cin >> lengthOfFirstName;
		printf("Choose a length for the Last Name (2-5)\n");
		cin >> lengthOfLastName;
		NameGenFirstName(Name1);
		NameGenLastName(Name2);
		printf("\nFirst Name: %s", Name1);
		printf("\nLast Name: %s\n\n", Name2);
		puts("Would you like to generate another (Y,N): ");
		cIn = get_Char();
	} while (cIn != 'n' && cIn != 'N');
}

//Utility function for input
//The return type is void because we use a pointer to the array holding
// the characters of the name.
char get_Char(void)
{
	char cIn;
	while ((cIn = getchar()) < 27); //Ignore anything less then ESC
	return cIn;
}

void NameGenFirstName(char* Name)
{

	int iRandom = rand() % 6;

	if (lengthOfFirstName <= 2)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
	else if (lengthOfFirstName == 3)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		strcat(Name, syllables[rand() % 105 + 1]);
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
	else if (lengthOfFirstName == 4)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		strcat(Name, syllables[rand() % 105 + 1]);
		strcat(Name, syllables[rand() % 105 + 1]);
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
	else if (lengthOfFirstName >= 5)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		strcat(Name, syllables[rand() % 105 + 1]);
		strcat(Name, syllables[rand() % 105 + 1]);
		strcat(Name, syllables[rand() % 105 + 1]);
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
}
void NameGenLastName(char* Name)
{

	int iRandom = rand() % 6;

	if (lengthOfLastName <= 2)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
	else if (lengthOfLastName == 3)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		strcat(Name, syllables[rand() % 105 + 1]);
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
	else if (lengthOfLastName == 4)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 + 1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		strcat(Name, syllables[rand() % 105 + 1]);
		strcat(Name, syllables[rand() % 105 + 1]);
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
	else if (lengthOfLastName >= 5)
	{
		Name[0] = 0; //Initialize the string to "" (zero length string)
		strcat(Name, syllables[rand() % 105 +1]); //add the first syllable
		strcat(Name, syllables[rand() % 105 + 1]); //add the second syllable
		strcat(Name, syllables[rand() % 105 + 1]);
		strcat(Name, syllables[rand() % 105 + 1]);
		strcat(Name, syllables[rand() % 105 + 1]);
		Name[0] = toupper(Name[0]); //Make the first letter capital...
		return;
	}
}
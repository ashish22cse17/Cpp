//Example: Check Vowel or a Consonant Manually
// we wiil use isalpha() here
#include <iostream>
 using namespace std;
 int main() { 
char c; 
bool isLowercaseVowel, isUppercaseVowel; 
cout << "Enter an alphabet: ";
 cin >> c;
 // evaluates to 1 (true) if c is a lowercase vowel 
 isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); // evaluates to 1 (true) if c is an uppercase vowel 
 isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); // show error message if c is not an alphabet 
if (!isalpha(c))       //here isalpha() is function which checks that if entered value is number other than char or alphabet
printf("Error! Non-alphabetic character.");
else if (isLowercaseVowel || isUppercaseVowel)
cout << c << " is a vowel.";
else
cout << c << " is a consonant.";
cout<<endl<<isLowercaseVowel; //checking wether the it returns 0 or 1
cout<<endl<<isUppercaseVowel;
return 0; 
}
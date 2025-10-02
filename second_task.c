/* Task description:
First part: Stammering (or stuttering) is a speech disorder when syllables (usually the first one in the words) are unintentionally repeated. 
Look at the following ahartihifihicihiahal stahammehereher cohodehe (artificial stammerer code)
for this you are not required to use your own functions

Second part:Write a function to distinguish vowels from other letters (the function receives a character, and returns whether it is a vovel or not). 
Modify the program above to use this function in main().
For now we do not use the function many times, but we could! Please note that the program is much more readable now!


Third part: How to make it work for words starting with a capital? Like, for the word „Apart” „Ahapahart” should be printed. 
To accomplish this the program must be able to identify uppercase vowels, too. The original character should be printed before h, and the lowercase counterpart after it. 
You can use your existing vowel() function for deciding but always pass the lowercase letter to it.
Hint:
There are character handling library functions in #include <ctype.h>. One of them is tolower(). The tolower(c) expression is the lowercase counterpart of c if it is an uppercase letter, 
for any other character it returns the original character.

*/


#include <stdio.h>
#include <ctype.h>

int vowel(char a){
    a = tolower(a);
    if(a == 'a'||a=='e'||a=='i'||a=='o'||a=='u'){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    char c;
    while (scanf("%c", &c) == 1) {
        if (vowel(c)==1)
            printf("%ch%c", c, c);
        else
            printf("%c", c);
    }

    return 0;
}

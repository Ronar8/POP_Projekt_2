# POP_Projekt_2

Repository for the second university project regarding basics of programming. 
Console application for decrypting simply encrypted messages.

It is a decryptor with built-in intensity histogram (intensity of letters). 

Algorithm of the program:
1. User provides a file with coded message
2. Intensity histogram is shown to the user
3. Through subsitution, all letters in message are shifted by a 'x' amount to "right" (increasing in ASCII system)
4. If decrypted correctly, result is saved to a separate file. If not, user is asked for the new shift value of letters (default is 1).
5. Repeat until correct.

This program was made on my early days with programming so not optimized, badly written code is to be expected.

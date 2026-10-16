// Andy Feng, CSCI260 HW7 Fall2024
// Drew University
#include <stdio.h>

// Recall, in C, before calling a function, you need to first define it.
// [Unlike in Java, order matters.]
// An alternative is to first define all the functions on top (MUST have the ; in the definition.)
// and then implement the actual function anywhere you like. (See line 105 and beyond!)
void Caesar(FILE* filein, FILE* fileout, int key);

int main()
{
    char mode;
    int key;
    FILE* filein;
    FILE* fileout;

    // keeping reading in mode until either an 'E' or a 'D' is read
    while (1)
    {
        printf("Please select mode [E/D]: ");
        scanf("\n%c", &mode);

        // if read 'E'
        if (mode == 'E')
        {
            // open input file and check if success
            filein = fopen("../plain_in.txt", "r");
            if (filein == NULL)
            {
                printf("\tError: Cannot locate input file!\n");
                // returning a 1 terminates the program and indicate an error
                return 1;
            }
            printf("\tInput file opened successfully!\n");

            // same with the output file
            fileout = fopen("../cipher_out.txt", "w");
            if (fileout == NULL)
            {
                printf("\tError: Cannot locate output file!\n");
                return 1;
            }
            printf("\tOutput file opened successfully!\n");

            // jump out of the while loop
            break;
        }

        // if read 'D'
        else if (mode == 'D')
        {
            // same drill as 'E' mode
            filein = fopen("../cipher_in.txt", "r");
            if (filein == NULL)
            {
                printf("\tError: Cannot locate input file!\n");
                return 1;
            }
            printf("\tInput file opened successfully!\n");

            fileout = fopen("../plain_out.txt", "w");
            if (fileout == NULL)
            {
                printf("\tError: Cannot locate output file!\n");
                return 1;
            }
            printf("\tOutput file opened successfully!\n");

            break;
        }
        else
            printf("Error: Wrong mode entered!\n");
    }


    // read in the key [assume indeed a integer value]
    printf("\nPlease enter the key [any integer value]: ");
    scanf("%d", &key);

    // modify the key, so it is a number between -25 and 25 (inclusive)
    key = key % 26;
    // if 'E' mode, then key is added to the plaintext char
    // otherwise, key is subtracted from the ciphertext char
    // thus, when decrypting, we apply (-1)*key
    if (mode == 'D')
        key = -key;


    // calling the shifting function with the corresponding files and key
    Caesar(filein, fileout, key);

    if (mode == 'E')
        printf("Encryption SUCCEED!\n");
    else
        printf("Decryption SUCCEED!\n");


    // don't forget to close the files after done reading/writing
    fclose(filein);
    fclose(fileout);

    return 0;
}

// this is the actual shifting function
void Caesar(FILE* filein, FILE* fileout, int key)
{
    // the current character
    char ch;
    // keep reading from input file until we hit end of file (EOF)
    while (fscanf(filein, "%c", &ch) != EOF)
    {
        // if current char is a lower-case letter
        if (('a' <= ch) && (ch <= 'z'))
        {
            // first add key to the ASCII of ch
            // and put it into a temporary int
            // this is because a char only has 7-bit range in 2's complement
            int temp  = ch + key;

            // if the temp exceeds range of lower-case letters
            // fix it by wrapping around
            if (temp < 'a')
                ch = (char) (temp + 26);
            else if (temp > 'z')
                ch = (char) (temp - 26);
                // if not exceeding, then casting temp to a character
            else
                ch = (char) temp;
        }
            // if current char is an upper-case letter
        else if (('A' <= ch) && (ch <= 'Z'))
        {
            // same drill as lower-case
            int temp = ch + key;

            if (temp < 'A')
                ch = (char) (temp + 26);
            else if (temp > 'Z')
                ch = (char) (temp - 26);
            else
                ch = (char) temp;
        }
        else {
            // if any other character, do nothing
        }

        // write current shifted char to output file
        fprintf(fileout, "%c", ch);
    }

    printf("\nWrite to output file COMPLETE!\n");
}
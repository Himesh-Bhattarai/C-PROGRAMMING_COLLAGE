#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    printf("Enter the string:\n"); // 1️⃣ Prompt user

    gets(str); // 2️⃣ Take user input (unsafe but works in demo)

    // Write into the file
    fp = fopen("file.txt", "w"); // 3️⃣ Open file in write mode
    fputs(str, fp);              // 4️⃣ Write input string to file
    fclose(fp);                  // 5️⃣ Close file after writing

    // Read from the file
    fp = fopen("file.txt", "r"); // 6️⃣ Open file in read mode
    fgets(str, 100, fp);         // 7️⃣ Read string from file
    fclose(fp);                  // 8️⃣ Close file after reading

    fputs("From file.txt:\n", stdout); // 9️⃣ Output label to console
    fputs(str, stdout);                // 🔟 Output read content

    return 0;
}

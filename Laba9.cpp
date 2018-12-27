/*Ввести два рядки, вилучити з першого рядка всі слова, які зустрічаються у другому рядку.*/
#include <iostream>
#include <string> 
#include <iomanip>
#include <cstring> 
#include <stdio.h>
using namespace std;

void input_str(char * str) {
   cin.getline(str, 1000);
}

void  devision(char * str, char * p, char sent[1000][1000], int & k) {
   k = 0;
   p = strtok(str, ", ");
   while (p != NULL) {
      strcpy(sent[k], p);
      p = strtok(NULL, ", ");
      k++;
   }
}

void delete_str(char str1_a[1000][1000], char str2_b[1000][1000], int count1, int count2, int &x) {
   for (int i = 0; i < count1; i++) {
      for (int j = 0; j < count2; j++) {

         if (strcmp(str2_b[j], str1_a[i]) == 0) {
            * str1_a[i] = * "";
            x++;
         }
      }
   }
   for (int i = 0; i < (count1 - x + 2); i++) {
      cout << str1_a[i] << " ";
   }
}

int main() {
   char str1[1000];
   char str2[1000];
   input_str(str1);
   input_str(str2);
   int count1 = 0;
   int count2 = 0;
   char p[] = "a";
   char str1_a[1000][1000];
   char str2_b[1000][1000];
   devision(str1, p, str1_a, count1);
   devision(str2, p, str2_b, count2);
   int x = 0;
   delete_str(str1_a, str2_b, count1, count2, x);
   cout << endl;
   system("pause");
}

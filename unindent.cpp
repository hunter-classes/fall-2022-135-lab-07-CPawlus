#include <iostream>

// Function
std::string removeLeadingSpaces(std::string line) 
{
   std::string text = line;
   for(int i = 0; i < line.length(); i++) 
   {
      if(!isspace(line[i])) 
      {
         text = "";
         text += line.substr(i, line.length()-i);
         break;
      }
   }
   return text;
}

int main() 
{
   std::string s;
   while(getline(std::cin, s)) 
   {
      std::cout << removeLeadingSpaces(s) << "\n";
   }
   return 0;
}
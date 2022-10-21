#include <iostream>

// Functions
int countChar(std::string line, char c) 
{
   int times = 0;
   for(int i = 0; i < line.length(); i++)
   {
      if(line[i] == c) 
      {
         times++;
      }
   }
   return times;
}

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
   int count = 0;
   bool none = true;
   int start = 0;
   int occur = 0;
   while(getline(std::cin, s)) 
   {     
      for(int i = 0; i < s.length(); i++) 
      {
         if(s[i] == '{') 
         {
            count+=1;
            std::cout << removeLeadingSpaces(s) << "\n";
            for(int a = 0; a < count; a++)  
            {
               std::cout << "    ";
            }
            none = false;
            break;
         }
         else if(s[i] == '}') 
         {
            count-=2;
            for(int a = 0; a < count; a++)  
            {
               std::cout << "    ";
            }
            std::cout << removeLeadingSpaces(s) << "\n";
            none = false;
            break;
         }

      }
      if(none) 
      {
         std::cout << removeLeadingSpaces(s) << "\n";
         for(int a = 0; a < count; a++)  
         {
            std::cout << "    ";
         }
      }
      none = true;
   }
   return 0;
}
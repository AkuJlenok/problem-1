/* Kirill Begaliev st129977@student.spbu.ru
function for solving reversed Polish notation
*/

#include <iostream>
#include <string>
#include <cmath>

float Polski()
{
    char symbol = ' ';
    int digit = 0;
    int power = 0;
    int stack_size = 0;
    float number = 0;
    float* stack = new float [1];
    stack[0] = 0;
    
    std::string line = "";
    getline(std::cin,line);
    line = line + ' '; //adds space to give answer if in string only 1 number
    
    for (int i = 0; i < line.length(); ++i)
    {
        symbol = line[i];

        if (symbol == ' ')
        {
            if (number != 0)
            {
                // stack -> temporary stack
                stack_size = stack_size + 1;
                float* temp_stack = new float [stack_size];
                for (int j = 0; j < (stack_size - 1); ++j)
                {
                    temp_stack[j] = stack[j];
                }
                
                //new number in temporary stack
                temp_stack[stack_size - 1] = number * pow(10,power);
                number = 0;
                power = 0;
                
                //temporary stack -> stack
                delete [] stack;
                float* stack = new float [stack_size];
                for (int k = 0; k < stack_size; ++k)
                {
                    stack[k] = temp_stack[k];
                }
                
                delete [] temp_stack;
            }
        }
        
        else
        {
            switch(symbol)
            {
                case '+':
                    break;
                case '-':
                    break;
                case '*':
                    break;
                case '/':
                    break;
                default: //reads all digits
                    digit = symbol - '0';
                    power = power + 1;
                    number = number + digit*pow(10, power*(-1));
            }
        }    
    }
    
    for (int p = 0, p < stack_size, ++p)
    {
         std::cout<<stack[p]<<std::endl;
    }
    return 0;
}

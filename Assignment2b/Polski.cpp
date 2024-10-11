/* Kirill Begaliev st129977@student.spbu.ru
function for solving reversed Polish notation
*/

#include <iostream>
#include <string>
#include <cmath>

float Polski()
{
    char symbol = ' ';
    bool was_operation = false;
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
            stack_size = stack_size - 1;
            float* temp_stack = new float [1];
            if (stack_size > 1)
            {
                delete [] temp_stack;
                float* temp_stack = new float [stack_size];
            }
            
            switch(symbol)
            {
                case '+':
                    for (int a1 = 0; a1 < (stack_size - 1); ++a1)
                    {
                        temp_stack[a1] = stack[a1];
                    }
                    
                    temp_stack[stack_size-1] = stack[stack_size-1] + stack[stack_size];
                    was_operation = true;
                    delete [] stack;
                    break;
                    
                case '-':
                    for (int a2 = 0; a2 < (stack_size - 1); ++a2)
                    {
                        temp_stack[a2] = stack[a2];
                    }
                    
                    temp_stack[stack_size-1] = stack[stack_size-1] - stack[stack_size];
                    was_operation = true;
                    delete [] stack;
                    break;
                    
                case '*':
                    for (int a3 = 0; a3 < (stack_size - 1); ++a3)
                    {
                        temp_stack[a3] = stack[a3];
                    }
                    
                    temp_stack[stack_size-1] = stack[stack_size-1] * stack[stack_size];
                    was_operation = true;
                    delete [] stack;
                    break;
                    
                case '/':
                    for (int a4 = 0; a4 < (stack_size - 1); ++a4)
                    {
                        temp_stack[a4] = stack[a4];
                    }
                    
                    temp_stack[stack_size-1] = stack[stack_size-1] / stack[stack_size];
                    was_operation = true;
                    delete [] stack;
                    break;
                    
                default: //reads all digits
                    stack_size = stack_size + 1;
                    digit = symbol - '0';
                    power = power + 1;
                    number = number + digit*pow(10, power*(-1));
            }
            
            if (was_operation)
            {
                float* stack = new float [stack_size];
                for(int l = 0; l < stack_size; ++l)
                {
                    stack[l] = temp_stack[l];
                }
            }
            
            delete [] temp_stack;
        }    
    }
    std::cout<<stack[stack_size-1]<<std::endl;
    return 0;
}

#include<iostream>

typedef struct My_Struct
{
    int x;
    int y;
    bool operator == (const My_Struct& s)
    {
        return (this.x == s.x && this.y == s.y);
    }
} My_Struct_t;

int main()
{
    My_Struct_t s1 = {1, 1};
    My_Struct_t s2 = {1, 2};

    if(s1 == s2)
    {
        std::cout << "s1 and s2 have same value" << std::endl;
    }
    else
    {
        std::cout << "s1 and s2 have different value" << std::endl;
    }
}

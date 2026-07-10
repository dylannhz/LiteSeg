// Day 1
// #include <iostream>

// int main(){
//     std:: cout << "Hello Dylan!" <<std::endl;
//     return 0;
// }


// Day 2 
// 从键盘输入你的名字和年龄，程序判断你是否成年，然后输出问候
#include <iostream>
#include <string>

int main()
    {
        int age=0;
        std::string name;

        std::cout<<"请您输入名字和年龄"<< std:: endl;
        std:: cin >> name >> age;
        
        if(age<18)
        {
            std::cout<< "您好！未成年人"<< name << std:: endl;
        }
        else
        {
            std::cout<< "您好！成年人"<< name << std:: endl;
        }
        return 0;
    }













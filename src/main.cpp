/******************************************************************************
File Name     : main.cpp
Author        : Dingjiang Zhou
Email         : zhoudingjiang@gmail.com
Create Time   : Sun, Jan. 03rd, 2021. 02:39:19 PM
Last Modified :
Purpose       :
-------------------------------------------------------------------------------
INPUTS

OUTPUTS

******************************************************************************/
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    ( void )argc;
    ( void )argv;
#if defined(WITH_OPTION)
    std::cout << "compiled with option" << std::endl;
#else
    std::cout << "compiled without option" << std::endl;
#endif
    return 0;
}

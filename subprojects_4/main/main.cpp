#include "static_lib2/sublib1.h"
#include "interface_lib2/sublib2.h"

int main(int argc, char *argv[])
{
    sublib1 hi;
    hi.print();

    sublib2 howdy;
    howdy.print();
    
    return 0;
}

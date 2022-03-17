#include <iostream>

#include <string>
#include "version_config.h"

int main()
{
    std::cout   << "Dynamic Shadows" << std::endl
                << "Version: " << APP_VERSION_MAJOR << "." << APP_VERISON_MINOR << std::endl
                << std::endl;

    return 0;
}
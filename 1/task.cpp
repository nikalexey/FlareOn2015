#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> secret = {
        0x1F, 0x08, 0x13, 0x13, 0x04, 0x22, 0x0E, 0x11,
        0x4D, 0x0D, 0x18, 0x3D, 0x1B, 0x11, 0x1C, 0x0F,
        0x18, 0x50, 0x12, 0x13, 0x53, 0x1E, 0x12, 0x10
    };
    std::string success{ "You are success" };
    std::string failure{ "You are failure" };

    std::cout << "Let's start out easy" << std::endl;
    std::cout << "  Enter the password>";
    std::string pass;
    std::cin >> pass;
    
    for (int i = 0; i < 24; ++i)
    {
        if (secret[i] != (pass[i] ^ 0x7D))
        {
            std::cout << failure << std::endl;
            return 0;
        }

    }
    std::cout << success << std::endl;

    return 0;
}


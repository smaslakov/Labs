#include <iostream>
#include <string>

int main () {
    std::string str;
    std::getline(std::cin, str, '\n');

    for(int i = 0 ; i < str.length(); ++i) {
        if(str[i] == 'C' || str[i] == 'Q' || str[i] == 'W' || str[i] == 'X') {
            str.erase(i, 1);
            i--;
        }
    }
    for(int i = 0; i < str.length() ; ++i ) {
        if ((str[i] == 'p' || str[i] == 'P') && (str[i + 1] == 'h'|| str[i + 1] == 'H')) {
            if (str[i] == 'p')str.replace(i, 2, "f");
            if (str[i] == 'P')str.replace(i, 2, "F");
        }

        if ((str[i] == 't' || str[i] == 'T') && (str[i + 1] == 'h'|| str[i + 1] == 'H')) {
            if (str[i] == 't') str.replace(i, 2, "z");
            if (str[i] == 'T') str.replace(i, 2, "Z");
        }
        if ((str[i] == 'e' || str[i] == 'E') && (str[i + 1] == 'e' || str[i + 1] == 'E')) {
            if(str[i] == 'e')str.replace(i, 2, "i");
            if (str[i] == 'E')str.replace(i, 2, "I");
        }

        if (str[i] == 'q' && (str[i + 1] == 'u' || str[i + 1] == 'U' )) {
            if (str[i] == 'q') str.replace(i, 2, "kv");
            if (str[i] == 'Q') str.replace(i, 2, "Kv");
        }

        if((str[i] == 'y' || str[i] == 'Y')&& (str[i + 1] == 'o' || str[i + 1] == 'O') && (str[i + 2] == 'u' || str[i + 2] == 'U')) {
            if (str[i] == 'y')str.replace(i, 3, "u");
            if (str[i] == 'Y')str.replace(i, 3, "U");
        }

        if ((str[i] == 'o'|| str[i] == 'O')&& (str[i + 1] == 'o' || str[i + 1] == 'O')) {
            if (str[i] == 'o')str.replace(i, 2, "u");
            if (str[i] == 'O')str.replace(i, 2, "U");
        }

        if(str[i] == 'q' )
            str.replace(i, 1, "k");
        if(str[i] == 'x' )
            str.replace(i, 1, "ks");
        if(str[i] == 'w' )
            str.replace(i,1,"v");
    }

    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == 'c' && ((str[i + 1] == 'e' || str[i + 1] == 'E') || (str[i + 1] == 'i' || str[i + 1] == 'I') || (str[i + 1] == 'y' || str[i + 1] == 'Y')))
            str.replace(i, 1, 1, 's');
        else if(str[i] == 'c')
            str.replace(i, 1, 1, 'k');
    }

    long long len = str.length();
    while (len > 0) {
        for (int i = 0; i < str.length(); ++i) {

            if (((int(str[i]) >= 65 && int(str[i]) <= 90 ) || (int(str[i]) >= 97 && int(str[i]) <= 122 ) ) && ((str[i] == str[i + 1]) || (str[i] == char(int(str[i + 1]) + 32))) && (str[i] != 'e' && str[i] != 'E') && (str[i] != 'i' && str[i] != 'I') && (str[i] != 'y' && str[i] != 'Y') && (str[i] != 'u' && str[i] != 'U') && (str[i] != 'o' && str[i] != 'O') && (str[i] != 'a' && str[i] != 'A'))
                str.replace(i, 2, 1, str[i]);

            else if (((int(str[i]) >= 65 && int(str[i]) <= 90 ) || (int(str[i]) >= 97 && int(str[i]) <= 122 )) && ((char(int(str[i]) + 32) == str[i + 1]) || ((char(int(str[i]) + 32) == char(int(str[i + 1]) + 32)))) && (str[i] != 'e' && str[i] != 'E') && (str[i] != 'i' && str[i] != 'I') && (str[i] != 'y' && str[i] != 'Y') && (str[i] != 'u' && str[i] != 'U') && (str[i] != 'o' && str[i] != 'O') && (str[i] != 'a' && str[i] != 'A')) {
                str.replace(i, 2, 1, str[i]);
            }
        }
        len /= 2;
    }
    std::cout << str << '\n';
    return 0;
}
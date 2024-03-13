
#include <stdlib.h>
#include <iostream>
#include <limits>
#include <climits>
        bool exist(int x, int y, int m, int n) {
            return (x >= 0 && x < m && y >= 0 && y < n);
        }
        int main() {

            int m, n;
            int userInput;
            std::cout<<"this classical saper game";
            while(true) {
                std::cout << "Enter 0 to quit or 1 to continue: ";
                std::cin >> userInput;
                if (userInput == 0) {
                    std::cout << "Exiting the program." << std::endl;
                    break;  // Exit the loop when 0 is entered
                } else if (userInput != 1) {
                    std::cout << "Invalid input. Please enter 0 or 1." << std::endl;
                    std::cin.clear();  // Clear the input error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore invalid input
                } else {
                    std::cout << "enter field m n: ";
                    std::cin >> m >> n;
                    char **field = (char **) malloc(m * sizeof(char *));
                    for (int i = 0; i < m; i++) {
                        field[i] = (char *) malloc(n * sizeof(char));
                    }
                    std::cout << "enter field with bomb and free " << '\n';
                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            while (!(std::cin >> field[i][j] && (field[i][j] == '.' || field[i][j] == '*'))) {
                                std::cin.clear();
                                std::cin.ignore(LLONG_MAX);
                                std::cout << "wrong input \n";
                                std::cout << "enter field[i][j] ";
                            }
                        }
                    }

                    int directions[8][2] = {{-1, -1},
                                            {-1, 0},
                                            {-1, 1},
                                            {0,  -1},
                                            {0,  1},
                                            {1,  -1},
                                            {1,  0},
                                            {1,  1}};

                    for (int x = 0; x < m; x++) {
                        for (int y = 0; y < n; y++) {
                            if (field[x][y] == '*') continue;

                            int bombCount = 0;
                            for (int i = 0; i < 8; i++) {
                                int newX = x + directions[i][0];
                                int newY = y + directions[i][1];

                                if (exist(newX, newY, m, n) && field[newX][newY] == '*') bombCount++;
                            }

                            if (bombCount > 0) field[x][y] = '0' + bombCount;
                        }
                    }


                    for (int i = 0; i < m; i++) {
                        for (int j = 0; j < n; j++) {
                            std::cout << field[i][j] << " ";
                        }
                        std::cout << '\n';
                    }

                    for (int i = 0; i < m; i++) {
                        free(field[i]);
                        field[i] = nullptr;
                    }
                    free(field);
                    field = nullptr;
                }
            }
            return 0;
        }








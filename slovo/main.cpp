#include <iostream>

using namespace std;

int main()
{   int i_max = 0;
    int n_max = 0;
    cout << "Hello world!" << endl;
    char str[100];
    fgets(str, 100, stdin);
    int size = strlen(str);
    for (int i = 0, i < size, i++)
    {
     if (str[i]  = ' ')
    {   int n_tmp = i - i_tmp;

        if (int n_tmp > n_max)
            {
                n_max = n_tmp;
                i_max = i_tmp;
            }

        }
        }
    return 0;
}

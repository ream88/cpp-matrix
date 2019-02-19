#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
  srand(time(NULL));
  bool array[8][8] = {{false}};

  while (true)
  {
    cout << "\033c";

    int x = rand() % 8;
    int y = rand() % 8;

    array[x][y] = !array[x][y];

    for (int x = 0; x < 8; x++)
    {
      for (int y = 0; y < 8; y++)
      {
        if (array[x][y])
        {
          cout << "\033[1;31m█\033[0m";
        }
        else
        {
          cout << "░";
        }
      }

      cout << endl;
    }

    // 144 FPS PC master race
    std::this_thread::sleep_for(std::chrono::milliseconds(7));
  }

  return 0;
}

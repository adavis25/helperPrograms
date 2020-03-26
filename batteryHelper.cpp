#include <iostream>
using namespace std;
int main()
{
	system("cat /sys/class/power_supply/BAT0/capacity");
  	return 0;
}

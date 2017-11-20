#include "../../std_lib_facilities.h"

int main()
{
	int all_rice = 0;
	int prev = 1;
	bool thousand = false;
	bool million = false;
	bool billion = false;
	for (int i = 1; i <= 64; i++)
	{

		all_rice = prev * 2;
		
		if (all_rice >= 1000 && all_rice < 1000000 && thousand == false)
		{
			cout << "Number of squaresto reach thousand grains: " << i << '\n';
			thousand = true;

		}
		if (all_rice >= 1000000 && all_rice < 1000000000 && million == false)
		{
			cout << "Number of squares to reach million grains: " << i << '\n';
			million = true;
		}

		if (all_rice >= 1000000000 && all_rice < 10000000000 && billion == false)
		{
			cout << "Number of squares to reach billion grains: " << i << '\n';
			billion = true;
		}
		
		prev = prev * 2;

	}
	
	keep_window_open();

}
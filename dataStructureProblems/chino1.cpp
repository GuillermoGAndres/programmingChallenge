// Jolly Jumpers
// PC/UVa IDs: 110201/10038, Popularity: A, Success rate: average Level: 1
// Verdict: Accepted
// Submission Date: 2011-05-22
// UVa Run Time: 0.020s
//
// C2011metaphysis # yeah dot net
//
//  1 ~N - 1 1
// Jolly Jumpers Jolly Jumpers4 -8 -5 -7 -6
//  Jolly Jumpers

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>

using namespace std;

#define MAXSIZE (3000 + 1)

int main(int ac, char *av[])
{
    bool appeared[MAXSIZE];
    int capacity, total, first, second, tmp;
    bool flag;
    string line;

    while (getline(cin, line))
    {
	istringstream iss(line);
	iss >> capacity;

	total = capacity;
	flag = true;

	if (capacity > 1)
	{
	    //  0
	    memset(appeared, false, sizeof(appeared));

	    //
	    iss >> first >> second;
	    capacity -= 2;

	    tmp = abs(second - first);
	    if (tmp > (total - 1) || tmp == 0)
	    {
		flag = false;
		goto out;
	    }
	    appeared[tmp] = true;

	    //
	    while (capacity)
	    {
		first = second;
		iss >> second;
		capacity--;

		// N - 1 Jolly Jumpers
		tmp = abs(second - first);
		if (tmp > (total - 1) || tmp == 0)
		{
		    flag = false;
		    goto out;
		}
		//  1
		else if (appeared[tmp])
		{
		    flag = false;
		    goto out;
		}
		else
		    appeared[tmp] = true;
	    }

	    //  1 ~ N - 1
	    for (int i = 1; i < total; i++)
		if (appeared[i] == false)
		{
		    flag = false;
		    break;
		}
	}
	else
	{
	    if (capacity == 1)
	    {
		iss >> first;
		flag = (first == 1);
	    }
	    else
		flag = false;
	}

    out:
	cout << (flag ? "Jolly" : "Not jolly") << endl;
    }

    return 0;
}

// BEGIN CUT HERE
/*
// PROBLEM STATEMENT
// There are N switches and N lamps in Cucumberman's house. Each switch is connected to a single lamp. Different switches are connected to different lamps. Switches are numbered 0 through N-1. Lamps are also numbered 0 through N-1, but not necessarily in the same order as their corresponding switches. Switches and lamps have two states: ON and OFF. When a switch is in the ON state, the lamp connected to the switch is ON. When a switch is in the OFF state, the lamp connected to the switch is OFF.


Cucumberman decided to perform some experiments in order to figure out the connection between switches and lamps. In each experiment he first sets the states of all switches as he wants to, and then he writes down the states of all lamps.


He has already performed some experiments. You are given the results in two vector <string>s switches and lamps. If the j-th character of the i-th element of switches is 'Y', the j-th switch was ON in the i-th experiment. If the j-th character of the i-th element of switches is 'N', the j-th switch was OFF in the i-th experiment. lamps gives the information of lamps in the same format.


If the results of experiments are inconsistent, return -1. (I.e., return -1 if no way of assigning switches to lamps matches all the experiments.) Otherwise, return the minimal number of additional experiments required to figure out the connection between switches and lamps. In other words, return the smallest nonnegative integer X with the following property: It is possible to design X additional experiments in such a way that after Cucumberman executes them and tells you the results you will surely be able to match each switch to its corresponding lamp.


DEFINITION
Class:SwitchesAndLamps
Method:theMin
Parameters:vector <string>, vector <string>
Returns:int
Method signature:int theMin(vector <string> switches, vector <string> lamps)


CONSTRAINTS
-switches will contain between 1 and 50 elements, inclusive.
-Each element of switches will contain between 1 and 50 characters, inclusive.
-Each element of switches will contain the same number of characters.
-lamps will contain the same number of elements as switches.
-Each element of lamps will contain the same number of characters, and it will be equal to the number of characters of elements in switches.
-Each character in switches and lamps will be 'Y' or 'N'.
-For each i, the number of 'Y' in switches[i] and the number of 'Y' in lamps[i] will be equal.


EXAMPLES

0)
{"NYNN", "NNYN"}
{"NNNY", "NNYN"}

Returns: 1

He can figure out that switch 1 is connected to lamp 3 and switch 2 is connected to lamp 2. He needs one more experiment to figure out which of the switches 0 and 3 is connected to lamp 0.

1)
{"YYN", "YNY", "YYN"}
{"YNY", "NYY", "YNY"}

Returns: 0

He can figure out that switch 0 is connected to lamp 2, switch 1 is connected to lamp 0, and switch 2 is connected to lamp 1. No additional experiments are necessary.


2)
{"NYYYNYNNYYYNYNNNNY", "NYYYNYNNYYYNYNNNNY"}
{"YYYNNNYNNYNYNYNYNY", "YYYNNNYNNYNYYNNYNY"}

Returns: -1

The same experiment cannot give different results when executed twice.

3)
{"YYNNN", "NNYYN"}
{"NYNNY", "NNNYY"}

Returns: -1



4)
{"YNNYNNYNYY", "NYNNYNYNYN", "YNYNYYYYYN", "NNYYNYNYNN"}
{"NYYNYNNYNY", "NYYYNNYNNN", "YYYYNYNNYY", "YNNNNYNYYN"}

Returns: 2



*/
// END CUT HERE
#line 80 "SwitchesAndLamps.cpp"
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <vector>
#include <bitset>
#include <algorithm>
using namespace std;

#define mp make_pair

class SwitchesAndLamps
{
public:
 int theMin(vector <string> switches, vector <string> lamps)
 {
 //$CARETPOSITION$
 }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"NYNN", "NNYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"NNNY", "NNYN"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 1; verify_case(0, Arg2, theMin(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"YYN", "YNY", "YYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"YNY", "NYY", "YNY"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 0; verify_case(1, Arg2, theMin(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"NYYYNYNNYYYNYNNNNY", "NYYYNYNNYYYNYNNNNY"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"YYYNNNYNNYNYNYNYNY", "YYYNNNYNNYNYYNNYNY"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(2, Arg2, theMin(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"YYNNN", "NNYYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"NYNNY", "NNNYY"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(3, Arg2, theMin(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {"YNNYNNYNYY", "NYNNYNYNYN", "YNYNYYYYYN", "NNYYNYNYNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"NYYNYNNYNY", "NYYYNNYNNN", "YYYYNYNNYY", "YNNNNYNYYN"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 2; verify_case(4, Arg2, theMin(Arg0, Arg1)); }

// END CUT HERE

}; 
// BEGIN CUT HERE
int main()
{
 SwitchesAndLamps ___test;
 ___test.run_test(-1);
}
// END CUT HERE

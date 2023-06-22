#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, Max = 5;
	int queue_arr[5];
public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}
};
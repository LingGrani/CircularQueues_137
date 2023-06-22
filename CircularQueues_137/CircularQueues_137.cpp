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
	void insert() {
		int num;
		cout << "Masukan nomor: ";
		cin >> num;
		cout << endl;
		//cek antrian penuh
		if ((FRONT == 0 && REAR == Max - 1) || (FRONT == REAR - 1)) {
			cout << "\nQueue penuh";
			return;
		}
		//cek antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//jika REAR berada diposisi terakhir array, kembali ke awal array
			if (REAR == Max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_arr[REAR] = num;
	}

	void remove() {
		//cek apakah antrian ksosong
		if (FRONT == -1) {
			cout << "\nQueue kosong";
			return;
		}
		cout << "\nElement yang didelete dari antrian: " << queue_arr[FRONT] << "\n";

		//cek antrian hanya satu element
		if (FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		else {
			//jika element ada di posisi terakhir
			if (FRONT == Max - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}

	void display() {
		int Front_position = FRONT;
		int Rear_position = REAR;

		//cek antrian kosong
		if (FRONT == -1) {
			cout << "\nQueue kosong";
			return;
		}

		cout << "\nElement di dalam Queue adalah...\n";
		
		/*jika Front_position <= Rear_position, iterasi dari front hingga rear*/
		if (Front_position <= Rear_position) {
			while (Front_position <= Rear_position) {
				cout << queue_arr[Front_position] << "  ";
				Front_position++;
			}
			cout << endl;
		}
		else {
		/*jika Front_position > Rear_position, iterasi dari front hingga akhir array*/
			while (Front_position <= Max - 1) {
				cout << queue_arr[Front_position] << "  ";
				Front_position++;
			}
			Front_position = 0;

			//interasi dari awal array hingga rear
			while (Front_position <= Rear_position) {
				cout << queue_arr[Front_position] << "  ";
				Front_position++;
			}
			cout << endl;
		}
	}
};

int main() {
	Queues q;
	char ch;
}
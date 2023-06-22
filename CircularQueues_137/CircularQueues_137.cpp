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

		}
	}
};
#include <iostream>

int *createArray(size_t size; int initial_value =0){
	int *new_array {nullptr};
	new_array = new int[size];

	for (size_t i {0}; i < size; ++i) {
		*(new_array + i) = initial_value;
	}

	return new_array;
}

void display(cost int const* array, size_t size){
    for (size_t i {0}; i < size; ++i){
        cout << array[i] << " ";
    }

    cout << endl;
}

int main() {
    int* my_array{nullptr};
    size_t size;
    int initial_value {};

    cout << "How many integers would you like to allocate?";
    cin >> size;

    cout<< "What value would you like them initialized to?";
    cin >> initial_value;

    my_array = createArray(size, initial_value);

    display(my_array, size);

    delete [] my_array;

    return 0;
}
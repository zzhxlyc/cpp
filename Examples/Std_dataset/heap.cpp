#include <iostream>
#include <algorithm>
using namespace std;

void heap_test(){
	int A[] = {1, 4, 2, 8, 5, 7};
	const int N = sizeof(A) / sizeof(int);

	make_heap(A, A+N);
	cout << "Before pop\t";
	copy(A, A+N, ostream_iterator<int>(cout, " "));
	cout<<endl;

	//pop the top, throw it the end of the list
	pop_heap(A, A+N);
	cout << endl << "After pop\t";
	copy(A, A+N-1, ostream_iterator<int>(cout, " "));
	cout << endl << "A[N-1] = " << A[N-1] << endl;

	//begin -> end -1 is already a heap, the end is the new element to push
	push_heap(A, A+N);
	cout << endl << "After push\t";
	copy(A, A+N, ostream_iterator<int>(cout, " "));
}

void heap_main(){
	heap_test();
}
# Dynamic Memory

**The Stack**

All normally declared variables take up space in memory from Stack.

**The Heap**

All variables  declared on *run time* take memory from Heap.

**Desired Size**

If we want to have desired size of variable you declared then you can use dynamic memory allocation.

`int *ptr = new int(25);`

`float *ptrr = new float(26, 45);`

***nothrow***

If the declared  memory is larger then RAM memory then key-word  *nothrow* is used to null the declared variable.

**Practice code:**

`#include<iostream>`

`using namespace std;`

`int main()`

`{`

`int* p = NULL;`

`p = new(nothrow) int;`

`if(!p)`

`cout<<”allocation of memory failed”<<endl;`

`else`

`{`

`*p = 29;`

`cout<<”value of p:”<<*p<<endl;`

`}`

`float* r = new float(75,25);`

`cout<<”value of r:”<<endl;`

`int n;`

`cout<<”Enter size of  array : “<<endl;`

`cin>>n;`

`int* q = new (nothrow) int[n];`

`if(!q)`

`cout<< “allocation of memory failed” <<endl;`

`else`

`{`

`for(int i = 0; i < n; i++)`

`q[i] = i +1;`

`cout<<”value store in block of memory using index:” <<endl;`

`for(int i = 0; i < n; i++)`

`{`

`cout << *q << “ “;`

`q = q + 1;`

`}`

`}`

`delete p;`

`delete r;`

`delete [ ] q;`

`return 0;`

`}`

 

**DMA via Class**

Code:

`#include<iostream>`

`using namespace std;`

`class Box`

`{`

`public:`

`Box()`

`{`

`cout<<"Constructor called !" <<endl;`

`}`

`~Box()`

`{`

`cout<< "Dstructor called !" <<endl;`

`}`

`};`

`int main()`

`{`

`Box* myBOxArray  = new Box[4];`

`delete[] myBOxArray;`

`return 0;`

`}`

**Sudo # 3**

`#include<iostream>`

`using namespace std;`

`int main()`

`{`

`int num;`

`cout << "enter total number of students: " ;`

`cin >> num;`

`float* ptr;`

`ptr = new float[num];`

`cout << "Enter GPA of student:" <<endl;`

`for(int i = 0; i< num; ++i)`

`{`

`cout<< "Student" << i + 1 << " : ";`

`cin >> *(ptr + 1);`

`}`

`cout << "Displaying GPA of student :" << endl;`

`for (int i = 0; i < num; ++i)`

`{`

`cout << "Student" << i +1 << " : " << *(ptr +i) << endl;`

`}`

`delete [] ptr;`

`return 0;`

`}`

**2D-Array via pointers**

`#include<iostream>`

`using namespace std;`

`int main()`

`{`

`int num;`

`cout << "enter total number of students: " ;`

`cin >> num;`

`float* ptr;`

`ptr = new float[num];`

`cout << "Enter GPA of student:" <<endl;`

`for(int i = 0; i< num; ++i)`

`{`

`cout<< "Student" << i + 1 << " : ";`

`cin >> *(ptr + 1);`

`}`

`cout << "Displaying GPA of student :" << endl;`

`for (int i = 0; i < num; ++i)`

`{`

`cout << "Student" << i +1 << " : " << *(ptr +i) << endl;`

`}`

`delete [] ptr;`

`return 0;`

`}`

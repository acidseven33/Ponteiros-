#include <iostream>
using namespace std;

int main () {

float numero1, numero2;
float *fp;
fp = &numero1;
cout << fp << endl;

fp = &numero2;

cout << *fp << endl;

printf ("%P\n", *fp);
printf ("%P\n", &fp);

}
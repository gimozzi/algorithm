#include <iostream>
#include <functional>

using namespace std;

/*
 * less     : 첫번째 인자가 두번째 인자보다 작으면 true return
 * greater  : 첫번째 인자가 두번째 인자보다 크면 true return
 *
 * plus     : 두 인자를 더한 값 return
 * minus    : 첫번째 인자에서 두번째 인자를 뺀 값을 return
 */

int main (void) {

    cout << less<int>()(10, 20) << endl;
    cout << less<int>()(20, 10) << endl;
    cout << greater<int>()(10, 20) << endl;
    cout << greater<int>()(20, 10) << endl;
    cout << endl;

    cout << plus<int>()(10, 20) << endl;
    cout << plus<int>()(20, 10) << endl;
    cout << minus<int>()(10, 20) << endl;
    cout << minus<int>()(20, 10) << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

namespace MySpace {
	class Space {
		string str;
	public:
		Space(string str) {
			this->str = str;
		}
		void ShowSpace() {
			cout << this->str << endl;
		}
	};
}

using namespace MySpace;

int main() {

	MySpace::Space sp("Milk way");
	sp.ShowSpace();

	Space sp2("Space track");
	sp2.ShowSpace();

	system("pause");
	return 0;
}
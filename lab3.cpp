#include "Movie.h"

using namespace std;

void test();

int main()
{
	cout << "Start testing\n" << endl;
	test();
	cout << "\nFinished testing" << endl;

    return 0;
}

void test()
{
    Movie myTest(152,2008,5,14.99,"The Dark Knight");
    myTest.addActor("josh","kawaguchi",2020);
    myTest.addActor("josh","kawaguchi",2020);

    myTest.addActor("josh","kawaguchi",2020);
    myTest.addActor("josh","kawaguchi",2020);
    myTest.addActor("josh","kawaguchi",2020);
    myTest.addActor("josh","kawaguchi",2020);
    myTest.addActor("josh","kawaguchi",2020);

    myTest.printMovieInfo();

}
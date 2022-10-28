
#include "Movie.h"

using namespace std;

Movie::Movie()
{
    setMovieTime(0);
    setMovieYearOut(0);
    setNumberOfActors(0);
    actorArrayIndex = 0;
    setMoviePrice(0);
    setMovieTitle("");
    //Movie::actors = new Actor[15];
}

Movie::Movie(int movieTime, int movieYearOut, int numberOfActors, double moviePrice, std::string movieTitle)
{
    setMovieTime(movieTime);
    setMovieYearOut(movieYearOut);
    setNumberOfActors(numberOfActors);
    actorArrayIndex = 0;
    setMoviePrice(moviePrice);
    setMovieTitle(movieTitle);
    //Movie::actors = new Actor[15];
}

void Movie::setMovieTime(int movieTime)
{
    this->movieTime = movieTime;
}
int Movie::getMovieTime()
{
    return this->movieTime;
}

void Movie::setMovieYearOut(int movieYearOut)
{
    this->movieYearOut = movieYearOut;
}
int Movie::getMovieYearOut()
{
    return this->movieYearOut;
}

void Movie::setNumberOfActors(int numberOfActors)
{
    this->numberOfActors = numberOfActors;
//    Movie::actors = new Actor[this->actorArrayIndex];

}
int Movie::getNumberOfActors()
{
    return this->numberOfActors;
}

void Movie::addActor(std::string firstName, std::string lastName, int DoB)
{
    //Adds an actor to the actors array by constructing an Actor object with the attributes passed in

    //::actors[actorArrayIndex] = Actor(firstName,lastName,DoB);
    actorArrayIndex++;
}

void Movie::setMoviePrice(double moviePrice)
{
    this->moviePrice = moviePrice;
}
double Movie::getMoviePrice()
{
    return this->moviePrice;
}

void Movie::setMovieTitle(std::string movieTitle)
{
    this->movieTitle = movieTitle;
}
std::string Movie::getMovieTitle()
{
    return this->movieTitle;
}

void Movie::printMovieInfo()
{
    cout << "Title: " << getMovieTitle() << ", Published in: " << getMovieYearOut() << endl;
    cout << "Duration of Movie: " << getMovieTime() << " minutes" << endl;
    cout << "Price: $" << getMoviePrice() << endl << "Actors:" << endl;
    //cout << getNumberOfActors();
    for(int i = 0; i < getNumberOfActors(); i++)
    {
//        cout << actors[i].getFirstName() << " " << actors[i].getLastName() << ", " << actors[i].getBirthYear();
//        if (i != numberOfActors - 1)
//        {
//            cout << endl;
//        }
    }
}

Movie::Movie(Movie& m)//gives me a pointer
{
    //Constructors a Movie object by deep copying all the attributes of the movie object passed in.
    setMovieTime(m.getMovieTime());
    setMovieYearOut(m.getMovieYearOut());
    setNumberOfActors(m.getNumberOfActors());
    this->actorArrayIndex = 0;
    setMoviePrice(m.getMoviePrice());
    setMovieTitle(m.getMovieTitle());
}

Movie::~Movie()
{
    //delete [] Movie::actors;
    delete this;
    //Destroys the Movie object, making sure to not creating any memory leaks
}
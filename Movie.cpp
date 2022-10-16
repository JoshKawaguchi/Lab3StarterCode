#include "Movie.h"

using namespace std;

    Movie::Movie()
    {
        movieTime = 0;
        movieYearOut = 0;
        numberOfActors = 0;
        actorArrayIndex = 0;
        moviePrice = 0;
        movieTitle = "";
        actors = new Actor[actorArrayIndex];
    }

    Movie::Movie(int movieTime, int movieYearOut, int numberOfActors, double moviePrice, std::string movieTitle)
    {
        setMovieTime(movieTime);
        setMovieYearOut(movieYearOut);
        setNumberOfActors(numberOfActors);
        actorArrayIndex = 0;
        setMoviePrice(moviePrice);
        setMovieTitle(movieTitle);
        actors = new Actor[actorArrayIndex];
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
        Movie::actors = new Actor[this->actorArrayIndex];
    }
    int Movie::getNumberOfActors()
    {
        return this->numberOfActors;
    }

    void Movie::addActor(std::string firstName, std::string lastName, int DoB)
    {
        //Adds an actor to the actors array by constructing an Actor object with the attributes passed in
        //Actor* helper = new Actor[]
        actors[actorArrayIndex++] = Actor(firstName,lastName,DoB);

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
        for(int i = 0; i < this->numberOfActors; i++)
        {
            cout << Movie::actors[i].getFirstName() << " " << Movie::actors[i].getLastName() << ", " << Movie::actors[i].getBirthYear() << endl;
        }
    }

    Movie::Movie(const Movie &m)
    {
        //Constructors a Movie object by deep copying all the attributes of the movie object passed in.
    }

    Movie::~Movie()
    {
        delete this;
        //Destroys the Movie object, making sure to not creating any memory leaks
    }





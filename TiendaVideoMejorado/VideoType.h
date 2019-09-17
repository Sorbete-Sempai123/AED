#ifndef VIDEOTYPE_H
#define VIDEOTYPE_H

#include<iostream>
#include<string>
using namespace std;

class VideoType
{
private:
    friend ostream& operator << (ostream& o,const VideoType& video);
    string MovieTitle;
    string MovieStar1;
    string MovieStar2;
    string MovieProducer;
    string MovieDirector;
    string MovieProductionCo;
    int copiesInStock;

public:
    VideoType(string title = "", string star1 = "",
              string star2 = "", string producer = "",
              string director = "", string productionCo = "",
              int setInStock = 0);
    void setVideoInfo(string title,string star1, string star2,string producer, string director, string companyPo, int setstore);
    int getNoCopyStore()const;
    void checOut();
    void checkInt();
    void printTitle()const;
    void printInfo()const;
    bool checkTtle(string title);
    void UpdateinStock(int num);// tam=tam+1del mismo numero de peliculas
    void setCopiesInStock(int num);
    string getTitle()const;
    bool operator==(const VideoType&)const;
    bool operator !=(const VideoType&)const;
    bool operator > (const VideoType&)const;
    bool operator < (const VideoType&)const;
    ~VideoType(){}

};


#endif // VIDEOTYPE_H

#include "TextBuilder.h"
#include "Director.h"
#include <memory>

using namespace std;

int main(){
    shared_ptr<NormalText> nt = make_shared<NormalText>();
    nt->setTitle("Hello World!");
    nt->setAuthor("Syan-Lin");
    nt->setTime("2022/9/7");
    nt->setText("This is a design pattern.");
    nt->setEnd("Thanks for reading!");
    shared_ptr<FancyText> ft = make_shared<FancyText>();
    ft->setTitle("Hello World!");
    ft->setAuthor("Syan-Lin");
    ft->setTime("2022/9/7");
    ft->setText("This is a design pattern.");
    ft->setEnd("Thanks for reading!");

    Director director;
    string article1, article2;
    director.setBuilder(nt);
    article1 = director.makeArticle();
    director.setBuilder(ft);
    article2 = director.makeArticle();

    cout << article1 << article2 << endl;

    return 0;
}
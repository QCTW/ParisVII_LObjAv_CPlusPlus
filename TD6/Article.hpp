/*
 * Article.hpp
 *
 *  Created on: 29 oct. 2015
 *      Author: Quincy
 */

#ifndef ARTICLE_HPP_
#define ARTICLE_HPP_
#include <string>
using namespace std;

class Article
{
private:
	int nPrix;
	string sNom;
public:
	Article(int nNewPrix, string sNewNom);
	virtual ~Article();
	virtual int getPrix();
	virtual void setPrix(int prix);
	virtual const string& getNom();
	virtual void setNom(const string& nom);
};

#endif /* ARTICLE_HPP_ */

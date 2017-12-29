/*
 * ArticleEnSolde.hpp
 *
 *  Created on: 29 oct. 2015
 *      Author: Quincy
 */

#ifndef ARTICLEENSOLDE_HPP_
#define ARTICLEENSOLDE_HPP_

#include "Article.hpp"

class ArticleEnSolde: public Article
{
	private:
		float fPourcentage;
	public:
		ArticleEnSolde(string sNom, int nPrix, float fSetSolde);
		virtual ~ArticleEnSolde();
		float getSoldePercentage();
		virtual int getPrix();
};

#endif /* ARTICLEENSOLDE_HPP_ */

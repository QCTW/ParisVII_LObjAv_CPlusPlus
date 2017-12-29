g++ -std=c++11 -stdlib=libstdc++ -c /Users/Quincy/git/ParisVII_LObjAv_CPlusPlus/learning/$1
g++ -std=c++11 -stdlib=libstdc++ -o `echo $1 | cut -f 1 -d '.'` /Users/Quincy/git/ParisVII_LObjAv_CPlusPlus/learning/$1

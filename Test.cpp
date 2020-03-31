#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";//=4
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";//=4
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}
TEST_CASE("") {
    //The sky is the limit =11
    string text = "Dhe sci ys the limid";
    CHECK(find(text, "The") == string("Dhe"));
    CHECK(find(text, "the") == string("Dhe"));
    CHECK(find(text, "sky") == string("sci"));
    CHECK(find(text, "sqi") == string("sci"));
    CHECK(find(text, "ski") == string("sci"));
    CHECK(find(text, "zqi") == string("sci"));
    CHECK(find(text, "zci") == string("sci"));
    CHECK(find(text, "sqy") == string("sci"));
    CHECK(find(text, "is") == string("ys"));
    CHECK(find(text, "iz") == string("ys"));
    CHECK(find(text, "limit") == string("limid"));
    
}
TEST_CASE("") {
    //To live is not mine your alive=7
    string text = "tu liwe iz nut mine Iour aliwe";
    CHECK(find(text, "to") == string("tu"));
    CHECK(find(text, "tO") == string("tu"));
    CHECK(find(text, "do") == string("tu"));
    CHECK(find(text, "not") == string("nut"));
    CHECK(find(text, "myne") == string("mine"));
    CHECK(find(text, "your") == string("Iour"));
    CHECK(find(text, "alive") == string("aliwe"));
    
   
}
TEST_CASE("") {
    // the heart sees whats invisible to the eye =7
    string text = "The hearD zeez vhads inWizYble to the eie";
    CHECK(find(text, "heart") == string("hearD"));
    CHECK(find(text, "sees") == string("zeez"));
    CHECK(find(text, "whats") == string("vhads"));
    CHECK(find(text, "invisible") == string("inWizYble"));
    CHECK(find(text, "eye") == string("eie"));
    CHECK(find(text, "eIE") == string("eie"));
    CHECK(find(text, "whatz") == string("vhads"));
}
TEST_CASE("") {
    // dont cry because its over smile because it happened =10
    string text = "Dund Qry bekaoze its owEr zmile bekaoze it habbened";
    CHECK(find(text, "dont") == string("Dund"));
    CHECK(find(text, "cry") == string("Qry"));
    CHECK(find(text, "Kry") == string("Qry"));
    CHECK(find(text, "because") == string("bekaoze"));
     CHECK(find(text, "fecaoze") == string("bekaoze"));
    CHECK(find(text, "over") == string("owEr"));
    CHECK(find(text, "OVER") == string("owEr"));
    CHECK(find(text, "smile") == string("zmile"));
    CHECK(find(text, "happened") == string("habbened"));
    CHECK(find(text, "HaFpeNeT") == string("habbened"));
   
}
TEST_CASE("") { 
    // the greatest gift to my eyesight is having my eyes set on you =7
   string text="THe jreatest Jibt to mi eyeZighd is having my eyes set on you";
    CHECK(find(text, "the") == string("THe"));
     CHECK(find(text, "greatest") == string("jreatest"));
    CHECK(find(text, "greaDezt") == string("jreatest"));
    CHECK(find(text, "MY") == string("mi"));
    CHECK(find(text, "eyesight") == string("eyeZighd"));
    CHECK(find(text, "eyesyght") == string("eyeZighd"));
    CHECK(find(text, "hawynj") == string("having"));
}

TEST_CASE("") { 
    // everything has beauty but not everyone sees it=10
   string text="ewerydhinj haz PEAUDY fud not eweryone sees it";
   CHECK(find(text, "everything") == string("ewerydhinj"));
    CHECK(find(text, "everidhinj") == string("ewerydhinj"));
    CHECK(find(text, "HAS") == string("haz"));
    CHECK(find(text, "beauty") == string("PEAUDY"));
    CHECK(find(text, "beaoti") == string("PEAUDY"));
    CHECK(find(text, "but") == string("fud"));
    CHECK(find(text, "everyone") == string("eweryone"));
    CHECK(find(text, "everiune") == string("eweryone"));
    CHECK(find(text, "Zees") == string("sees"));
    CHECK(find(text, "yd") == string("it"));
    
}   
    TEST_CASE("") { 
    // dont knock it if you cant do any better = 10
   string text="TuNd CnoQc IT ib you KaNd do AnI peDdeR ";
    CHECK(find(text, "Dont") == string("TuNd"));
    CHECK(find(text, "knock") == string("CnoQc"));
    CHECK(find(text, "it") == string("IT"));
    CHECK(find(text, "if") == string("ib"));
    CHECK(find(text, "cant") == string("KaNd"));
    CHECK(find(text, "any") == string("AnI"));
    CHECK(find(text, "better") == string("peDdeR"));
    CHECK(find(text, "dont") == string("TuNd"));
    CHECK(find(text, "betder") == string("peDdeR"));
    CHECK(find(text, "qnukq") == string("CnoQc"));
    }
    
    TEST_CASE("") { 
    // hoping for the best but expecting the worst=10
   string text="HoBinj BUr the feZt pud exbeqtig the Vorzt";
    CHECK(find(text, "Hoping") == string("HoBinj"));
    CHECK(find(text, "for") == string("BUr"));
    CHECK(find(text, "best") == string("feZt"));
    CHECK(find(text, "dhe") == string("the"));
    CHECK(find(text, "but") == string("pud"));
    CHECK(find(text, "expecting") == string("exbeqting"));
    CHECK(find(text, "worst") == string("Vorzt"));
    CHECK(find(text, "the") == string("the"));
    CHECK(find(text, "por") == string("BUr"));
    CHECK(find(text, "expeqtinj") == string("exbeqting"));

    }

     TEST_CASE("") { 
    // you never know what tomorrow will bring
   string text="you neWer cnov whad doMOrrov wIll pryng";
    CHECK(find(text, "yUo") == string("you"));
    CHECK(find(text, "neveR") == string("neWer"));
    CHECK(find(text, "know") == string("cnov"));
    CHECK(find(text, "what") == string("whad"));
    CHECK(find(text, "domorrow") == string("doMOrrov"));
    CHECK(find(text, "will") == string("wIll"));
    CHECK(find(text, "brinj") == string("pryng"));
    CHECK(find(text, "tomorrov") == string("doMOrrov"));
     }

  TEST_CASE("Test exception thrown ") { 
    // =8
   string text=  "We will win it all together";   
    CHECK_THROWS_AS(find("","wee"),std::exception);
    CHECK_THROWS_AS(find("","wE"),std::exception);
    CHECK_THROWS_AS(find("","wyll"),std::exception);
    CHECK_THROWS_AS(find("","be"),std::exception);
    CHECK_THROWS_AS(find("","toget"),std::exception);
    CHECK_THROWS_AS(find("","won"),std::exception);
    CHECK_THROWS_AS(find("","h"),std::exception);
    CHECK_THROWS_AS(find("","ALL"),std::exception);

}

TEST_CASE (""){
    // i am  very surry=4
    string text ="Y am weri zorri";
    CHECK(find(text,"I") == string ("Y"));
    CHECK(find(text,"very") == string ("weri"));
    CHECK(find(text,"surry") == string ("zorri"));
    CHECK(find(text,"VERY") == string ("weri"));
}
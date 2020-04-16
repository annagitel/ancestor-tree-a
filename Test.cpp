#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;

TEST_CASE ("addFather"){
    Tree t("me");
    Tree temp1 = t.addFather("me","myFather");
    CHECK(t.relation("myFather") == "father");
    Tree temp2 = temp1.addFather("father","myGrand");
    CHECK(t.relation("myGrand") == "grandFather");
    t = temp1;
    temp1 = temp2;
    for(int i=0;i<20;i++){
        CHECK(t.relation("myFather") == "father");
        temp2 = temp1.addFather("me","myGrand");
        CHECK(t.relation("myGrand") == "grandFather");
        t = temp1;
        temp1 = temp2;
    }
}

TEST_CASE ("addMother"){
    Tree t("me");
    Tree temp1 = t.addMother("me","myMother");
            CHECK(t.relation("myMother") == "mother");
    Tree temp2 = temp1.addMother("mother","myGrand");
            CHECK(t.relation("myGrand") == "grandMother");
    t = temp1;
    temp1 = temp2;
    for(int i=0;i<20;i++){
                CHECK(t.relation("myMother") == "mother");
        temp2 = temp1.addMother("me","myGrand");
                CHECK(t.relation("myGrand") == "grandMother");
        t = temp1;
        temp1 = temp2;
    }
}

TEST_CASE ("remove"){
    Tree t("me");
    t.addMother("me", "me");
    std::string chain = "mother";
    CHECK(t.find(chain) == "me");
    for(int i =0; i<20; i++){
        chain = "grand-"+chain;
        CHECK(t.find(chain) == "me");
        t.remove("me");
    }
}

TEST_CASE ("find"){
    Tree t("me");
    t.addMother("me", "me");
    std::string chain = "mother";
    CHECK(t.find(chain) == "me");
    for(int i =0; i<20; i++){
        chain = "grand-"+chain;
        CHECK(t.find(chain) == "me");
    }

}



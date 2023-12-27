#include <string.h>  
#include "../../unity.h"
#include "asm.h" 



void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}



void run_test(char * str, int expected )
{
    char vec[100];

   int res;   

    // setup 
        memset(vec, 0xaa, sizeof vec);
     
    	
	strcpy(vec+1,str);  // bad practice  
	res=count_words(vec+1);
    
    TEST_ASSERT_EQUAL_CHAR(0xaa, vec[strlen(str)+2]);    // check sentinel 
    TEST_ASSERT_EQUAL_CHAR(0xaa, vec[0]);    // check sentinel 
    
    TEST_ASSERT_EQUAL_STRING(str,vec+1); 
    TEST_ASSERT_EQUAL_INT(expected,res); 
    
}


void test_Null()
{ 
    run_test("",0); 
}
void test_Spaces()
{ 
    run_test("   ",0); 
}
void test_Abba()
{ 
    run_test(" Abba  ",1); 
}

void test_Two()
{ 
    run_test("a b",2); 
}
void test_Three()
{ 
    run_test("One Two Three",3); 
}



int main()
  { 

    UNITY_BEGIN();
    RUN_TEST(test_Null);
    RUN_TEST(test_Spaces);
    RUN_TEST(test_Abba);
    RUN_TEST(test_Two);
    RUN_TEST(test_Three);
    return UNITY_END();  

  } 







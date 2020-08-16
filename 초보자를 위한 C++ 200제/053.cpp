//053
//¹®ÀÚ¿­ ºñ±³ÇÏ±â(string.compare) 
#include <iostream>

using namespace std; 

int main() {
	//¹®ÀÚÇü º¯¼ö ¼±¾ğ 
	string seven_war = "ÀÓÁø¿Ö¶õ";
	string korea_war = "ÇÑ±¹ÀüÀï";
	
	//¹®ÀÚ¿­À» ºñ±³ÇÒ ¶§´Â compare()ÇÔ¼ö¸¦ ÀÌ¿ëÇÑ´Ù.
	//ºñ±³ÇÒ ¹®ÀÚ¿­¿¡ compare()ÇÔ¼ö¸¦ È£­„¸¶°í ÀÎÀÚ·Î ´Ù¸¥ ¹®ÀÚ¿­À» ³²±â´À³×, ÀÌ‹š °ªÀÌ ¼­·Î °°À¸¸é 0 , ´Ù¸£¸é -1ÀÌ ¸®ÅÏµÈ´Ù. 
	if(seven_war.compare(korea_war) == 0)
		cout << "°°Àº ¹®ÀÚ¿­ÀÔ´Ï´Ù\n";
	else
		cout << "´Ù¸¥ ¹®ÀÚ¿­ÀÔ´Ï´Ù\n";
	
	return 0;
}

/*
C++¿¡¼­´Â stringÀÌ Å¬·¡½º ÇüÅÂ·Î Á¦°øµÇ±â ¶§¹®¿¡ À¯¿ëÇÑ ÇÔ¼ö¸¦ ¸¹ÀÌ »ç¿ëÇÒ ¼ö ÀÖ´Ù. 
*/

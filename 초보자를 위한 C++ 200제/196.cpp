//196
//Json 파일에 내용 쓰기(Value, StyledWriter)
#include <string>
#include <fstream>
#include <iostream>
#include "json/json.h" //앞선 장에서 생성하여 복사한 json 파일을 include한다.

using namespace std;
using namespace Json;

int main()
{
	ofstream json_file; //json 파일을 생성하기 위해 ofstream을 이용한다.
	json_file.open("json_exam.json"); //파일 이름은 json_exam.json으로 설정한다.

	Value main; //jsoncpp는 Value를 이용해 요소들을 관리한다.
	main["Job1"] = "developer"; //Job1 이름의 값은 developer이다.
	main["Job2"] = "author"; //Job2 이름의 값은 author이다.

	Value sub1; //새로운 json 오브젝트를 생성한다.
	sub1["Sub1"] = "Sub1";
	sub1["Sub2"] = "Sub2";
	sub1["Subitems"] = sub1; //새로 추가한 오브젝트 sub1을 main에 추가한다. 오브젝트는 내부에 오브젝트를 보류할 수 있다. 이 경우 main은 부모 트리가 되고 sub1은 자식 트리가 된다.

	main["Sub3"] = "blogger"; //main 오브젝트에 새로운 값을 추가한다.

	Json::StyledWriter writer; //StyleWriter는 Value를 출력하도록 돕는다. Write 함수를 이용해 문자열로 변환하여 29번 라인에서 출력한다. 이 라인은 콘솔에 출력되는 문자열을 얻기 위함이지 파일에 직접 쓰는 것은 아니다.
	string str = writer.write(main);
	std::cout << str << std::endl << std::endl;

	json_file << writer.write(main); //StyleWriter를 이용하여 파일에 json요소를 쓴다.
	json_file.close();

	return 0;
}

/*
결과)

{
	"Job1" : "developer",
		"Job2" : "author",
		"Job3" : "blogger",
		"Subitems" : {
			"Sub1" : "Sub1",
			"Sub2" : "Sub2"
	}
}

*/
/*
json 확장자는 비주얼 스튜디오에서 열 수 있다. 새로 생성된 파일을 비주얼 스튜디오로 드래그하여 내용을 확인해 보자.
*/

/*
json은 현업에서 자주 사용되며 네트워크, 시리얼 통신, 게임, 임베디드 등 다양한 분야에서 폭 넓게 사용되고 있다.
json 데이터 포맷은 언어, 분야를 망라하는 표준 포맷이라 어느 분야, 어느 업종에서 유용하게 사용할 수 있다.
*/

/*
C++ Jsoncpp 라이브러리는 비주얼 스튜디오 2003 이후 버전을 지원한다.
Json::Value는 ANSI 유형 문자열만 처리할 수 있어 한글을 다룰 때는 다소 불편할 수도 있다.
한글을 사용한다면 Adapt 클래스를 추가하여 언어셋을 맞추는 과정이 필요하다. 다만 여기서는 다루지 않는다.

또한 Jsoncpp는 Json 자체가 크로스 플렛폼을 지원하기에 라이브러리도 크로스 플랫폼 오픈 소스 형태로 배포되었다.

만약 C#을 다룬다면 Newtonsoft에서 제공하는 Json.NET을 사용하는 것이 편리하다.
*/
//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
 
//
//// function to find  t
//void receding(); 
////function to find to
//void approching();
//
//
////function to find v
//void frequencyAproching();
////main function
//void dopplerEffect();
//
//void frequencyReceding();
//void waveLenghtReceding();
//void waveLenghtAproching();
//
//void dopplerEffect(){
//    std::cout << "what are you calculating for : " << std::endl;
//    std::cout << "1. source and receiver approaching\n2. source and receiver receding \nNB: each of the option can be done for frquency and wavelenght" << std::endl;
//    int inp;
//    cin >> inp;
//    switch (inp)
//    {
//    case 1:
//        approching();
//        break;
//    case 2:
//        receding();
//        break;
//    default:
//        std::cout << "invalid input, try again: " << std::endl;
//        dopplerEffect();
//        break;
//    }
//}
//
//void receding(){
//    cout << "what property of light will you be calculating this effect for \n1) frequency \n2) wavelenght: ";
//    int inp;
//    cin >> inp;
//    switch (inp)
//    {
//    case 1:
//        frequencyReceding();
//        break;
//    case 2:
//        waveLenghtReceding();
//        break;
//
//    default:
//        break;
//    }
//}
//
//void approching(){
//    cout << "what property of light will you be calculating this effect for \n1) frequency \n2) wavelenght: ";
//    int inp;
//    cin >> inp;
//    switch (inp)
//    {
//    case 1:
//        frequencyAproching();
//        break;
//    case 2:
//        waveLenghtAproching();
//		break;
//    default:
//       break;
//}
//}
//
//void frequencyAproching(){
//    int inp;
//    std::cout << "What will you be finding \n1)f \n2)f* \n3) v" << std::endl;
//    cin >> inp;
//    float temp;
//    switch (inp)
//    {
//    case 1:
//        cout << "input the value of f* "<<endl;
//        cin >>fo;
//        cout << "input the value for velocity of the ";
//        vD = velocityF();
//        B = beta(vD);
//        temp = (1-B)/(1+B);
//        f = sqrt(temp) * fo;
//        cout<< "the frequency of the light recived as the source and observer are receding form eachother is : " << f<<endl;
//        break;
//    case 2:
//        cout << "input the value of f "<<endl;
//        cin >>f;
//        cout << "input the value for velocity of the ";
//        vD = velocityF();
//        B = beta(vD);
//        temp = (1+B)/(1-B);
//        fo = sqrt(temp) * f;
//        cout<< "the frequency of the light emited as the source and observer are receding form eachother is : " << f<<endl;
//        break;
//    case 3:
//        cout << "input the value of f "<<endl;
//        cin >>f;
//        cout << "input the value of f* ";
//        cin >>fo;
//        temp = pow((f/fo),2);
//        vD = ((1-temp)/(1+temp)) * c();
//        cout << "the velocity of the moving body is : "<< vD <<endl;
//    default:
//        cout << "invalid input, try again\n\n";
//        frequencyAproching();
//        break;
//    }
//}
//
//void frequencyReceding(){
//    int inp;
//    std::cout << "What will you be finding \n1)f \n2)f* \n3) v" << std::endl;
//    cin >> inp;
//    float temp;
//    switch (inp)
//    {
//    case 1:
//        cout << "input the value of f* "<<endl;
//        cin >>fo;
//        cout << "input the value for velocity of the ";
//        vD = velocityF();
//        B = beta(vD);
//        temp = (1-B)/(1+B);
//        f = sqrt(temp) * fo;
//        cout<< "the frequency of the light as the source and observer are receding form eachother is : " << f<<endl;
//        break;
//    case 2:
//        cout << "input the value of f "<<endl;
//        cin >>f;
//        cout << "input the value for velocity of the ";
//        vD = velocityF();
//        B = beta(vD);
//        temp = (1+B)/(1-B);
//        fo = sqrt(temp) * f;
//        cout<< "the frequency of the light as the source and observer are receding form eachother is : " << f<<endl;
//        break;
//    case 3:
//        cout << "input the value of f "<<endl;
//        cin >>f;
//        cout << "input the value of f* ";
//        cin >>fo;
//        temp = pow((f/fo),2);
//        vD = ((1+temp)/(1-temp)) * c();
//        cout << "the velocity of the moving body is : "<< vD <<endl;
//    default:
//        cout << "invalid input, try again\n\n";
//        frequencyReceding();
//        break;
//    }
//}
//void waveLenghtReceding(){
//	cout << "not complete";
//}
//void waveLenghtAproching(){
//	cout << "not complete";
//}


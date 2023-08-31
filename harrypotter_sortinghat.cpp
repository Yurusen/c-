#include <iostream>

int main() {

  std::cout << "A thousand years or more ago, when I was newly sewn, there lived four wizards of renown, whose names are still well known.\n\n";

  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;

  int answer1, answer2, answer3, answer4;
  
  std::cout << "======================\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "======================\n\n";

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";

  std::cin >> answer1;

  switch (answer1) {
    case 1 :
    hufflepuff++;
    break;
    case 2 :
    slytherin++;
    break;
    case 3 :
    ravenclaw++;
    break;
    case 4 :
    gryffindor++;
    break;
    default :
    std::cout << "Merlin's beard! That not one of the answers!\n";
    break;
  } 

  std::cout << "Dusk or Dawn?\n\n";

  std::cout <<"1) Dusk\n";
  std::cout <<"2) Dawn\n";

  std::cin >> answer2;

  switch (answer2) {
    case 1 :
    gryffindor++;
    ravenclaw++;
    break;
    case 2 :
    hufflepuff++;
    slytherin++;
    break;
    default :
    std::cout << "Merlin's beard! That not one of the answers!\n";
    break;
  }

  std::cout << "Which kind of instrument most pleases your ear?\n\n";

  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";

  std::cin >> answer3;

  switch (answer3) {
    case 1 :
    slytherin++;
    break;
    case 2 :
    hufflepuff++;
    break;
    case 3 :
    ravenclaw++;
    break;
    case 4 :
    gryffindor++;
    break;
    default : 
    std::cout << "Merlin's beard! That not one of the answers!\n";
    break;
  }

  std::cout << "Which road tempts you most?\n\n";

  std::cout<< "1) The wide, sunny grassy lane\n";
  std::cout<< "2) The narrow, dark, lantern-lit alley\n";
  std::cout<< "3) The twisting, leaf-strewn path through the woods\n";
  std::cout<< "4) The cobbled street lined with ancient buildings\n";

  std::cin >> answer4;

  switch (answer4) {
    case 1 :
    hufflepuff++;
    break;
    case 2 :
    slytherin++;
    break;
    case 3 :
    gryffindor++;
    break;
    case 4 : 
    ravenclaw++;
    break;
    default :
    std::cout << "Merlin's beard! That not one of the answers!\n";
    break;
  }

  //Lets determine the WINNER!!!

  int max = 0;
  std::string house;
  
  if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}

if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";  
}

if (ravenclaw > max) { 
  max = ravenclaw;
  house = "Ravenclaw"; 
}

if (slytherin > max) {  
  max = slytherin;
  house = "Slytherin";  
}

std::cout << "... And the Winner is... " << house << "!\n";

return 0;

}

#include <iostream>

using namespace std;

//int volume_of_a_cuboid(int = 1,int = 1,int = 1);

int volume_of_a_cuboid(int width=1,int height = 1,int depth = 1){
  return width * height * depth;
}

using namespace std;

int main() {
  int height,width,depth,volume;
  cout<<"Height: ";
  cin>>height;
  cout<<"Width: ";
  cin>>width;
  cout<<"Depth: ";
  cin>>depth;

  volume = volume_of_a_cuboid();
  cout<<"Volume of Cuboid is "<<volume<<" unit cube"<<endl;
  volume = volume_of_a_cuboid(width);
  cout<<"Volume of Cuboid is "<<volume<<" unit cube"<<endl;
  volume = volume_of_a_cuboid(width,height);
  cout<<"Volume of Cuboid is "<<volume<<" unit cube"<<endl;
  volume = volume_of_a_cuboid(width,height,depth);
  cout<<"Volume of Cuboid is "<<volume<<" unit cube"<<endl;
}

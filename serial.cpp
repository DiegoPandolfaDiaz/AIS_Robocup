//Maximiliano Aubel maubel@alumnos.inf.utfsm.cl
#include <stdio.h>
#include <string.h>
#include <bitset>

using namespace std;

void velToBinPack(int id, int int_velx, int int_vely, int int_velw ){
	
	char package[18] = "";
	//printf("x: %d, y: %d, w: %d\n", int_velx, int_vely, int_velw);

	string str_id = std::bitset<3>( id ).to_string();
	string str_velx = std::bitset<5>( int_velx ).to_string(); //vel x to binary
    	string str_vely = std::bitset<5>( int_vely ).to_string(); //vel y to binary
	string str_velw = std::bitset<5>( int_velw ).to_string(); //vel w to binary
	
	char *c_id   = &str_id[0u];
	char *c_velx = &str_velx[0u]; //magia negra
	char *c_vely = &str_vely[0u];
	char *c_velw = &str_velw[0u];

	memcpy( package    , c_id  , 4 );
	memcpy( package + 3, c_velx, 6 ); //aritmágica de ptrs
	memcpy( package + 8, c_vely, 6 );
	memcpy( package +13, c_velw, 6 );

	printf("%s", package);

	return;
}

int main(int argc, char const *argv[])
{
	velToBinPack(1, 11,  0, 0);
	velToBinPack(2, 11,  1, 0);
	velToBinPack(3, 13,  0, 1);
	velToBinPack(4,  0,  0, 0);
	velToBinPack(5,  6,  2, 1);
	velToBinPack(6, 10,  1, 1);
	printf("\nlisto el pack");

	return 0;
}

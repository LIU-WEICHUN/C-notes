#include <stdio.h>

void print_binary_vector(unsigned char var){
    // assume undigned char is 8bits
    for(int i=0; i<8; i++, var<<=1){
        if((var&0b10000000) == 0b10000000){ //(var&0x80) == 0x80
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
    printf("\n");
}

int main(){
    unsigned char vector = 133;   //8bits
    unsigned char matrix_polar[8] = {
                                    0b11111111,
                                    0b01010101,
                                    0b00110011,
                                    0b00010001,
                                    0b00001111,
                                    0b00000101,
                                    0b00000011,
                                    0b00000001
                                    }; 

    //scanf("%d", &vector);
    print_binary_vector(vector);
    

    return 0;
}

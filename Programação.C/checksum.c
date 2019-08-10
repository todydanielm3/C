#include <stdio.h>


int main(void)
{
    int check_sum = 0;              //checksum
    int lcheck_sum = 0;             //left checksum bits
    int rcheck_sum = 0;             //right checksum bits
    short int mask = 0x00FF;            // 16 bit mask
    int length = 0;

    //Create the frame - sequence number (S) and checksum 1 byte

    int c;
    //calculate the checksum
    for (c = 0; c < length; c++)
    {
        check_sum = (int)buff[c] + check_sum;
        printf("\n Check Sum %d ", check_sum);      //debug
    }

    printf("\nfinal Check Sum %d", check_sum);      //debug

    //Take checksum and make it a 8 bit checksum

    if (check_sum > 255)            //if greater than 8 bits then encode bits
    {

        lcheck_sum = check_sum;
        lcheck_sum >> 8;    //shift 8 bits to the right

        rcheck_sum = check_sum & mask;
        check_sum = lcheck_sum + rcheck_sum;
    }


    //Take the complement
    check_sum = ~check_sum;


    //Truncate - to get rid of the 8 bits to the right and keep the 8 LSB's
    check_sum = check_sum & mask;

    printf("\nTruncated and complemented final Check Sum %d\n",check_sum);
    return 0;
}

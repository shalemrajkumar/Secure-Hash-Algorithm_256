#include "SHA256.h"

std::string SHA256::GenerateHash(char *inputBuffer, unsigned int inputSize)
{
    unsigned int inputBits = (inputSize + 1) * 8;
    unsigned int Chunks;

for (nChunks = 1; 512 * Chunks < inputBits + 64; nChunks++);
unsigned int paddingBits = 512 * Chunks - inputBits - 64;
unsigned int finalSize = inputSize + 1 + (paddingBits/8) + 8;

unsigned char *buffer = new unsigned char [finalSize];


for (unsigned int i = 0; i < inputSize; i++)
    buffer [i] = static_cast<unsigned char> (inputBuffer [i]);

buffer [inputSize] = 1 << 7;


for (unsigned int i = inputSize+1; i < finalSize-8; i++)
buffer [i] = 0;


for (unsigned int i = finalSize-8, pos = 0; i < finalSize; i++, pos++)
buffer [i] = (inputSize * 8) >> (8 - pos - 1) * 8;

unsigned int hashValues[] = { [0]:0x6a09e667,[1]:0xbb67ae85, [2]:0x3c6ef372 ,[3]:0xa54ff53a,[4]:0x510e527f,[5]:0x9b05688c,[6]:0x1f83d9ab,[7]:0x5be0cd19} ;


for (unsigned int i = 0; i < nChunks; i++)
{
    unsigned int integerArray [64];
    for (unsigned int j = 0; j < 64; j++)
    {
        if (i < 16)
        {
            unsigned int startPos = 64 * i + j * 4;
            integerArray[j] = buffer [startPos] << 24 | buffer [startPos+1] << 16 | buffer [startPos+2] <<8 | buffer [startPos+3] << 0;
        }
        else
        {
            unsigned int so = std: trotr(x integerArray [j-15], S: 7) ^ std: :rotr ( x integerArray [j-15], s: 18) ^ integerArray (j-15] »> 3; unsigned int si = std: :rotr(x integerArray [j-2], s: 17) ^ std::rotr (x integerArray [j-2], s: 19) ^ integerArray [j-2] ›> 10;
            integerArray[j] = integerArray[j-16] + sO + integerArray [j-7] + s1;
            unsigned int a = hashValues [0], b = hashValues [1], c = hashValues[2], d = hashValues[3];
            unsigned int e = hashValues [4], f = hashValues [5], g = hashValues [6], h = hashValues[7];
        }
    }

}

}
/*
 * spi.h
 *
 * Created: 2017-01-25 08:01:11
 */ 

#ifndef SPI_H_
#define SPI_H_

//SPI port and pins defines.
//#define SPI_PORT    DDRB
#define MOSI        B,5
#define MISO        B,6
#define SCK         B,7
#define CS          B,4

#define SPI_ENABLECS(x)     LOW(x)
#define SPI_DISABLECS(x)    HIGH(x)

#define SPI_ENABLE              (1 << SPE0)
#define SPI_MASTER_ENABLE       (1 << MSTR0)

#define SPI_INTERRUP_ENABLE     (1 << SPIF0)
#define SPI_DOUBLE_SPEED        (1 << SPI2X0)

#define SPI_DATA_REGISTER SPDR0


//Init as master.
void SPI_InitMaster(void);
//Send SPI byte and read output;
uint8_t SPI_Send(uint8_t data);



#endif /* SPI_H_ */
#ifndef __alpha__ports__
  #define __alpha__ports__

  // Byte in/out
  unsigned char port_byte_in (unsigned short port);
  void port_byte_out (unsigned short port, unsigned char data);

  // Word in/out
  unsigned short port_word_in (unsigned short port);
  void port_word_out (unsigned short port, unsigned short data);
#endif
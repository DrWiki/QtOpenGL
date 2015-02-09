#ifndef KABSTRACTREADER_H
#define KABSTRACTREADER_H

class KAbstractReader
{
public:
  static const int EndOfFile = -1;
  virtual int next() = 0;
};

#endif // KABSTRACTREADER_H

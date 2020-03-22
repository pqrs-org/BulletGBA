#ifndef FIXED_HPP
#define FIXED_HPP

#ifdef FIXEDNUM_TEST
#define Div(X,Y) ((X) / (Y))
#else
#include <gba_systemcalls.h>
#endif

/*
  [about fixed-point]

  - signed 16bit. (because multiple operator need twice-length bit. Using 32bit at multiple operator).

    range: -255 ... 255.

  - integer bit = 9, decimal bit = 7.

  - 0123456789012345
    iiiiiiiiiddddddd

     ---------------
     i: integer bit,
     d: decimal bit
     ---------------

 */

typedef signed short int fixednum;
typedef signed int _fixednum_double; // Use in fixed_multiply

extern const fixednum fixedTableSin[];
extern const fixednum fixedTableAtan[];

unsigned long genrand_int32(void);
long genrand_int31(void);
void init_genrand(unsigned long s);

// ------------------------------------------------------------
class _FixedNum
{
public:
  explicit _FixedNum(fixednum _value) : value(_value) {}
  fixednum value;
};
// ------------------------------------------------------------

class FixedPointNum
{
public:
  enum {
    FIXEDNUMBIT = 16,

    //SHIFTBIT = 7,
    SHIFTBIT = 6,

    ANGLEBIT = 8,
    ANGLENUM = (1 << ANGLEBIT),
    ATANBIT = 8,
  };

  FixedPointNum(void) {}
  FixedPointNum(double val) : value(static_cast<fixednum>(val * (1 << SHIFTBIT))) {}
  FixedPointNum(int val) : value(val << SHIFTBIT) {};
  FixedPointNum(FixedPointNum numerator, int denominator) {
    numerator /= denominator;
    value = numerator.getRawValue();
  }
  FixedPointNum(_FixedNum val) : value(val.value) {}

  FixedPointNum &operator+=(FixedPointNum fp) {this->value += fp.value; return *this;}
  const FixedPointNum operator+(FixedPointNum fp) const {return FixedPointNum(*this) += fp;}

  FixedPointNum &operator-=(FixedPointNum fp) {this->value -= fp.value; return *this;}
  const FixedPointNum operator-(FixedPointNum fp) const {return FixedPointNum(*this) -= fp;}

  FixedPointNum &operator*=(FixedPointNum fp) {this->value = multiply(this->value, fp.value); return *this;}
  const FixedPointNum operator*(FixedPointNum fp) const {return FixedPointNum(*this) *= fp;}

  FixedPointNum &operator/=(FixedPointNum fp) {this->value = divide(this->value, fp.value); return *this;}
  const FixedPointNum operator/(FixedPointNum fp) const {return FixedPointNum(*this) /= fp;}

  FixedPointNum &operator>>=(int val) {this->value >>= val; return *this;}
  const FixedPointNum operator>>(int val) const {return FixedPointNum(*this) >>= val;}

  bool operator==(FixedPointNum fp) const {return this->value == fp.value;}
  bool operator==(int val) const {return this->value == (val << SHIFTBIT);}
  bool operator!=(FixedPointNum fp) const {return this->value != fp.value;}
  bool operator!=(int val) const {return this->value != (val << SHIFTBIT);}
  bool operator<(FixedPointNum fp) const {return this->value < fp.value;}
  bool operator<(int val) const {return this->value < (val << SHIFTBIT);}
  bool operator>(FixedPointNum fp) const {return this->value > fp.value;}
  bool operator>(int val) const {return this->value > (val << SHIFTBIT);}
  bool operator<=(FixedPointNum fp) const {return this->value <= fp.value;}
  bool operator<=(int val) const {return this->value <= (val << SHIFTBIT);}
  bool operator>=(FixedPointNum fp) const {return this->value >= fp.value;}
  bool operator>=(int val) const {return this->value >= (val << SHIFTBIT);}

  fixednum getRawValue(void) const {return this->value;}
  int toInt() const {return this->value >> SHIFTBIT;}
#if 0
  // comment out to prevent implicit type convertion.
  operator int() const {return toInt();}
#endif

  const FixedPointNum &setNegative(void) {this->value = -(this->value); return *this;}
  const FixedPointNum operator-(void) const {return FixedPointNum(*this).setNegative();}

  // ------------------------------------------------------------
  static FixedPointNum random() {return FixedPointNum(static_cast<_FixedNum>(genrand_int32() & ((1 << SHIFTBIT) - 1)));}

  static FixedPointNum sin(FixedPointNum angle) {
    return FixedPointNum(_FixedNum(fixedTableSin[angle.toInt() & (ANGLENUM - 1)]));
  }
  static FixedPointNum cos(FixedPointNum angle) {
    return FixedPointNum(_FixedNum(fixedTableSin[(angle.toInt() + ANGLENUM / 4) & (ANGLENUM - 1)]));
  }
  static FixedPointNum atan(FixedPointNum y, FixedPointNum x);

  static FixedPointNum degree2angle(FixedPointNum angle) {
    return angle * _FixedNum(FixedPointNum::divide_const<ANGLENUM, 360>());
  }
  static FixedPointNum degree2angle(double angle) {
    return FixedPointNum(angle * 256 / 360);
  }

private:
  fixednum multiply(fixednum fn1, fixednum fn2) const {
    return static_cast<_fixednum_double>(fn1 * fn2) >> SHIFTBIT;
  }

  fixednum divide(fixednum fn1, fixednum fn2) const {
    if ((fn1 == 0) | (fn2 == 0)) {
      return 0;
    }

    fixednum val = Div(static_cast<_fixednum_double>(fn1 << SHIFTBIT), fn2);
    if (val == 0) {
      if (fn1 * fn2 > 0) {
        val = 1;
      } else {
        val = -1;
      }
    }
    return val;
  }

  template <fixednum fn1, fixednum fn2> static fixednum divide_const(void) {
    if (fn1 == 0 || fn2 == 0) {
      return 0;
    }
    return static_cast<_fixednum_double>(fn1 << SHIFTBIT) / fn2;
  }

  fixednum value;
};

inline const FixedPointNum operator+(double val, FixedPointNum fp) {return fp + val;}
inline const FixedPointNum operator-(double val, FixedPointNum fp) {return - fp + val;}
inline const FixedPointNum operator*(double val, FixedPointNum fp) {return fp * val;}

#endif

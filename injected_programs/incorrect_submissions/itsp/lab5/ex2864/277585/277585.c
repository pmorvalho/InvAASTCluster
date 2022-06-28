#include "vars_info.h"
#include<stdio.h>

int check_prime(int _int_0)
{
  _function_1_1(_int_0);
  {
    int _int_1;
    for (_int_1 = 2; _loop_3_2(_int_0, _int_1), _int_1 < _int_0; _int_1 = _int_1 + 1)
    {
      if ((_int_0 % _int_1) == 0)
      {
        _if_5_3(_int_0, _int_1);
        {
          {
            _return_7_4(_int_0, _int_1);
            return 0;
          }
          _scope_6_5(_int_0, _int_1);
        }
      }

      _scope_4_6(_int_0, _int_1);
    }

    {
      _return_3_7(_int_0, _int_1);
      return 1;
    }
    _scope_2_8(_int_0, _int_1);
  }
}

int main()
{
  _function_1_9();
  {
    int _int_0;
    int _int_1;
    int _int_2;
    scanf("%d%d", &_int_0, &_int_1);
    _int_2 = _int_0;
    while (_loop_3_10(_int_0, _int_1, _int_2), (_int_2 >= _int_0) && (_int_2 <= _int_1))
    {
      int _int_3;
      _int_3 = check_prime(_int_2);
      if (_int_3 == 1)
      {
        _if_5_11(_int_0, _int_1, _int_2, _int_3);
        {
          printf("%d ", _int_2);
          _scope_6_12(_int_0, _int_1, _int_2, _int_3);
        }
      }

      _int_2 = _int_2 + 1;
      _scope_4_13(_int_0, _int_1, _int_2, _int_3);
    }

    {
      _return_3_14(_int_0, _int_1, _int_2);
      return 0;
    }
    _scope_2_15(_int_0, _int_1, _int_2);
  }
}


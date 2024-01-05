#include "../headers/math_kernel.h"
class PHASE_REALISATION
{
  public:
    FLOAT D;
    FLOAT ALPHA = PI;
    std::vector<int> N;
    std::vector<FLOAT> G;
    std::vector<FLOAT> (*eqn)(int, int);
    

  PHASE_REALISATION
  (
    FLOAT d,
    FLOAT delta,
    FLOAT alpha,
    std::vector<int> n,
    std::vector<FLOAT> g
  )
  {
    D = d;
    ALPHA *= alpha;
    N = n;
    G = g;
  }

  void plotter(){

  }
};
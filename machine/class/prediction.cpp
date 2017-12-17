#include "object_utils.hpp"
#include "memory.hpp"

#include "class/prediction.hpp"

namespace rubinius {
  void Prediction::bootstrap(STATE) {
    GO(prediction).set(state->memory()->new_class<Class, Prediction>(
          state, G(rubinius), "Prediction"));
  }

  Prediction* Prediction::create(STATE) {
    return state->memory()->new_object<Prediction>(state, G(prediction));
  }
}

#include "instructions/cast_array.hpp"

intptr_t rubinius::int_cast_array(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
  if(instruction_cast_array(state, call_frame)) {
    call_frame->next_ip();
  } else {
    call_frame->exception_ip();
  }

  return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
}
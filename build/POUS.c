void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





inline TIME __LADDERLOGIC_SUB_TIME1(BOOL EN,
  TIME IN1,
  TIME IN2,
  LADDERLOGIC *data__)
{
  TIME __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_SUB_TIME129_ENO,);
  __res = SUB_TIME(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_SUB_TIME129_ENO,,__TMP_ENO);
  return __res;
}

inline TIME __LADDERLOGIC_SUB_TIME2(BOOL EN,
  TIME IN1,
  TIME IN2,
  LADDERLOGIC *data__)
{
  TIME __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_SUB_TIME23_ENO,);
  __res = SUB_TIME(EN,
    &__TMP_ENO,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_SUB_TIME23_ENO,,__TMP_ENO);
  return __res;
}

void LADDERLOGIC_init__(LADDERLOGIC *data__, BOOL retain) {
  __INIT_VAR(data__->B_JOG_UP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_JOG_DOWN,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_JOG_CW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_JOG_CCW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_START,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MAINT_MODE,1,retain)
  __INIT_VAR(data__->LIM_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIM_2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIM_3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIM_4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARD_CHECKPOINT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_STOP_CYCLE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_SOFT_STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->B_ESTOP,1,retain)
  __INIT_VAR(data__->LED_MAINT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LED_AUTO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LED_ESTOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LED_RESET,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LED_POS_DIS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LED_HOMING,0,retain)
  __INIT_VAR(data__->LED_RUNNING,0,retain)
  __INIT_VAR(data__->PROG_ESTOP,0,retain)
  __INIT_VAR(data__->POWER_ON_FLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BEGIN_HOMING_FLAG,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ARD_LIM_1,data__->ARD_LIM_1,retain)
  __INIT_EXTERNAL(BOOL,ARD_LIM_2,data__->ARD_LIM_2,retain)
  __INIT_VAR(data__->STOP_CYCLE_F,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLINK_ESTOP,0,retain)
  __INIT_VAR(data__->SOLID_ESTOP,0,retain)
  __INIT_VAR(data__->BLINK_RESET_SLOW,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLINK_RESET_FAST,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TURN_OFF_RESET_LED,1,retain)
  __INIT_VAR(data__->CAN_RESET,0,retain)
  __INIT_VAR(data__->CAN_HOME,0,retain)
  __INIT_VAR(data__->HOMING_SEQ_1_1,0,retain)
  __INIT_VAR(data__->HOMING_SEQ_1_2,0,retain)
  __INIT_EXTERNAL(BOOL,ARD_HOMING_2,data__->ARD_HOMING_2,retain)
  __INIT_VAR(data__->CAN_RESET_SOFT_STOP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SOLID_HOMING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLINK_HOMING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BLINK_RUNNING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SOLID_RUNNING,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CAN_AUTO_MOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BEGIN_AUTO_MOVE,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ARD_AUTO_MOVING,data__->ARD_AUTO_MOVING,retain)
  __INIT_VAR(data__->CAN_AUTO_UP,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ARD_AUTO_UP,data__->ARD_AUTO_UP,retain)
  __INIT_VAR(data__->CAN_AUTO_SPIN,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ARD_AUTO_SPIN,data__->ARD_AUTO_SPIN,retain)
  __INIT_VAR(data__->CAN_AUTO_DOWN,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ARD_AUTO_DOWN,data__->ARD_AUTO_DOWN,retain)
  __INIT_VAR(data__->CAN_AUTO_LOADING,__BOOL_LITERAL(FALSE),retain)
  __INIT_EXTERNAL(BOOL,ARD_AUTO_LOADING,data__->ARD_AUTO_LOADING,retain)
  __INIT_EXTERNAL(BOOL,HOMING,data__->HOMING,retain)
  __INIT_EXTERNAL(BOOL,M_MAINT_UP,data__->M_MAINT_UP,retain)
  __INIT_EXTERNAL(BOOL,M_MAINT_DOWN,data__->M_MAINT_DOWN,retain)
  __INIT_EXTERNAL(BOOL,M_MAINT_CW,data__->M_MAINT_CW,retain)
  __INIT_EXTERNAL(BOOL,M_MAINT_CCW,data__->M_MAINT_CCW,retain)
  __INIT_EXTERNAL(BOOL,ARD_M1_HOME,data__->ARD_M1_HOME,retain)
  __INIT_EXTERNAL(BOOL,ARD_M2_HOME,data__->ARD_M2_HOME,retain)
  __INIT_EXTERNAL(BOOL,ARD_SOFT_STOP,data__->ARD_SOFT_STOP,retain)
  __INIT_EXTERNAL(BOOL,ARD_ESTOPPED,data__->ARD_ESTOPPED,retain)
  __INIT_EXTERNAL(BOOL,ARD_MAINT_MODE,data__->ARD_MAINT_MODE,retain)
  TON_init__(&data__->TON3,retain);
  TOF_init__(&data__->TOF3,retain);
  TON_init__(&data__->TON4,retain);
  TOF_init__(&data__->TOF4,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TOF_init__(&data__->TOF5,retain);
  TON_init__(&data__->TON5,retain);
  TOF_init__(&data__->TOF6,retain);
  TON_init__(&data__->TON6,retain);
  __INIT_VAR(data__->_TMP_SUB_TIME129_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SUB_TIME129_OUT,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->_TMP_SUB_TIME23_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SUB_TIME23_OUT,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->_TMP_MAX134_OUT,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
}

// Code part
void LADDERLOGIC_body__(LADDERLOGIC *data__) {
  // Initialise TEMP variables

  __SET_EXTERNAL(data__->,M_MAINT_CW,,((((!(__GET_VAR(data__->B_JOG_CCW,)) && __GET_VAR(data__->B_JOG_CW,)) && !(__GET_EXTERNAL(data__->HOMING,))) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_EXTERNAL(data__->,M_MAINT_CCW,,((((__GET_VAR(data__->B_JOG_CCW,) && !(__GET_VAR(data__->B_JOG_CW,))) && !(__GET_EXTERNAL(data__->HOMING,))) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_EXTERNAL(data__->,ARD_MAINT_MODE,,((!(__GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  if ((!(__GET_VAR(data__->PROG_ESTOP,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,)))) {
    __SET_EXTERNAL(data__->,ARD_ESTOPPED,,__BOOL_LITERAL(TRUE));
  };
  __SET_EXTERNAL(data__->,M_MAINT_UP,,((((!(__GET_VAR(data__->B_JOG_DOWN,)) && __GET_VAR(data__->B_JOG_UP,)) && !(__GET_EXTERNAL(data__->HOMING,))) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_EXTERNAL(data__->,M_MAINT_DOWN,,((((__GET_VAR(data__->B_JOG_DOWN,) && !(__GET_VAR(data__->B_JOG_UP,))) && !(__GET_EXTERNAL(data__->HOMING,))) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_VAR(data__->,POWER_ON_FLAG,,(((((__GET_VAR(data__->B_RESET,) && __GET_VAR(data__->MAINT_MODE,)) && __GET_VAR(data__->CAN_RESET,)) && !(__GET_VAR(data__->PROG_ESTOP,))) && __GET_VAR(data__->B_ESTOP,)) && __GET_EXTERNAL(data__->ARD_ESTOPPED,)));
  if (((!(__GET_VAR(data__->PROG_ESTOP,)) && !(__GET_VAR(data__->B_ESTOP,))) && __GET_EXTERNAL(data__->ARD_ESTOPPED,))) {
    __SET_VAR(data__->,CAN_RESET,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,BLINK_RESET_SLOW,,((((__GET_VAR(data__->MAINT_MODE,) && __GET_VAR(data__->CAN_RESET,)) && !(__GET_VAR(data__->PROG_ESTOP,))) && __GET_VAR(data__->B_ESTOP,)) && __GET_EXTERNAL(data__->ARD_ESTOPPED,)));
  __SET_VAR(data__->,BEGIN_HOMING_FLAG,,((__GET_VAR(data__->B_START,) && __GET_VAR(data__->MAINT_MODE,)) && __GET_VAR(data__->CAN_HOME,)));
  __SET_VAR(data__->,BLINK_RESET_FAST,,(__GET_VAR(data__->MAINT_MODE,) && __GET_VAR(data__->CAN_HOME,)));
  __SET_VAR(data__->TON3.,EN,,__GET_VAR(data__->BLINK_ESTOP,));
  __SET_VAR(data__->TON3.,IN,,!(__GET_VAR(data__->LED_ESTOP,)));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->TOF3.,EN,,__GET_VAR(data__->TON3.ENO,));
  __SET_VAR(data__->TOF3.,IN,,__GET_VAR(data__->TON3.Q,));
  __SET_VAR(data__->TOF3.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TOF_body__(&data__->TOF3);
  __SET_VAR(data__->,LED_ESTOP,,(__GET_VAR(data__->SOLID_ESTOP,) || __GET_VAR(data__->TOF3.Q,)));
  __SET_VAR(data__->,BLINK_ESTOP,,(((!(__GET_VAR(data__->CAN_RESET,)) && !(__GET_VAR(data__->PROG_ESTOP,))) && __GET_VAR(data__->B_ESTOP,)) && __GET_EXTERNAL(data__->ARD_ESTOPPED,)));
  __SET_VAR(data__->,SOLID_ESTOP,,((!(__GET_VAR(data__->PROG_ESTOP,)) && !(__GET_VAR(data__->B_ESTOP,))) && __GET_EXTERNAL(data__->ARD_ESTOPPED,)));
  __SET_VAR(data__->,_TMP_SUB_TIME129_OUT,,__LADDERLOGIC_SUB_TIME1(
    (BOOL)__GET_VAR(data__->BLINK_RESET_SLOW,),
    (TIME)__time_to_timespec(1, 500, 0, 0, 0, 0),
    (TIME)__time_to_timespec(1, 0, 0, 0, 0, 0),
    data__));
  __SET_VAR(data__->,_TMP_SUB_TIME23_OUT,,__LADDERLOGIC_SUB_TIME2(
    (BOOL)__GET_VAR(data__->BLINK_RESET_FAST,),
    (TIME)__time_to_timespec(1, 500, 0, 0, 0, 0),
    (TIME)__time_to_timespec(1, 350, 0, 0, 0, 0),
    data__));
  __SET_VAR(data__->,_TMP_MAX134_OUT,,MAX__TIME__TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (TIME)__GET_VAR(data__->_TMP_SUB_TIME129_OUT,),
    (TIME)__GET_VAR(data__->_TMP_SUB_TIME23_OUT,)));
  __SET_VAR(data__->TON4.,EN,,(__GET_VAR(data__->BLINK_RESET_FAST,) || __GET_VAR(data__->BLINK_RESET_SLOW,)));
  __SET_VAR(data__->TON4.,IN,,!(__GET_VAR(data__->LED_RESET,)));
  __SET_VAR(data__->TON4.,PT,,__GET_VAR(data__->_TMP_MAX134_OUT,));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->TOF4.,EN,,__GET_VAR(data__->TON4.ENO,));
  __SET_VAR(data__->TOF4.,IN,,__GET_VAR(data__->TON4.Q,));
  __SET_VAR(data__->TOF4.,PT,,__GET_VAR(data__->_TMP_MAX134_OUT,));
  TOF_body__(&data__->TOF4);
  __SET_VAR(data__->,LED_RESET,,__GET_VAR(data__->TOF4.Q,));
  if ((!(__GET_VAR(data__->B_ESTOP,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,)))) {
    __SET_VAR(data__->,PROG_ESTOP,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->B_ESTOP,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,)))) {
    __SET_EXTERNAL(data__->,ARD_ESTOPPED,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->POWER_ON_FLAG,)) {
    __SET_VAR(data__->,PROG_ESTOP,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->POWER_ON_FLAG,)) {
    __SET_VAR(data__->,CAN_RESET,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->POWER_ON_FLAG,)) {
    __SET_VAR(data__->,CAN_HOME,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->POWER_ON_FLAG,)) {
    __SET_EXTERNAL(data__->,ARD_ESTOPPED,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,TURN_OFF_RESET_LED,,((__GET_VAR(data__->B_START,) && __GET_VAR(data__->MAINT_MODE,)) && __GET_VAR(data__->CAN_HOME,)));
  if (__GET_VAR(data__->BEGIN_HOMING_FLAG,)) {
    __SET_VAR(data__->,CAN_HOME,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->BEGIN_HOMING_FLAG,)) {
    __SET_EXTERNAL(data__->,HOMING,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_VAR(data__->,CAN_HOME,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_EXTERNAL(data__->,HOMING,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->BLINK_RESET_FAST,)) && !(__GET_VAR(data__->BLINK_RESET_SLOW,)))) {
    __SET_VAR(data__->,LED_RESET,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->ARD_ESTOPPED,))) {
    __SET_VAR(data__->,LED_ESTOP,,__BOOL_LITERAL(FALSE));
  };
  __SET_EXTERNAL(data__->,ARD_LIM_1,,((((__GET_VAR(data__->LIM_1,) && __GET_VAR(data__->HOMING_SEQ_1_1,)) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_EXTERNAL(data__->,ARD_LIM_2,,((((__GET_VAR(data__->LIM_2,) && __GET_VAR(data__->HOMING_SEQ_1_2,)) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_EXTERNAL(data__->,ARD_M1_HOME,,((((!(__GET_VAR(data__->LIM_1,)) && __GET_VAR(data__->HOMING_SEQ_1_1,)) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_EXTERNAL(data__->,ARD_M2_HOME,,((((!(__GET_VAR(data__->LIM_2,)) && __GET_VAR(data__->HOMING_SEQ_1_2,)) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  if (__GET_VAR(data__->BEGIN_HOMING_FLAG,)) {
    __SET_VAR(data__->,HOMING_SEQ_1_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->BEGIN_HOMING_FLAG,)) {
    __SET_VAR(data__->,HOMING_SEQ_1_2,,__BOOL_LITERAL(TRUE));
  };
  if (((((__GET_VAR(data__->LIM_1,) && __GET_VAR(data__->HOMING_SEQ_1_1,)) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,)))) {
    __SET_VAR(data__->,HOMING_SEQ_1_1,,__BOOL_LITERAL(FALSE));
  };
  if (((((__GET_VAR(data__->LIM_2,) && __GET_VAR(data__->HOMING_SEQ_1_2,)) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,)))) {
    __SET_VAR(data__->,HOMING_SEQ_1_2,,__BOOL_LITERAL(FALSE));
  };
  __SET_EXTERNAL(data__->,ARD_HOMING_2,,((((!(__GET_VAR(data__->HOMING_SEQ_1_2,)) && !(__GET_VAR(data__->HOMING_SEQ_1_1,))) && __GET_EXTERNAL(data__->HOMING,)) && __GET_VAR(data__->MAINT_MODE,)) && !(__GET_EXTERNAL(data__->ARD_ESTOPPED,))));
  __SET_VAR(data__->,SOLID_HOMING,,__GET_EXTERNAL(data__->HOMING,));
  if ((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_HOMING_2,))) {
    __SET_EXTERNAL(data__->,HOMING,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_HOMING_2,))) {
    __SET_VAR(data__->,CAN_AUTO_MOVE,,__BOOL_LITERAL(TRUE));
  };
  if ((((__GET_VAR(data__->B_START,) && __GET_VAR(data__->B_RESET,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_VAR(data__->CAN_AUTO_MOVE,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_UP,,__BOOL_LITERAL(TRUE));
  };
  if ((((__GET_VAR(data__->B_START,) && __GET_VAR(data__->B_RESET,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_VAR(data__->CAN_AUTO_MOVE,))) {
    __SET_VAR(data__->,CAN_AUTO_MOVE,,__BOOL_LITERAL(FALSE));
  };
  if ((((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_AUTO_UP,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_SPIN,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON0.,IN,,((__GET_EXTERNAL(data__->ARD_AUTO_SPIN,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,)));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 30000, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,CAN_AUTO_DOWN,,__GET_VAR(data__->TON0.Q,));
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_DOWN,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,CAN_AUTO_LOADING,,(((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_AUTO_DOWN,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,)));
  if ((((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_AUTO_DOWN,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_LOADING,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_VAR(data__->,HOMING_SEQ_1_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_VAR(data__->,HOMING_SEQ_1_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_VAR(data__->,CAN_AUTO_MOVE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_UP,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_MOVING,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_DOWN,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_LOADING,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,SOLID_RUNNING,,(((((__GET_EXTERNAL(data__->ARD_AUTO_DOWN,) || __GET_EXTERNAL(data__->ARD_AUTO_LOADING,)) || __GET_EXTERNAL(data__->ARD_AUTO_SPIN,)) || __GET_EXTERNAL(data__->ARD_AUTO_UP,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,)));
  if (__GET_VAR(data__->CAN_AUTO_MOVE,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_MOVING,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,BEGIN_AUTO_MOVE,,(((__GET_VAR(data__->B_START,) && __GET_VAR(data__->B_RESET,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_VAR(data__->CAN_AUTO_MOVE,)));
  if (((__GET_VAR(data__->CAN_AUTO_SPIN,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_UP,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,CAN_AUTO_SPIN,,(((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_AUTO_UP,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,)));
  if (((__GET_VAR(data__->CAN_AUTO_DOWN,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_SPIN,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->CAN_AUTO_LOADING,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_DOWN,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON1.,IN,,((__GET_EXTERNAL(data__->ARD_AUTO_LOADING,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,)));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 18000, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,CAN_AUTO_UP,,__GET_VAR(data__->TON1.Q,));
  if (((__GET_VAR(data__->CAN_AUTO_UP,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_LOADING,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_EXTERNAL(data__->ARD_ESTOPPED,)) {
    __SET_EXTERNAL(data__->,ARD_AUTO_SPIN,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,BLINK_RUNNING,,(((!(__GET_VAR(data__->B_START,)) && __GET_VAR(data__->B_RESET,)) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_VAR(data__->CAN_AUTO_MOVE,)));
  __SET_VAR(data__->TON5.,EN,,__GET_VAR(data__->BLINK_RUNNING,));
  __SET_VAR(data__->TON5.,IN,,!(__GET_VAR(data__->LED_RUNNING,)));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  __SET_VAR(data__->TOF5.,EN,,__GET_VAR(data__->TON5.ENO,));
  __SET_VAR(data__->TOF5.,IN,,__GET_VAR(data__->TON5.Q,));
  __SET_VAR(data__->TOF5.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TOF_body__(&data__->TOF5);
  __SET_VAR(data__->,LED_RUNNING,,(__GET_VAR(data__->SOLID_RUNNING,) || __GET_VAR(data__->TOF5.Q,)));
  if ((!(__GET_EXTERNAL(data__->ARD_AUTO_MOVING,)) && !(__GET_VAR(data__->CAN_AUTO_MOVE,)))) {
    __SET_VAR(data__->,LED_RUNNING,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,BLINK_HOMING,,(((!(__GET_EXTERNAL(data__->ARD_SOFT_STOP,)) && !(__GET_VAR(data__->MAINT_MODE,))) && !(__GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) && !(__GET_VAR(data__->CAN_AUTO_MOVE,))));
  __SET_VAR(data__->TON6.,EN,,__GET_VAR(data__->BLINK_HOMING,));
  __SET_VAR(data__->TON6.,IN,,!(__GET_VAR(data__->LED_HOMING,)));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->TOF6.,EN,,__GET_VAR(data__->TON6.ENO,));
  __SET_VAR(data__->TOF6.,IN,,__GET_VAR(data__->TON6.Q,));
  __SET_VAR(data__->TOF6.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TOF_body__(&data__->TOF6);
  __SET_VAR(data__->,LED_HOMING,,(__GET_VAR(data__->SOLID_HOMING,) || __GET_VAR(data__->TOF6.Q,)));
  if (((__GET_VAR(data__->B_SOFT_STOP,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_SOFT_STOP,,__BOOL_LITERAL(TRUE));
  };
  if (((__GET_VAR(data__->B_SOFT_STOP,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_UP,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->B_SOFT_STOP,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_SPIN,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->B_SOFT_STOP,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_DOWN,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->B_SOFT_STOP,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_LOADING,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_SOFT_STOP,))) {
    __SET_VAR(data__->,CAN_AUTO_MOVE,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CAN_RESET_SOFT_STOP,)) {
    __SET_EXTERNAL(data__->,ARD_SOFT_STOP,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,CAN_RESET_SOFT_STOP,,(__GET_VAR(data__->ARD_CHECKPOINT,) && __GET_EXTERNAL(data__->ARD_SOFT_STOP,)));
  if (((__GET_VAR(data__->LED_HOMING,) && !(__GET_VAR(data__->SOLID_HOMING,))) && !(__GET_VAR(data__->BLINK_HOMING,)))) {
    __SET_VAR(data__->,LED_HOMING,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->LED_RUNNING,) && !(__GET_VAR(data__->SOLID_RUNNING,))) && !(__GET_VAR(data__->BLINK_RUNNING,)))) {
    __SET_VAR(data__->,LED_RUNNING,,__BOOL_LITERAL(FALSE));
  };
  if (((__GET_VAR(data__->B_STOP_CYCLE,) && !(__GET_VAR(data__->MAINT_MODE,))) && __GET_EXTERNAL(data__->ARD_AUTO_MOVING,))) {
    __SET_VAR(data__->,STOP_CYCLE_F,,__BOOL_LITERAL(TRUE));
  };
  if ((!(__GET_VAR(data__->STOP_CYCLE_F,)) && __GET_VAR(data__->TON1.Q,))) {
    __SET_EXTERNAL(data__->,ARD_AUTO_UP,,__BOOL_LITERAL(TRUE));
  };
  if (((((!(__GET_EXTERNAL(data__->ARD_AUTO_LOADING,)) && !(__GET_EXTERNAL(data__->ARD_AUTO_SPIN,))) && !(__GET_EXTERNAL(data__->ARD_AUTO_DOWN,))) && !(__GET_EXTERNAL(data__->ARD_AUTO_UP,))) && __GET_VAR(data__->STOP_CYCLE_F,))) {
    __SET_VAR(data__->,CAN_AUTO_MOVE,,__BOOL_LITERAL(TRUE));
  };
  if (((((!(__GET_EXTERNAL(data__->ARD_AUTO_LOADING,)) && !(__GET_EXTERNAL(data__->ARD_AUTO_SPIN,))) && !(__GET_EXTERNAL(data__->ARD_AUTO_DOWN,))) && !(__GET_EXTERNAL(data__->ARD_AUTO_UP,))) && __GET_VAR(data__->STOP_CYCLE_F,))) {
    __SET_VAR(data__->,STOP_CYCLE_F,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,LED_MAINT,,__GET_VAR(data__->MAINT_MODE,));
  __SET_VAR(data__->,LED_AUTO,,!(__GET_VAR(data__->MAINT_MODE,)));
  if ((__GET_VAR(data__->LIM_3,) && !(__GET_VAR(data__->MAINT_MODE,)))) {
    __SET_VAR(data__->,PROG_ESTOP,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->LIM_3,) && !(__GET_VAR(data__->MAINT_MODE,)))) {
    __SET_VAR(data__->,LED_POS_DIS,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->POWER_ON_FLAG,)) {
    __SET_VAR(data__->,LED_POS_DIS,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->LIM_4,) && !(__GET_VAR(data__->MAINT_MODE,)))) {
    __SET_VAR(data__->,LED_POS_DIS,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->LIM_4,) && !(__GET_VAR(data__->MAINT_MODE,)))) {
    __SET_VAR(data__->,PROG_ESTOP,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // LADDERLOGIC_body__() 






configuration _SendAndReceiveCnt_SendAndReceiveCnt_sender5_CntToLedsAndRfm0 {
}
implementation {
components Main, Counter, IntToLeds, IntToRfm, TimerC;
Main.StdControl -> Counter.StdControl;
Counter.IntOutput -> IntToLeds.IntOutput;
Main.StdControl -> IntToLeds.StdControl;
Counter.IntOutput -> IntToRfm.IntOutput;
Main.StdControl -> IntToRfm.StdControl;
Main.StdControl -> TimerC.StdControl;
Counter.Timer -> TimerC.Timer[unique("Timer")];
}

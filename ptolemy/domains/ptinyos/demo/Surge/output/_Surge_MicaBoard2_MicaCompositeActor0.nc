configuration _Surge_MicaBoard2_MicaCompositeActor0 {
}
implementation {
components Sounder, QueuedSend, SurgeM, LedsC, GenericCommPromiscuous, MultiHopRouter, Photo, Main, TimerC, Bcast;
SurgeM.Sounder -> Sounder.StdControl;
Main.StdControl -> QueuedSend.StdControl;
Main.StdControl -> SurgeM.StdControl;
SurgeM.Leds -> LedsC.Leds;
MultiHopRouter.ReceiveMsg[unique("ReceiveMsg")] -> GenericCommPromiscuous.ReceiveMsg[unique("ReceiveMsg")];
Main.StdControl -> GenericCommPromiscuous.Control;
SurgeM.Send -> MultiHopRouter.Send[unique("Send")];
Main.StdControl -> MultiHopRouter.StdControl;
SurgeM.RouteControl -> MultiHopRouter.RouteControl;
SurgeM.ADC -> Photo.PhotoADC;
Main.StdControl -> Photo.StdControl;
Main.StdControl -> TimerC.StdControl;
SurgeM.Timer -> TimerC.Timer[unique("Timer")];
SurgeM.Bcast -> Bcast.Receive[unique("Receive")];
Main.StdControl -> Bcast.StdControl;
}

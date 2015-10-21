configuration _RfmToLeds_MicaCompositeActor0 {
}
implementation {
components Main, IntToLeds, RfmToInt;
RfmToInt.IntOutput -> IntToLeds.IntOutput;
Main.StdControl -> IntToLeds.StdControl;
Main.StdControl -> RfmToInt.StdControl;
}

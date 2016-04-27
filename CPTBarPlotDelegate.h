

@protocol CPTBarPlotDelegate <CPTPlotDelegate>
@optional
-(void)barPlot:(id)arg1 barTouchDownAtRecordIndex:(unsigned)arg2;
-(void)barPlot:(id)arg1 barTouchDownAtRecordIndex:(unsigned)arg2 withEvent:(UIEvent*)arg3;
-(void)barPlot:(id)arg1 barWasSelectedAtRecordIndex:(unsigned)arg2;
-(void)barPlot:(id)arg1 barWasSelectedAtRecordIndex:(unsigned)arg2 withEvent:(UIEvent*)arg3;
-(void)barPlot:(id)arg1 barTouchUpAtRecordIndex:(unsigned)arg2;
-(void)barPlot:(id)arg1 barTouchUpAtRecordIndex:(unsigned)arg2 withEvent:(UIEvent*)arg3;

@end


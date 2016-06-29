

@protocol CPTPlotDataSource <NSObject>
@optional
-(id)numbersForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(NSRange)arg3;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3;
-(double*)doublesForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(NSRange)arg3;
-(double)doubleForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3;
-(id)dataForPlot:(id)arg1 field:(unsigned)arg2 recordIndexRange:(NSRange)arg3;
-(id)dataForPlot:(id)arg1 recordIndexRange:(NSRange)arg2;
-(id)dataLabelsForPlot:(id)arg1 recordIndexRange:(NSRange)arg2;
-(id)dataLabelForPlot:(id)arg1 recordIndex:(unsigned)arg2;

@required
-(unsigned)numberOfRecordsForPlot:(id)arg1;

@end


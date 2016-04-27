

@protocol CPTBarPlotDataSource <CPTPlotDataSource>
@optional
-(id)legendTitleForBarPlot:(id)arg1 recordIndex:(unsigned)arg2;
-(id)barFillsForBarPlot:(id)arg1 recordIndexRange:(NSRange)arg2;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2;
-(id)barLineStylesForBarPlot:(id)arg1 recordIndexRange:(NSRange)arg2;
-(id)barLineStyleForBarPlot:(id)arg1 recordIndex:(unsigned)arg2;
-(id)attributedLegendTitleForBarPlot:(id)arg1 recordIndex:(unsigned)arg2;

@end


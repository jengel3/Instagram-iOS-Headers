
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTBarPlotDataSource.h>
#import <Instagram/CPTBarPlotDelegate.h>

@class CPTGraphHostingView, CPTBarPlot, NSArray, UIView, IGSimpleChartData, NSString;

@interface IGInsightsVerticalBarChartView : UIView <CPTBarPlotDataSource, CPTBarPlotDelegate> {

	CPTGraphHostingView* _hostingView;
	float _barWidth;
	float _maxChartDataValue;
	float _minChartDataValue;
	CPTBarPlot* _plot;
	NSArray* _labels;
	UIView* _bottomSeparator;
	IGSimpleChartData* _chartData;

}

@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic) float barWidth;                                 //@synthesize barWidth=_barWidth - In the implementation block
@property (nonatomic,readonly) float maxChartDataValue;                      //@synthesize maxChartDataValue=_maxChartDataValue - In the implementation block
@property (nonatomic,readonly) float minChartDataValue;                      //@synthesize minChartDataValue=_minChartDataValue - In the implementation block
@property (nonatomic,retain) CPTBarPlot * plot;                              //@synthesize plot=_plot - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                 //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) IGSimpleChartData * chartData;                  //@synthesize chartData=_chartData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupLabels;
-(CPTGraphHostingView *)hostingView;
-(void)layoutLabelsWithCurrentY:(float)arg1 ;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(id)initWithChartData:(id)arg1 ;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(float)maxValueFromDataPoints:(id)arg1 ;
-(float)minValueFromDataPoints:(id)arg1 ;
-(void)generateBarPlot;
-(CPTBarPlot *)plot;
-(float)maxChartDataValue;
-(id)numbersFromDataPoints:(id)arg1 ;
-(float)minChartDataValue;
-(CGColorRef)gradientColorForPercent:(float)arg1 ;
-(void)setPlot:(CPTBarPlot *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
-(IGSimpleChartData *)chartData;
-(void)setChartData:(IGSimpleChartData *)arg1 ;
@end


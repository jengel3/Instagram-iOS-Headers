
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTBarPlotDataSource.h>
#import <Instagram/CPTBarPlotDelegate.h>

@class CPTGraphHostingView, CPTBarPlot, NSArray, UIView, IGSimpleChartData, NSString;

@interface IGInsightsVerticalBarChartView : UIView <CPTBarPlotDataSource, CPTBarPlotDelegate> {

	CPTGraphHostingView* _hostingView;
	float _barWidth;
	float _maxValue;
	CPTBarPlot* _plot;
	NSArray* _labels;
	UIView* _bottomSeparator;
	IGSimpleChartData* _chartData;

}

@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic) float barWidth;                                 //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) float maxValue;                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) CPTBarPlot * plot;                              //@synthesize plot=_plot - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                 //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) IGSimpleChartData * chartData;                  //@synthesize chartData=_chartData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPTGraphHostingView *)hostingView;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(void)setupLabels;
-(id)initWithChartData:(id)arg1 ;
-(void)setupMaxValue;
-(void)generateBarPlot;
-(void)layoutLabelsWithCurrentY:(float)arg1 ;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(CPTBarPlot *)plot;
-(void)setPlot:(CPTBarPlot *)arg1 ;
-(float)maxValue;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaxValue:(float)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
-(IGSimpleChartData *)chartData;
-(void)setChartData:(IGSimpleChartData *)arg1 ;
@end


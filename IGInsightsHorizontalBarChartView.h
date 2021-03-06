
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTBarPlotDataSource.h>
#import <Instagram/CPTBarPlotDelegate.h>

@class CPTGraphHostingView, NSArray, UIView, IGSimpleChartData, NSString;

@interface IGInsightsHorizontalBarChartView : UIView <CPTBarPlotDataSource, CPTBarPlotDelegate> {

	CPTGraphHostingView* _hostingView;
	float _barWidth;
	float _maxValue;
	NSArray* _labels;
	UIView* _bottomSeparator;
	IGSimpleChartData* _chartData;

}

@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic) float barWidth;                                 //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) float maxValue;                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                 //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) IGSimpleChartData * chartData;                  //@synthesize chartData=_chartData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupLabels;
-(void)setupMaxValue;
-(CPTGraphHostingView *)hostingView;
-(void)generateBarPlotWithFrame:(CGRect)arg1 ;
-(void)layoutLabelsWithCurrentY:(float)arg1 ;
-(id)generateGraphWithFrame:(CGRect)arg1 ;
-(id)generatePlotWithFrame:(CGRect)arg1 ;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(id)initWithChartData:(id)arg1 ;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
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


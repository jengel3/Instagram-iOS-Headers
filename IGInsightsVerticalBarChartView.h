
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTBarPlotDataSource.h>
#import <Instagram/CPTBarPlotDelegate.h>

@class NSMutableArray, CPTGraphHostingView, IGInsightsHeaderView, CPTBarPlot, NSArray, UIView, NSString;

@interface IGInsightsVerticalBarChartView : UIView <CPTBarPlotDataSource, CPTBarPlotDelegate> {

	NSMutableArray* _data;
	CPTGraphHostingView* _hostingView;
	IGInsightsHeaderView* _headerView;
	float _barWidth;
	float _maxValue;
	CPTBarPlot* _plot;
	NSArray* _labels;
	UIView* _bottomSeparator;

}

@property (nonatomic,copy) NSMutableArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) float barWidth;                                 //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) float maxValue;                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) CPTBarPlot * plot;                              //@synthesize plot=_plot - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                 //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPTGraphHostingView *)hostingView;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(void)setupLabels;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 ;
-(void)setupData;
-(void)generateBarPlot;
-(void)layoutLabelsWithCurrentY:(float)arg1 ;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(CPTBarPlot *)plot;
-(void)setPlot:(CPTBarPlot *)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(float)maxValue;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSMutableArray *)data;
-(void)setData:(NSMutableArray *)arg1 ;
-(void)setMaxValue:(float)arg1 ;
-(IGInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsHeaderView *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
@end


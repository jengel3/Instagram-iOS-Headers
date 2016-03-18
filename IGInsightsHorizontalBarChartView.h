
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTBarPlotDataSource.h>
#import <Instagram/CPTBarPlotDelegate.h>

@class NSMutableArray, CPTGraphHostingView, IGInsightsHeaderView, NSArray, UIView, NSString;

@interface IGInsightsHorizontalBarChartView : UIView <CPTBarPlotDataSource, CPTBarPlotDelegate> {

	NSMutableArray* _data;
	CPTGraphHostingView* _hostingView;
	IGInsightsHeaderView* _headerView;
	float _barWidth;
	float _maxValue;
	NSArray* _labels;
	UIView* _bottomSeparator;

}

@property (nonatomic,copy) NSMutableArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) float barWidth;                                 //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) float maxValue;                                 //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                 //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPTGraphHostingView *)hostingView;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(void)setupLabels;
-(void)setupData;
-(void)generateBarPlot;
-(void)layoutLabelsWithCurrentY:(float)arg1 ;
-(id)barFillForBarPlot:(id)arg1 recordIndex:(unsigned)arg2 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(float)maxValue;
-(id)init;
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


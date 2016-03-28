
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTPlotDataSource.h>

@class CPTGraphHostingView, NSArray, UIView, IGSimpleChartData, NSString;

@interface IGInsightsPieChartView : UIView <CPTPlotDataSource> {

	CPTGraphHostingView* _hostingView;
	NSArray* _legendItems;
	UIView* _bottomSeparator;
	IGSimpleChartData* _chartData;
	NSArray* _colors;

}

@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,copy) NSArray * legendItems;                            //@synthesize legendItems=_legendItems - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) IGSimpleChartData * chartData;                  //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,retain) NSArray * colors;                               //@synthesize colors=_colors - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPTGraphHostingView *)hostingView;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(id)initWithChartData:(id)arg1 ;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(void)setupColor;
-(void)generatePiePlot;
-(void)setupLegendItems;
-(float)getLegendLabelHeightSumWithSize:(CGSize)arg1 ;
-(void)layoutLegendItemsStartAtY:(float)arg1 ;
-(NSArray *)legendItems;
-(id)sliceFillForPieChart:(id)arg1 recordIndex:(unsigned)arg2 ;
-(void)setLegendItems:(NSArray *)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)colors;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(IGSimpleChartData *)chartData;
-(void)setChartData:(IGSimpleChartData *)arg1 ;
@end


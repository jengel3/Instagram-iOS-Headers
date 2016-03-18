
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/CPTPlotDataSource.h>

@class NSMutableArray, IGInsightsHeaderView, CPTGraphHostingView, NSArray, UIView, NSString;

@interface IGInsightsPieChartView : UIView <CPTPlotDataSource> {

	NSMutableArray* _data;
	IGInsightsHeaderView* _headerView;
	CPTGraphHostingView* _hostingView;
	NSArray* _legendItems;
	UIView* _bottomSeparator;

}

@property (nonatomic,copy) NSMutableArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) CPTGraphHostingView * hostingView;              //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,copy) NSArray * legendItems;                            //@synthesize legendItems=_legendItems - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CPTGraphHostingView *)hostingView;
-(void)setHostingView:(CPTGraphHostingView *)arg1 ;
-(void)setupData;
-(unsigned)numberOfRecordsForPlot:(id)arg1 ;
-(id)numberForPlot:(id)arg1 field:(unsigned)arg2 recordIndex:(unsigned)arg3 ;
-(void)generatePiePlot;
-(void)setupLegendItems;
-(float)getLegendLabelHeightSumWithSize:(CGSize)arg1 ;
-(void)layoutLegendItemsStartAtY:(float)arg1 ;
-(NSArray *)legendItems;
-(id)sliceFillForPieChart:(id)arg1 recordIndex:(unsigned)arg2 ;
-(void)setLegendItems:(NSArray *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSMutableArray *)data;
-(void)setData:(NSMutableArray *)arg1 ;
-(IGInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsHeaderView *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
@end


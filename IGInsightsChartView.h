
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGInsightsHeaderView, UIView, NSArray, NSString;

@interface IGInsightsChartView : UIView {

	IGInsightsHeaderView* _headerView;
	UIView* _bottomSeparator;
	UIView* _contentView;
	NSArray* _chartData;
	NSString* _chartStyle;
	NSArray* _selectorButtons;
	NSString* _queryButtonText;
	unsigned _activeIndex;

}

@property (nonatomic,retain) IGInsightsHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                       //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSArray * chartData;                              //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,copy) NSString * chartStyle;                            //@synthesize chartStyle=_chartStyle - In the implementation block
@property (nonatomic,copy) NSArray * selectorButtons;                        //@synthesize selectorButtons=_selectorButtons - In the implementation block
@property (nonatomic,copy) NSString * queryButtonText;                       //@synthesize queryButtonText=_queryButtonText - In the implementation block
@property (assign,nonatomic) unsigned activeIndex;                           //@synthesize activeIndex=_activeIndex - In the implementation block
-(NSString *)chartStyle;
-(id)initWithHeader:(id)arg1 queryButtonText:(id)arg2 chartStyle:(id)arg3 chartData:(id)arg4 ;
-(void)setupContentViewOnStyle:(id)arg1 chartData:(id)arg2 ;
-(void)setupSelectorButtons;
-(void)buttonClick:(id)arg1 ;
-(void)layoutSelectorButtonsWithHeaderViewHeight:(float)arg1 ;
-(NSArray *)selectorButtons;
-(unsigned)activeIndex;
-(void)setActiveIndex:(unsigned)arg1 ;
-(void)setChartStyle:(NSString *)arg1 ;
-(void)setSelectorButtons:(NSArray *)arg1 ;
-(NSString *)queryButtonText;
-(void)setQueryButtonText:(NSString *)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGInsightsHeaderView *)headerView;
-(void)setHeaderView:(IGInsightsHeaderView *)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(NSArray *)chartData;
-(void)setChartData:(NSArray *)arg1 ;
@end


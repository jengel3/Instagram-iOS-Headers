
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGInsightsHeaderTabPageViewDataSource.h>

@class UIView, IGInsightsHeaderTabPageView, NSString, NSArray;

@interface IGInsightsChartWithCenteredTitleView : UIView <IGInsightsHeaderTabPageViewDataSource> {

	UIView* _bottomSeparator;
	IGInsightsHeaderTabPageView* _headerTabPageView;
	NSString* _header;
	NSString* _queryButtonText;
	NSString* _chartStyle;
	NSArray* _chartTab;

}

@property (nonatomic,retain) UIView * bottomSeparator;                                     //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) IGInsightsHeaderTabPageView * headerTabPageView;              //@synthesize headerTabPageView=_headerTabPageView - In the implementation block
@property (nonatomic,copy) NSString * header;                                              //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * queryButtonText;                                     //@synthesize queryButtonText=_queryButtonText - In the implementation block
@property (nonatomic,copy) NSString * chartStyle;                                          //@synthesize chartStyle=_chartStyle - In the implementation block
@property (nonatomic,copy) NSArray * chartTab;                                             //@synthesize chartTab=_chartTab - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)chartTab;
-(NSString *)chartStyle;
-(NSString *)queryButtonText;
-(IGInsightsHeaderTabPageView *)headerTabPageView;
-(unsigned)numberOfContentViewsForInsightsHeaderTabPageView:(id)arg1 ;
-(id)insightsHeaderTabPageView:(id)arg1 viewForTabAtIndex:(unsigned)arg2 ;
-(id)insightsHeaderTabPageView:(id)arg1 titleForTabAtIndex:(unsigned)arg2 ;
-(id)titleForInsightsHeaderTabPageView:(id)arg1 ;
-(id)navigateButtonTextForInsightsHeaderTabPageView:(id)arg1 ;
-(UIEdgeInsets)contentViewPaddingsForInsightsHeaderTabPageView:(id)arg1 ;
-(id)initWithHeader:(id)arg1 queryButtonText:(id)arg2 chartStyle:(id)arg3 chartTab:(id)arg4 ;
-(void)setHeaderTabPageView:(IGInsightsHeaderTabPageView *)arg1 ;
-(void)setQueryButtonText:(NSString *)arg1 ;
-(void)setChartStyle:(NSString *)arg1 ;
-(void)setChartTab:(NSArray *)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
@end


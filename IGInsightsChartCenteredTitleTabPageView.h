
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGInsightsCenteredTitleTabPageViewDataSource.h>

@class IGSimpleChartTab, NSString, IGInsightsCenteredTitleTabPageView;

@interface IGInsightsChartCenteredTitleTabPageView : UIView <IGInsightsCenteredTitleTabPageViewDataSource> {

	IGSimpleChartTab* _chartTab;
	NSString* _chartStyle;
	IGInsightsCenteredTitleTabPageView* _centeredTitleTabPageView;

}

@property (nonatomic,retain) IGSimpleChartTab * chartTab;                                                //@synthesize chartTab=_chartTab - In the implementation block
@property (nonatomic,copy) NSString * chartStyle;                                                        //@synthesize chartStyle=_chartStyle - In the implementation block
@property (nonatomic,retain) IGInsightsCenteredTitleTabPageView * centeredTitleTabPageView;              //@synthesize centeredTitleTabPageView=_centeredTitleTabPageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGInsightsCenteredTitleTabPageView *)centeredTitleTabPageView;
-(unsigned)numberOfContentViewsForInsightsCenteredTitleTabPageView:(id)arg1 ;
-(id)insightsCenteredTitleTabPageView:(id)arg1 viewForTabAtIndex:(unsigned)arg2 ;
-(id)insightsCenteredTitleTabPageView:(id)arg1 titleForTabAtIndex:(unsigned)arg2 ;
-(void)setCenteredTitleTabPageView:(IGInsightsCenteredTitleTabPageView *)arg1 ;
-(IGSimpleChartTab *)chartTab;
-(NSString *)chartStyle;
-(id)initWithChartTab:(id)arg1 chartStyle:(id)arg2 ;
-(void)setChartStyle:(NSString *)arg1 ;
-(void)setChartTab:(IGSimpleChartTab *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


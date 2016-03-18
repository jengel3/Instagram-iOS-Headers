
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsPieChartView, NSString;

@interface IGInsightsPieChartComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsPieChartView* _componentView;

}

@property (nonatomic,retain) IGInsightsPieChartView * componentView;                                           //@synthesize componentView=_componentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsPieChartView *)componentView;
-(void)setComponentView:(IGInsightsPieChartView *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end


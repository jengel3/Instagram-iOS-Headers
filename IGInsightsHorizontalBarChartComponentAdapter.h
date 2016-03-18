
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsHorizontalBarChartView, NSString;

@interface IGInsightsHorizontalBarChartComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsHorizontalBarChartView* _componentView;

}

@property (nonatomic,retain) IGInsightsHorizontalBarChartView * componentView;                                 //@synthesize componentView=_componentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsHorizontalBarChartView *)componentView;
-(void)setComponentView:(IGInsightsHorizontalBarChartView *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end


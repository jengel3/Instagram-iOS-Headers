
#import <Instagram/IGInsightsComponentViewControllerNavigationDelegate.h>
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class IGInsightsChartWithCenteredTitleComponent, IGInsightsChartWithCenteredTitleView, IGInsightsChartWithCenteredTitleViewController, IGInsightsLoggingHelper, NSString;

@interface IGInsightsChartWithCenteredTitleComponentAdapter : NSObject <IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	IGInsightsChartWithCenteredTitleComponent* _component;
	IGInsightsChartWithCenteredTitleView* _componentView;
	IGInsightsChartWithCenteredTitleViewController* _chartWithCenteredTitleViewController;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGInsightsChartWithCenteredTitleComponent * component;                                              //@synthesize component=_component - In the implementation block
@property (nonatomic,retain) IGInsightsChartWithCenteredTitleView * componentView;                                               //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsChartWithCenteredTitleViewController * chartWithCenteredTitleViewController;              //@synthesize chartWithCenteredTitleViewController=_chartWithCenteredTitleViewController - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                                            //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(IGInsightsChartWithCenteredTitleView *)componentView;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(void)setComponentView:(IGInsightsChartWithCenteredTitleView *)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)setChartWithCenteredTitleViewController:(IGInsightsChartWithCenteredTitleViewController *)arg1 ;
-(IGInsightsChartWithCenteredTitleViewController *)chartWithCenteredTitleViewController;
-(IGInsightsChartWithCenteredTitleComponent *)component;
-(void)setComponent:(IGInsightsChartWithCenteredTitleComponent *)arg1 ;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
@end


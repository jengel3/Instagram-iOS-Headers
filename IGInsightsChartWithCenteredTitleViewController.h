
#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsHeaderViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsChartWithCenteredTitleView, IGInsightsQuery, IGInsightsLoggingHelper, NSString;

@interface IGInsightsChartWithCenteredTitleViewController : UIViewController <IGInsightsHeaderViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsChartWithCenteredTitleView* _insightsChartView;
	IGInsightsQuery* _buttonQuery;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;                                                                //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInsightsChartWithCenteredTitleView * insightsChartView;                                       //@synthesize insightsChartView=_insightsChartView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(IGInsightsQuery *)buttonQuery;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 chartStyle:(id)arg4 chartTab:(id)arg5 loggingHelper:(id)arg6 ;
-(IGInsightsChartWithCenteredTitleView *)insightsChartView;
-(void)didTapButtonOnHeaderView:(id)arg1 ;
-(void)setInsightsChartView:(IGInsightsChartWithCenteredTitleView *)arg1 ;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end



#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsHeaderViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsVerticalBarChartView, NSDictionary, NSString;

@interface IGInsightsVerticalBarChartViewController : UIViewController <IGInsightsHeaderViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsVerticalBarChartView* _insightsVerticalBarChartView;
	NSDictionary* _buttonQueryItems;

}

@property (nonatomic,retain) IGInsightsVerticalBarChartView * insightsVerticalBarChartView;                                  //@synthesize insightsVerticalBarChartView=_insightsVerticalBarChartView - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * buttonQueryItems;                                                         //@synthesize buttonQueryItems=_buttonQueryItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(NSDictionary *)buttonQueryItems;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQueryItems:(id)arg3 ;
-(IGInsightsVerticalBarChartView *)insightsVerticalBarChartView;
-(void)didTapButtonOnHeaderView:(id)arg1 ;
-(void)setInsightsVerticalBarChartView:(IGInsightsVerticalBarChartView *)arg1 ;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end


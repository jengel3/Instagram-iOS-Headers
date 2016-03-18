
#import <Instagram/IGInsightsComponentViewControllerNavigationDelegate.h>
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class NSString, NSDictionary, IGInsightsVerticalBarChartView, IGInsightsVerticalBarChartViewController;

@interface IGInsightsVerticalBarChartComponentAdapter : NSObject <IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	NSString* _header;
	NSString* _buttonText;
	NSDictionary* _buttonQueryItems;
	IGInsightsVerticalBarChartView* _componentView;
	IGInsightsVerticalBarChartViewController* _verticalBarChartViewController;

}

@property (nonatomic,copy) NSString * header;                                                                        //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                                    //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSDictionary * buttonQueryItems;                                                          //@synthesize buttonQueryItems=_buttonQueryItems - In the implementation block
@property (nonatomic,retain) IGInsightsVerticalBarChartView * componentView;                                         //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsVerticalBarChartViewController * verticalBarChartViewController;              //@synthesize verticalBarChartViewController=_verticalBarChartViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(NSDictionary *)buttonQueryItems;
-(void)initializeComponentView;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsVerticalBarChartView *)componentView;
-(void)setButtonQueryItems:(NSDictionary *)arg1 ;
-(void)setComponentView:(IGInsightsVerticalBarChartView *)arg1 ;
-(IGInsightsVerticalBarChartViewController *)verticalBarChartViewController;
-(void)setVerticalBarChartViewController:(IGInsightsVerticalBarChartViewController *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end


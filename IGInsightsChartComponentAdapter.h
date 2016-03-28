
#import <Instagram/IGInsightsComponentViewControllerNavigationDelegate.h>
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class NSString, IGInsightsQuery, NSArray, IGInsightsChartView, IGInsightsChartViewController;

@interface IGInsightsChartComponentAdapter : NSObject <IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	NSString* _header;
	NSString* _buttonText;
	IGInsightsQuery* _buttonQuery;
	NSArray* _chartData;
	NSString* _chartStyle;
	IGInsightsChartView* _componentView;
	IGInsightsChartViewController* _chartViewController;

}

@property (nonatomic,copy) NSString * header;                                                                  //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                              //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * buttonQuery;                                                    //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,copy) NSArray * chartData;                                                                //@synthesize chartData=_chartData - In the implementation block
@property (nonatomic,copy) NSString * chartStyle;                                                              //@synthesize chartStyle=_chartStyle - In the implementation block
@property (nonatomic,retain) IGInsightsChartView * componentView;                                              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsChartViewController * chartViewController;                              //@synthesize chartViewController=_chartViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(IGInsightsQuery *)buttonQuery;
-(void)initializeComponentView;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsChartView *)componentView;
-(void)setButtonQuery:(IGInsightsQuery *)arg1 ;
-(void)setComponentView:(IGInsightsChartView *)arg1 ;
-(NSString *)chartStyle;
-(void)setChartStyle:(NSString *)arg1 ;
-(IGInsightsChartViewController *)chartViewController;
-(void)setChartViewController:(IGInsightsChartViewController *)arg1 ;
-(NSArray *)chartData;
-(void)setChartData:(NSArray *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end


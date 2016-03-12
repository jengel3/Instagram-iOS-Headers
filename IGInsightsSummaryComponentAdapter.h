
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class NSString, IGInsightsSummaryView;

@interface IGInsightsSummaryComponentAdapter : NSObject <IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	NSString* _title;
	NSString* _buttonText;
	IGInsightsSummaryView* _componentView;

}

@property (nonatomic,copy) NSString * title;                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                              //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,retain) IGInsightsSummaryView * componentView;                                            //@synthesize componentView=_componentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsSummaryView *)componentView;
-(void)setComponentView:(IGInsightsSummaryView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end



#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsCarouselsViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsCarouselsView, NSString, IGInsightsQuery, IGInsightsLoggingHelper;

@interface IGInsightsCarouselsViewController : UIViewController <IGInsightsCarouselsViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsCarouselsView* _insightsCarouselsView;
	NSString* _header;
	IGInsightsQuery* _buttonQuery;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,retain) IGInsightsCarouselsView * insightsCarouselsView;                                                //@synthesize insightsCarouselsView=_insightsCarouselsView - In the implementation block
@property (nonatomic,copy,readonly) NSString * header;                                                                       //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;                                                                //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                                        //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(IGInsightsQuery *)buttonQuery;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)didSelectCellOnCarouselsView:(id)arg1 forFeedItem:(id)arg2 atIndex:(int)arg3 ;
-(void)didTapButtonOnCarouselsView:(id)arg1 ;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 loggingHelper:(id)arg4 ;
-(IGInsightsCarouselsView *)insightsCarouselsView;
-(void)setInsightsCarouselsView:(IGInsightsCarouselsView *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end


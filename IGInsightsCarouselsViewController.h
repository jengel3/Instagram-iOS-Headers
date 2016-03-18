
#import <UIKit/UIViewController.h>
#import <Instagram/IGInsightsCarouselsViewDelegate.h>
#import <Instagram/IGInsightsComponentViewController.h>

@protocol IGInsightsComponentViewControllerNavigationDelegate;
@class IGInsightsCarouselsView, NSString, NSDictionary;

@interface IGInsightsCarouselsViewController : UIViewController <IGInsightsCarouselsViewDelegate, IGInsightsComponentViewController> {

	id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate;
	IGInsightsCarouselsView* _insightsCarouselsView;
	NSString* _header;
	NSDictionary* _buttonQueryItems;

}

@property (nonatomic,retain) IGInsightsCarouselsView * insightsCarouselsView;                                                //@synthesize insightsCarouselsView=_insightsCarouselsView - In the implementation block
@property (nonatomic,copy,readonly) NSString * header;                                                                       //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * buttonQueryItems;                                                         //@synthesize buttonQueryItems=_buttonQueryItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentViewControllerNavigationDelegate> navigationDelegate; 
-(NSDictionary *)buttonQueryItems;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQueryItems:(id)arg3 ;
-(IGInsightsCarouselsView *)insightsCarouselsView;
-(void)didSelectCellOnCarouselsView:(id)arg1 ForFeedItem:(id)arg2 ;
-(void)didTapButtonOnCarouselsView:(id)arg1 ;
-(void)setInsightsCarouselsView:(IGInsightsCarouselsView *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentViewControllerNavigationDelegate>)arg1 ;
@end


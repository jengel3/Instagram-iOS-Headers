
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGInsightsContentRowListViewDelegate.h>
#import <Instagram/IGInlineInsightsViewDelegate.h>

@class IGPost, UIView, IGInlineInsightsView, IGInsightsLoggingHelper, IGInlineInsightsDataProvider, NSString;

@interface IGInlineInsightsViewController : UIViewController <UIViewControllerTransitioningDelegate, IGInsightsContentRowListViewDelegate, IGInlineInsightsViewDelegate> {

	IGPost* _post;
	UIView* _overlayView;
	IGInlineInsightsView* _inlineInsightsView;
	IGInsightsLoggingHelper* _loggingHelper;
	IGInlineInsightsDataProvider* _dataProvider;

}

@property (nonatomic,retain) IGPost * post;                                            //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) IGInlineInsightsView * inlineInsightsView;                //@synthesize inlineInsightsView=_inlineInsightsView - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                  //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) IGInlineInsightsDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(void)onOverlayTapped;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)needAnimateContentRowListView:(id)arg1 upForDistance:(float)arg2 ;
-(void)failedToFetchDataForIGInlineInsightsView:(id)arg1 ;
-(void)setInlineInsightsView:(IGInlineInsightsView *)arg1 ;
-(IGInlineInsightsView *)inlineInsightsView;
-(id)contentContainerView;
-(id)init;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setDataProvider:(IGInlineInsightsDataProvider *)arg1 ;
-(IGInlineInsightsDataProvider *)dataProvider;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end


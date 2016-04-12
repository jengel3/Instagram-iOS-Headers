
#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGFeedItem, IGHybridWebView, NSString;

@interface IGBoostPostViewController : UIViewController <IGHybridWebViewDelegate> {

	char _hasStartedRequest;
	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) IGHybridWebView * boostPostView; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                        //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) char hasStartedRequest;                         //@synthesize hasStartedRequest=_hasStartedRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(IGHybridWebView *)boostPostView;
-(char)hasStartedRequest;
-(void)setHasStartedRequest:(char)arg1 ;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end



#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGFeedItem, IGAdsManagerDeleteAdHandler, IGBoostPostLogger, IGHybridWebView, NSString;

@interface IGBoostPostViewController : UIViewController <IGHybridWebViewDelegate> {

	char _hasStartedRequest;
	char _isVerifyingFacebookToken;
	IGFeedItem* _feedItem;
	IGAdsManagerDeleteAdHandler* _deleteHandler;
	IGBoostPostLogger* _logger;

}

@property (nonatomic,readonly) IGHybridWebView * boostPostView; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                                    //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) char hasStartedRequest;                                     //@synthesize hasStartedRequest=_hasStartedRequest - In the implementation block
@property (nonatomic,readonly) IGAdsManagerDeleteAdHandler * deleteHandler;              //@synthesize deleteHandler=_deleteHandler - In the implementation block
@property (assign,nonatomic) char isVerifyingFacebookToken;                              //@synthesize isVerifyingFacebookToken=_isVerifyingFacebookToken - In the implementation block
@property (nonatomic,readonly) IGBoostPostLogger * logger;                               //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(IGAdsManagerDeleteAdHandler *)deleteHandler;
-(char)isVerifyingFacebookToken;
-(void)setIsVerifyingFacebookToken:(char)arg1 ;
-(IGHybridWebView *)boostPostView;
-(void)loadRequestAfterDeletingIfNecessaryWithAccessToken:(id)arg1 ;
-(void)showSuccessNotification;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(void)containedWebDidFinishFlowWithWebView:(id)arg1 ;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2 ;
-(id)initWithFeedItem:(id)arg1 logger:(id)arg2 ;
-(char)hasStartedRequest;
-(void)setHasStartedRequest:(char)arg1 ;
-(IGBoostPostLogger *)logger;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end



#import <Instagram/IGViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGUserSession, IGFeedItem, IGAdsManagerDeleteAdHandler, IGBoostPostLogger, IGHybridWebViewConfigPromote, IGHybridWebView, NSString;

@interface IGBoostPostViewController : IGViewController <IGHybridWebViewDelegate> {

	char _hasStartedRequest;
	char _isVerifyingFacebookToken;
	IGUserSession* _userSession;
	IGFeedItem* _feedItem;
	IGAdsManagerDeleteAdHandler* _deleteHandler;
	IGBoostPostLogger* _logger;
	IGHybridWebViewConfigPromote* _config;

}

@property (nonatomic,readonly) IGUserSession * userSession;                              //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGHybridWebView * boostPostView; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                                    //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) char hasStartedRequest;                                     //@synthesize hasStartedRequest=_hasStartedRequest - In the implementation block
@property (nonatomic,readonly) IGAdsManagerDeleteAdHandler * deleteHandler;              //@synthesize deleteHandler=_deleteHandler - In the implementation block
@property (assign,nonatomic) char isVerifyingFacebookToken;                              //@synthesize isVerifyingFacebookToken=_isVerifyingFacebookToken - In the implementation block
@property (nonatomic,readonly) IGBoostPostLogger * logger;                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGHybridWebViewConfigPromote * config;                    //@synthesize config=_config - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGFeedItem *)feedItem;
-(IGAdsManagerDeleteAdHandler *)deleteHandler;
-(IGHybridWebView *)boostPostView;
-(char)hasStartedRequest;
-(char)isVerifyingFacebookToken;
-(void)setHasStartedRequest:(char)arg1 ;
-(void)setIsVerifyingFacebookToken:(char)arg1 ;
-(void)loadRequestAfterDeletingIfNecessaryWithAccessToken:(id)arg1 ;
-(void)showSuccessNotification;
-(void)containedWebDidFinishFlowWithWebView:(id)arg1 ;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2 ;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(id)initWithFeedItem:(id)arg1 logger:(id)arg2 userSession:(id)arg3 ;
-(IGBoostPostLogger *)logger;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGHybridWebViewConfigPromote *)config;
-(IGUserSession *)userSession;
@end


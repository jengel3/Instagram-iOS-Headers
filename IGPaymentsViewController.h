
#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@protocol IGHybridWebViewConfig;
@class IGPaymentsLogger, IGHybridWebView, NSString;

@interface IGPaymentsViewController : UIViewController <IGHybridWebViewDelegate> {

	char _hasStartedRequest;
	char _isVerifyingFacebookToken;
	id<IGHybridWebViewConfig> _config;
	IGPaymentsLogger* _logger;

}

@property (nonatomic,readonly) IGHybridWebView * paymentsView; 
@property (nonatomic,readonly) id<IGHybridWebViewConfig> config;              //@synthesize config=_config - In the implementation block
@property (assign,nonatomic) char hasStartedRequest;                          //@synthesize hasStartedRequest=_hasStartedRequest - In the implementation block
@property (assign,nonatomic) char isVerifyingFacebookToken;                   //@synthesize isVerifyingFacebookToken=_isVerifyingFacebookToken - In the implementation block
@property (nonatomic,readonly) IGPaymentsLogger * logger;                     //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasStartedRequest;
-(char)isVerifyingFacebookToken;
-(void)setHasStartedRequest:(char)arg1 ;
-(void)setIsVerifyingFacebookToken:(char)arg1 ;
-(void)containedWebDidFinishFlowWithWebView:(id)arg1 ;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2 ;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(id)initWithConfig:(id)arg1 logger:(id)arg2 ;
-(IGHybridWebView *)paymentsView;
-(IGPaymentsLogger *)logger;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id<IGHybridWebViewConfig>)config;
-(char)prefersNavigationBarHidden;
@end



#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGPaymentsLogger, IGHybridWebView, NSString;

@interface IGPaymentsViewController : UIViewController <IGHybridWebViewDelegate> {

	char _hasStartedRequest;
	char _isVerifyingFacebookToken;
	unsigned _context;
	IGPaymentsLogger* _logger;

}

@property (nonatomic,readonly) IGHybridWebView * paymentsView; 
@property (nonatomic,readonly) unsigned context;                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char hasStartedRequest;                        //@synthesize hasStartedRequest=_hasStartedRequest - In the implementation block
@property (assign,nonatomic) char isVerifyingFacebookToken;                 //@synthesize isVerifyingFacebookToken=_isVerifyingFacebookToken - In the implementation block
@property (nonatomic,readonly) IGPaymentsLogger * logger;                   //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isVerifyingFacebookToken;
-(void)setIsVerifyingFacebookToken:(char)arg1 ;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(void)containedWebDidFinishFlowWithWebView:(id)arg1 ;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2 ;
-(id)initWithLogger:(id)arg1 ;
-(IGHybridWebView *)paymentsView;
-(char)hasStartedRequest;
-(void)setHasStartedRequest:(char)arg1 ;
-(char)isCreationFlow;
-(id)initWithContext:(unsigned)arg1 logger:(id)arg2 ;
-(IGPaymentsLogger *)logger;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(unsigned)context;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)prefersNavigationBarHidden;
@end


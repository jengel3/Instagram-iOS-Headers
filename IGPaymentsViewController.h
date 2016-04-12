
#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGHybridWebView, NSString;

@interface IGPaymentsViewController : UIViewController <IGHybridWebViewDelegate> {

	char _hasStartedRequest;
	unsigned _context;

}

@property (nonatomic,readonly) IGHybridWebView * paymentsView; 
@property (nonatomic,readonly) unsigned context;                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char hasStartedRequest;                        //@synthesize hasStartedRequest=_hasStartedRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasStartedRequest;
-(void)setHasStartedRequest:(char)arg1 ;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2 ;
-(IGHybridWebView *)paymentsView;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(unsigned)context;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)initWithContext:(unsigned)arg1 ;
-(char)prefersNavigationBarHidden;
@end


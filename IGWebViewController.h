
#import <Instagram/IGViewController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGWebViewControllerContinuationDelegate;
@class NSURL, UIWebView, UIActivityIndicatorView, UIButton, UIBarButtonItem, NSString;

@interface IGWebViewController : IGViewController <IGActionSheetDelegate, UIWebViewDelegate> {

	char _showPopoutButton;
	char _hidesNavigationButtons;
	char _showsPageTitle;
	NSURL* _targetURL;
	/*^block*/id _completionHandler;
	/*^block*/id _modalDidDismissHandler;
	id<IGWebViewControllerContinuationDelegate> _continuationDelegate;
	UIWebView* _webView;
	UIActivityIndicatorView* _loadingIndicator;
	UIButton* _backButton;
	UIButton* _refreshButton;
	UIButton* _forwardButton;
	UIBarButtonItem* _actionsButton;

}

@property (nonatomic,retain) NSURL * targetURL;                                                                    //@synthesize targetURL=_targetURL - In the implementation block
@property (assign,nonatomic) char showPopoutButton;                                                                //@synthesize showPopoutButton=_showPopoutButton - In the implementation block
@property (assign,nonatomic) char hidesNavigationButtons;                                                          //@synthesize hidesNavigationButtons=_hidesNavigationButtons - In the implementation block
@property (assign,nonatomic) char showsPageTitle;                                                                  //@synthesize showsPageTitle=_showsPageTitle - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id modalDidDismissHandler;                                                              //@synthesize modalDidDismissHandler=_modalDidDismissHandler - In the implementation block
@property (assign,nonatomic,__weak) id<IGWebViewControllerContinuationDelegate> continuationDelegate;              //@synthesize continuationDelegate=_continuationDelegate - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                                  //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                                           //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,retain) UIButton * backButton;                                                                //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIButton * refreshButton;                                                             //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIButton * forwardButton;                                                             //@synthesize forwardButton=_forwardButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionsButton;                                                      //@synthesize actionsButton=_actionsButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeController;
-(void)setShowPopoutButton:(char)arg1 ;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onCancelModal;
-(void)setContinuationDelegate:(id<IGWebViewControllerContinuationDelegate>)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(char)prefersTabBarHidden;
-(id<IGWebViewControllerContinuationDelegate>)continuationDelegate;
-(void)setModalDidDismissHandler:(id)arg1 ;
-(UIButton *)forwardButton;
-(void)setForwardButton:(UIButton *)arg1 ;
-(id)modalDidDismissHandler;
-(void)loadCurrentTargetURL;
-(void)onActionsTapped;
-(void)buildNavigationButtonsIfNeeded;
-(char)didHandleReportingFlowForURL:(id)arg1 ;
-(char)showPopoutButton;
-(char)showsPageTitle;
-(void)setShowsPageTitle:(char)arg1 ;
-(UIBarButtonItem *)actionsButton;
-(void)setActionsButton:(UIBarButtonItem *)arg1 ;
-(char)isModal;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setRefreshButton:(UIButton *)arg1 ;
-(UIButton *)refreshButton;
-(char)hidesNavigationButtons;
-(void)setHidesNavigationButtons:(char)arg1 ;
-(void)setLoading:(char)arg1 ;
-(void)setTargetURL:(NSURL *)arg1 ;
-(UIButton *)backButton;
-(NSURL *)targetURL;
@end


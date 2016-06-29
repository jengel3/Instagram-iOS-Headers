
#import <Instagram/IGViewController.h>
#import <Instagram/IGUnifiedWebViewToolbarDelegate.h>
#import <Instagram/FBPassLoaderDelegate.h>
#import <Instagram/FBWebViewDelegate.h>
#import <Instagram/IGTableViewInsetInfoViewDelegate.h>
#import <Instagram/IGWebViewControllerBrowsing.h>
#import <Instagram/IGWebViewModalDismissableType.h>

@protocol IGWebViewControllerBrowsingDelegate, IGUnifiedWebViewControllerShareDelegate, IGUnifiedWebViewControllerWebViewLoggingDelegate, IGUnifiedWebViewControllerSharingLoggingDelegate, FBWebView;
@class IGWebViewControllerAppearanceHandler, NSURLRequest, IGViewControllerTitleDetailTitleView, UIView, UIProgressView, IGUnifiedWebViewToolbar, IGUnifiedWebViewScrollViewToolbarCoordinator, UIBarButtonItem, IGTableViewInsetInfoView, FBPassLoader, NSString;

@interface IGUnifiedWebViewController : IGViewController <IGUnifiedWebViewToolbarDelegate, FBPassLoaderDelegate, FBWebViewDelegate, IGTableViewInsetInfoViewDelegate, IGWebViewControllerBrowsing, IGWebViewModalDismissableType> {

	char _allowModalDismiss;
	char _shareButtonVisible;
	char _navigationToolBarEnabled;
	id<IGWebViewControllerBrowsingDelegate> _browsingDelegate;
	IGWebViewControllerAppearanceHandler* _appearanceHandler;
	id<IGUnifiedWebViewControllerShareDelegate> _shareDelegate;
	id<IGUnifiedWebViewControllerWebViewLoggingDelegate> _webViewLoggingDelegate;
	id<IGUnifiedWebViewControllerSharingLoggingDelegate> _sharingLoggingDelegate;
	unsigned _titleViewType;
	unsigned _titleTextType;
	NSURLRequest* _urlRequest;
	IGViewControllerTitleDetailTitleView* _titleView;
	UIView*<FBWebView> _webView;
	UIProgressView* _progressView;
	IGUnifiedWebViewToolbar* _navigationToolBar;
	IGUnifiedWebViewScrollViewToolbarCoordinator* _scrollViewToolbarCoordinator;
	UIBarButtonItem* _shareBarButtonItem;
	IGTableViewInsetInfoView* _infoView;
	FBPassLoader* _passLoader;

}

@property (nonatomic,readonly) unsigned titleViewType;                                                                        //@synthesize titleViewType=_titleViewType - In the implementation block
@property (nonatomic,readonly) unsigned titleTextType;                                                                        //@synthesize titleTextType=_titleTextType - In the implementation block
@property (nonatomic,readonly) char shareButtonVisible;                                                                       //@synthesize shareButtonVisible=_shareButtonVisible - In the implementation block
@property (nonatomic,readonly) char navigationToolBarEnabled;                                                                 //@synthesize navigationToolBarEnabled=_navigationToolBarEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * urlRequest;                                                                //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) IGViewControllerTitleDetailTitleView * titleView;                                                //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIView*<FBWebView> webView;                                                                      //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) IGUnifiedWebViewToolbar * navigationToolBar;                                                     //@synthesize navigationToolBar=_navigationToolBar - In the implementation block
@property (nonatomic,retain) IGUnifiedWebViewScrollViewToolbarCoordinator * scrollViewToolbarCoordinator;                     //@synthesize scrollViewToolbarCoordinator=_scrollViewToolbarCoordinator - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareBarButtonItem;                                                            //@synthesize shareBarButtonItem=_shareBarButtonItem - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;                                                             //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) FBPassLoader * passLoader;                                                                       //@synthesize passLoader=_passLoader - In the implementation block
@property (nonatomic,retain) IGWebViewControllerAppearanceHandler * appearanceHandler;                                        //@synthesize appearanceHandler=_appearanceHandler - In the implementation block
@property (assign,nonatomic,__weak) id<IGUnifiedWebViewControllerShareDelegate> shareDelegate;                                //@synthesize shareDelegate=_shareDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUnifiedWebViewControllerWebViewLoggingDelegate> webViewLoggingDelegate;              //@synthesize webViewLoggingDelegate=_webViewLoggingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGUnifiedWebViewControllerSharingLoggingDelegate> sharingLoggingDelegate;              //@synthesize sharingLoggingDelegate=_sharingLoggingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGWebViewControllerBrowsingDelegate> browsingDelegate;                                 //@synthesize browsingDelegate=_browsingDelegate - In the implementation block
@property (assign,nonatomic) char allowModalDismiss;                                                                          //@synthesize allowModalDismiss=_allowModalDismiss - In the implementation block
-(id)analyticsModule;
-(void)passLoader:(id)arg1 didReceiveUnsupportedMIMEType:(id)arg2 ;
-(void)passLoader:(id)arg1 didFinishLoadingPass:(id)arg2 error:(id)arg3 ;
-(void)webView:(id)arg1 progressChanged:(double)arg2 ;
-(char)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(int)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)webView:(id)arg1 didStartNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)onCancelModal;
-(IGWebViewControllerAppearanceHandler *)appearanceHandler;
-(id<IGWebViewControllerBrowsingDelegate>)browsingDelegate;
-(void)setBrowsingDelegate:(id<IGWebViewControllerBrowsingDelegate>)arg1 ;
-(void)setAppearanceHandler:(IGWebViewControllerAppearanceHandler *)arg1 ;
-(void)tableViewInsetInfoViewDidTapOnView:(id)arg1 ;
-(char)shareButtonVisible;
-(void)shareBarButtonTapped:(id)arg1 ;
-(void)setShareBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)shareBarButtonItem;
-(unsigned)titleTextType;
-(void)setNavigationBarTitle:(id)arg1 forURL:(id)arg2 ;
-(void)setAllowModalDismiss:(char)arg1 ;
-(char)navigationToolBarEnabled;
-(IGUnifiedWebViewToolbar *)navigationToolBar;
-(void)setNavigationToolBar:(IGUnifiedWebViewToolbar *)arg1 ;
-(void)setScrollViewToolbarCoordinator:(IGUnifiedWebViewScrollViewToolbarCoordinator *)arg1 ;
-(IGUnifiedWebViewScrollViewToolbarCoordinator *)scrollViewToolbarCoordinator;
-(id<IGUnifiedWebViewControllerShareDelegate>)shareDelegate;
-(id<IGUnifiedWebViewControllerSharingLoggingDelegate>)sharingLoggingDelegate;
-(void)setPassLoader:(FBPassLoader *)arg1 ;
-(void)presentLoadingErrorMessage:(id)arg1 ;
-(id<IGUnifiedWebViewControllerWebViewLoggingDelegate>)webViewLoggingDelegate;
-(FBPassLoader *)passLoader;
-(void)presentNetworkErrorInfoView;
-(unsigned)titleViewType;
-(void)webViewToolbarBackButtonTapped:(id)arg1 ;
-(void)webViewToolbarForwardButtonTapped:(id)arg1 ;
-(char)allowModalDismiss;
-(id)initWithURLRequest:(id)arg1 titleViewType:(unsigned)arg2 titleTextType:(unsigned)arg3 shareButtonVisible:(char)arg4 navigationToolBarEnabled:(char)arg5 ;
-(void)setShareDelegate:(id<IGUnifiedWebViewControllerShareDelegate>)arg1 ;
-(void)setWebViewLoggingDelegate:(id<IGUnifiedWebViewControllerWebViewLoggingDelegate>)arg1 ;
-(void)setSharingLoggingDelegate:(id<IGUnifiedWebViewControllerSharingLoggingDelegate>)arg1 ;
-(void)presentToolbar;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(IGViewControllerTitleDetailTitleView *)titleView;
-(void)setTitleView:(IGViewControllerTitleDetailTitleView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(UIView*<FBWebView>)webView;
-(void)setWebView:(UIView*<FBWebView>)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(NSURLRequest *)urlRequest;
@end


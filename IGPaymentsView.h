
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGPaymentsHeaderViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGPaymentsViewDelegate;
@class UIWebView, IGPaymentsHeaderView, UIActivityIndicatorView, NSString;

@interface IGPaymentsView : UIView <IGPaymentsHeaderViewDelegate, UIWebViewDelegate> {

	id<IGPaymentsViewDelegate> _delegate;
	UIWebView* _webView;
	IGPaymentsHeaderView* _headerBar;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic,__weak) id<IGPaymentsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWebView * webView;                                   //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) IGPaymentsHeaderView * headerBar;                      //@synthesize headerBar=_headerBar - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                     //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpViewHierarchy;
-(void)setUpHeaderBar;
-(IGPaymentsHeaderView *)headerBar;
-(void)didSelectCloseOnPaymentsHeaderView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGPaymentsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGPaymentsViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)loadRequest:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end


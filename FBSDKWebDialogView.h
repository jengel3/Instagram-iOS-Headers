
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol FBSDKWebDialogViewDelegate;
@class UIButton, UIActivityIndicatorView, UIWebView, NSString;

@interface FBSDKWebDialogView : UIView <UIWebViewDelegate> {

	UIButton* _closeButton;
	UIActivityIndicatorView* _loadingView;
	UIWebView* _webView;
	id<FBSDKWebDialogViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSDKWebDialogViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close:(id)arg1 ;
-(void)loadURL:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<FBSDKWebDialogViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBSDKWebDialogViewDelegate>)delegate;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)stopLoading;
@end


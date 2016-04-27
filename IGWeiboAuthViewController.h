
#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface IGWeiboAuthViewController : IGViewController <UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)errorExistsInURL:(id)arg1 ;
-(id)accessTokenFromURL:(id)arg1 ;
-(char)stringContainsCallbackURL:(id)arg1 ;
-(id)tokenFromURL:(id)arg1 withTokenName:(id)arg2 ;
-(id)refreshTokenFromURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end


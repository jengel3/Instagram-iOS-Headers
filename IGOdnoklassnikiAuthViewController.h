
#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface IGOdnoklassnikiAuthViewController : IGViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _callbackURL;

}

@property (nonatomic,retain) UIWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * callbackURL;                  //@synthesize callbackURL=_callbackURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)startAuthorization;
-(NSString *)callbackURL;
-(void)setCallbackURL:(NSString *)arg1 ;
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


/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIActivityIndicatorView, NSString;

@interface IGSponsoredPostWebViewController : IGViewController <UIWebViewDelegate> {

	char _didLoadInitialPage;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) char didLoadInitialPage;                        //@synthesize didLoadInitialPage=_didLoadInitialPage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onCloseTapped;
-(char)didLoadInitialPage;
-(void)setDidLoadInitialPage:(char)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)loadURL:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface IGFoursquareAuthViewController : IGViewController <UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;                   //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)stringContainsCallbackURL:(id)arg1 ;
-(char)errorExistsInURL:(id)arg1 ;
-(id)accessTokenFromURL:(id)arg1 ;
-(void)fetchUsernameWithAccessToken:(id)arg1 ;
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


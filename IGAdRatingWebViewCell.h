/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGAdRatingWebViewCellContinuationDelegate;
@class IGFeedItem, UIWebView, NSString;

@interface IGAdRatingWebViewCell : UICollectionViewCell <UIWebViewDelegate> {

	IGFeedItem* _webElement;
	id<IGAdRatingWebViewCellContinuationDelegate> _continuationDelegate;
	UIWebView* _webView;

}

@property (nonatomic,retain) IGFeedItem * webElement;                                                                //@synthesize webElement=_webElement - In the implementation block
@property (assign,nonatomic,__weak) id<IGAdRatingWebViewCellContinuationDelegate> continuationDelegate;              //@synthesize continuationDelegate=_continuationDelegate - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                                    //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWebElement:(IGFeedItem *)arg1 ;
-(void)setContinuationDelegate:(id<IGAdRatingWebViewCellContinuationDelegate>)arg1 ;
-(id<IGAdRatingWebViewCellContinuationDelegate>)continuationDelegate;
-(IGFeedItem *)webElement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
@end


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
-(void)setContinuationDelegate:(id<IGAdRatingWebViewCellContinuationDelegate>)arg1 ;
-(id<IGAdRatingWebViewCellContinuationDelegate>)continuationDelegate;
-(void)setWebElement:(IGFeedItem *)arg1 ;
-(IGFeedItem *)webElement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
@end


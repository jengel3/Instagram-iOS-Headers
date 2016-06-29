
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGNewsFallbackCellViewDelegate;
@class IGNewsStory, UIWebView, NSString;

@interface IGNewsFallbackCellView : UIView <UIWebViewDelegate> {

	IGNewsStory* _story;
	id<IGNewsFallbackCellViewDelegate> _delegate;
	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) char hasPayloadSize; 
@property (nonatomic,retain) IGNewsStory * story;                                             //@synthesize story=_story - In the implementation block
@property (assign,nonatomic,__weak) id<IGNewsFallbackCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStory:(IGNewsStory *)arg1 ;
-(IGNewsStory *)story;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGNewsFallbackCellViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGNewsFallbackCellViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(char)hasPayloadSize;
@end


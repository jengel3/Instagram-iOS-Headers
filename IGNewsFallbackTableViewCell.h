
#import <UIKit/UITableViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGWebViewTableViewCellDelegate;
@class IGNewsStory, UIWebView, NSString;

@interface IGNewsFallbackTableViewCell : UITableViewCell <UIWebViewDelegate> {

	IGNewsStory* _story;
	id<IGWebViewTableViewCellDelegate> _delegate;
	UIWebView* _webView;

}

@property (nonatomic,retain) IGNewsStory * story;                                             //@synthesize story=_story - In the implementation block
@property (assign,nonatomic,__weak) id<IGWebViewTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) char hasPayloadSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGNewsStory *)story;
-(void)setStory:(IGNewsStory *)arg1 ;
-(void)setDelegate:(id<IGWebViewTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGWebViewTableViewCellDelegate>)delegate;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(char)hasPayloadSize;
@end


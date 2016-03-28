
#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGFeedItem, IGHybridWebView, NSString;

@interface IGBoostPostViewController : UIViewController <IGHybridWebViewDelegate> {

	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) IGHybridWebView * boostPostView; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                        //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFeedItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(IGHybridWebView *)boostPostView;
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end


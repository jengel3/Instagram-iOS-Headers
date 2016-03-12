
#import <UIKit/UIViewController.h>
#import <Instagram/IGBoostPostViewDelegate.h>

@class IGFeedItem, IGBoostPostView, NSString;

@interface IGBoostPostViewController : UIViewController <IGBoostPostViewDelegate> {

	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) IGBoostPostView * boostPostView; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                        //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectCloseBoostPostView:(id)arg1 ;
-(IGBoostPostView *)boostPostView;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end


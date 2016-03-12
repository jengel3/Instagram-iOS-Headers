
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGFeedToggleViewDelegate.h>

@class NSString;

@interface IGLikesViewController : IGFeedViewController_DEPRECATED <IGFeedToggleViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2 ;
-(id)init;
-(void)viewDidLoad;
@end


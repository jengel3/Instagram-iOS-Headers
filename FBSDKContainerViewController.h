
#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;
@interface FBSDKContainerViewController : UIViewController {

	id<FBSDKContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSDKContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)displayChildController:(id)arg1 ;
-(void)setDelegate:(id<FBSDKContainerViewControllerDelegate>)arg1 ;
-(id<FBSDKContainerViewControllerDelegate>)delegate;
-(void)viewDidDisappear:(char)arg1 ;
@end


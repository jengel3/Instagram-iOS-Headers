
#import <Instagram/IGNavigationController.h>

@class IGPopoverController;

@interface IGPopoverNavigationController : IGNavigationController {

	IGPopoverController* _containerController;

}

@property (assign,nonatomic,__weak) IGPopoverController * containerController;              //@synthesize containerController=_containerController - In the implementation block
-(IGPopoverController *)containerController;
-(void)setContainerController:(IGPopoverController *)arg1 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
@end


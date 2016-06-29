
#import <UIKit/UIViewController.h>

@interface IGStatusBarProxyViewController : UIViewController {

	char _statusBarHidden;
	int _statusBarStyle;

}

@property (assign,nonatomic) char statusBarHidden;              //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
-(char)statusBarHidden;
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)setStatusBarStyle:(int)arg1 ;
-(void)setStatusBarHidden:(char)arg1 ;
@end


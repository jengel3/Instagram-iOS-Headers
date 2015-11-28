
#import <UIKit/UIView.h>

@interface IGNuxTapOnCameraView : UIView {

	char _wasDismissed;

}

@property (assign,nonatomic) char wasDismissed;              //@synthesize wasDismissed=_wasDismissed - In the implementation block
+(char)shouldShowTapOnCameraNuxForUser:(id)arg1 ;
-(void)setWasDismissed:(char)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 animated:(char)arg2 ;
-(char)wasDismissed;
-(void)dealloc;
-(id)init;
-(void)showInView:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end


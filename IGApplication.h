
#import <UIKit/UIApplication.h>

@interface IGApplication : UIApplication {

	int _touchState;

}
-(void)processTouchEvent:(id)arg1 ;
-(void)handleTouch;
-(id)init;
-(void)sendEvent:(id)arg1 ;
@end


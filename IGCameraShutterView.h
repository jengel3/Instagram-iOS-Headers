
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGCameraShutterView : UIView {

	UIView* _backgroundView;
	UIView* _topBlind;
	UIView* _bottomBlind;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(void)openAnimated:(char)arg1 delay:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)moveToPosition:(float)arg1 andDarken:(char)arg2 ;
-(void)shutterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)moveToPosition:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)openAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end


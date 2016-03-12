
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@interface IGQuickHUD : UIView {

	double _duration;

}
+(void)displayWithText:(id)arg1 duration:(double)arg2 ;
+(void)displayWithImage:(id)arg1 duration:(double)arg2 forView:(id)arg3 ;
+(void)displayWithImage:(id)arg1 duration:(double)arg2 ;
-(id)initWithText:(id)arg1 image:(id)arg2 duration:(double)arg3 ;
-(void)addToWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animate;
@end


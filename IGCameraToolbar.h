
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCameraBar.h>

@interface IGCameraToolbar : IGCameraBar
-(void)pushItems:(id)arg1 animated:(char)arg2 ;
-(void)popItemsAnimated:(char)arg1 ;
-(id)viewForToolbarItems:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end


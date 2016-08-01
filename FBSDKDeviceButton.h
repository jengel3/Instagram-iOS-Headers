
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKButton.h>

@interface FBSDKDeviceButton : FBSDKButton
-(CGSize)sizeThatFits:(CGSize)arg1 title:(id)arg2 ;
-(id)attributedTitleStringFromString:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 attributedTitle:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)defaultFont;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end


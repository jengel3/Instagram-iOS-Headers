
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface IGCameraModeTransitionOverlayView : UIView {

	UIView* _blackOverlay;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIView * blackOverlay;                //@synthesize blackOverlay=_blackOverlay - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setBlackOverlay:(UIView *)arg1 ;
-(void)setImage:(id)arg1 mode:(int)arg2 imageMode:(int)arg3 ;
-(UIView *)blackOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end


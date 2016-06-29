
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGMediaThumbnailCell.h>

@class UIView, UIImageView;

@interface IGGeoMediaThumbnailCell : IGMediaThumbnailCell {

	char _enabled;
	char _checked;
	UIView* _overlayView;
	UIImageView* _checkmarkView;

}

@property (nonatomic,retain) UIView * overlayView;                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;              //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (assign,nonatomic) char enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char checked;                             //@synthesize checked=_checked - In the implementation block
-(char)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setChecked:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(UIImageView *)checkmarkView;
-(char)checked;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end


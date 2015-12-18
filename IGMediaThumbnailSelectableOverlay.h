
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface IGMediaThumbnailSelectableOverlay : UIView {

	UIImageView* _check;
	UIImageView* _placeholder;

}

@property (nonatomic,retain) UIImageView * check;                    //@synthesize check=_check - In the implementation block
@property (nonatomic,retain) UIImageView * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(void)setShowsCheckmark:(char)arg1 ;
-(void)setCheck:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(UIImageView *)arg1 ;
-(UIImageView *)placeholder;
-(UIImageView *)check;
@end


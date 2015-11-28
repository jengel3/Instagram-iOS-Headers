
#import <UIKit/UIControl.h>

@class UIImageView;

@interface IGImageSegment : UIControl {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end


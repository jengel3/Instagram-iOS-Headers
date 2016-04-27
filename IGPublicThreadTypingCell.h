
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPublicThreadContentCell.h>

@class UIImageView;

@interface IGPublicThreadTypingCell : IGPublicThreadContentCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(float)heightForTypingCellwithWidth:(float)arg1 ;
-(float)profilePictureYOffset;
-(id)animationCGImagesArrayFromImageArray:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)stopAnimation;
-(UIImageView *)imageView;
-(void)startAnimation;
-(void)setImageView:(UIImageView *)arg1 ;
@end


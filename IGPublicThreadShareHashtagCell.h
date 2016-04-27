
#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class UIImageView;

@interface IGPublicThreadShareHashtagCell : IGPublicThreadGenericShareContentCell {

	UIImageView* _hashtagImageView;

}

@property (nonatomic,retain) UIImageView * hashtagImageView;              //@synthesize hashtagImageView=_hashtagImageView - In the implementation block
+(float)heightForHashtagShare:(id)arg1 withWidth:(float)arg2 ;
+(float)sideImageWidth;
+(float)sideImageHeight;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
-(id)previewMedia;
-(UIImageView *)hashtagImageView;
-(id)sideImageView;
-(void)setHashtagImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


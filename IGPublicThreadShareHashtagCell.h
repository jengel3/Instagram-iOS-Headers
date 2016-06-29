
#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class UIImageView;

@interface IGPublicThreadShareHashtagCell : IGPublicThreadGenericShareContentCell {

	UIImageView* _hashtagImageView;

}

@property (nonatomic,retain) UIImageView * hashtagImageView;              //@synthesize hashtagImageView=_hashtagImageView - In the implementation block
+(float)heightForHashtagShare:(id)arg1 withWidth:(float)arg2 ;
+(float)sideImageHeight;
+(float)sideImageWidth;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
-(UIImageView *)hashtagImageView;
-(void)setHashtagImageView:(UIImageView *)arg1 ;
-(id)previewMedia;
-(id)sideImageView;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


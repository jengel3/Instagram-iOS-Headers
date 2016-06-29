
#import <Instagram/IGDirectGenericShareContentCell.h>

@class UIImageView;

@interface IGDirectShareHashtagCell : IGDirectGenericShareContentCell {

	UIImageView* _hashtagImageView;

}

@property (nonatomic,retain) UIImageView * hashtagImageView;              //@synthesize hashtagImageView=_hashtagImageView - In the implementation block
+(float)sideImageWidth;
+(float)heightForHashtagShare:(id)arg1 withWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(UIImageView *)hashtagImageView;
-(void)setHashtagImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


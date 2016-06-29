
#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class UIImageView;

@interface IGPublicThreadShareLocationCell : IGPublicThreadGenericShareContentCell {

	UIImageView* _locationImageView;

}

@property (nonatomic,retain) UIImageView * locationImageView;              //@synthesize locationImageView=_locationImageView - In the implementation block
+(float)heightForLocationShare:(id)arg1 withWidth:(float)arg2 ;
+(float)sideImageHeight;
+(float)sideImageWidth;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
-(UIImageView *)locationImageView;
-(void)setLocationImageView:(UIImageView *)arg1 ;
-(id)previewMedia;
-(id)sideImageView;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


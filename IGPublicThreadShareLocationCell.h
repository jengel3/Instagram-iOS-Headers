
#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class UIImageView;

@interface IGPublicThreadShareLocationCell : IGPublicThreadGenericShareContentCell {

	UIImageView* _locationImageView;

}

@property (nonatomic,retain) UIImageView * locationImageView;              //@synthesize locationImageView=_locationImageView - In the implementation block
+(float)sideImageWidth;
+(float)sideImageHeight;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
+(float)heightForLocationShare:(id)arg1 withWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(UIImageView *)locationImageView;
-(void)setLocationImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


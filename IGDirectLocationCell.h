
#import <Instagram/IGDirectGenericShareContentCell.h>

@class UIImageView;

@interface IGDirectLocationCell : IGDirectGenericShareContentCell {

	UIImageView* _locationImageView;

}

@property (nonatomic,retain) UIImageView * locationImageView;              //@synthesize locationImageView=_locationImageView - In the implementation block
+(float)sideImageWidth;
+(float)heightForLocationShare:(id)arg1 andWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(UIImageView *)locationImageView;
-(void)setLocationImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end


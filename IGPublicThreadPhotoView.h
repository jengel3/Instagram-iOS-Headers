
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGImageProgressView;

@interface IGPublicThreadPhotoView : UIView {

	IGImageProgressView* _photoImageView;

}

@property (nonatomic,retain) IGImageProgressView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(id)createPhotoImageView;
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(void)setPhoto:(id)arg1 ;
@end


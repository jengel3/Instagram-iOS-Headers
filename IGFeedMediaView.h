
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGImageProgressView, IGMediaOverlayIndicator;

@interface IGFeedMediaView : UIView {

	IGImageProgressView* _photoImageView;
	IGMediaOverlayIndicator* _indicator;

}

@property (nonatomic,readonly) IGImageProgressView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,readonly) IGMediaOverlayIndicator * indicator;               //@synthesize indicator=_indicator - In the implementation block
-(float)photosViewController:(id)arg1 maximumZoomScaleForPhoto:(id)arg2 ;
-(void)longPressed:(id)arg1 ;
-(IGMediaOverlayIndicator *)indicator;
-(IGImageProgressView *)photoImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end


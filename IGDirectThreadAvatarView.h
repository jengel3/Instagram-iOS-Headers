
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, CAShapeLayer;

@interface IGDirectThreadAvatarView : UIView {

	char _selected;
	IGProfilePictureImageView* _frontProfileView;
	IGProfilePictureImageView* _backProfileView;
	CAShapeLayer* _singleRingLayer;
	CAShapeLayer* _doubleRingLayer;

}

@property (nonatomic,readonly) IGProfilePictureImageView * frontProfileView;              //@synthesize frontProfileView=_frontProfileView - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * backProfileView;               //@synthesize backProfileView=_backProfileView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * singleRingLayer;                            //@synthesize singleRingLayer=_singleRingLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * doubleRingLayer;                            //@synthesize doubleRingLayer=_doubleRingLayer - In the implementation block
@property (assign,nonatomic) char selected;                                               //@synthesize selected=_selected - In the implementation block
-(id)createProfileImageViewWithBorderStyle:(int)arg1 ;
-(id)createRingLayer;
-(IGProfilePictureImageView *)frontProfileView;
-(IGProfilePictureImageView *)backProfileView;
-(CGRect)stackedFrontUserFrame;
-(CGRect)stackedBackUserFrame;
-(CAShapeLayer *)doubleRingLayer;
-(id)doubleRingLayerPath;
-(CAShapeLayer *)singleRingLayer;
-(CGRect)singleUserFrame;
-(id)singleRingLayerPath;
-(float)overlapDistance;
-(void)setFirstUser:(id)arg1 secondUser:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 ;
-(char)selected;
-(void)setIsAccessibilityElement:(char)arg1 ;
-(float)pictureDiameter;
@end


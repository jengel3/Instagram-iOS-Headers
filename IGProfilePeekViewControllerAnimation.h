
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class IGProfilePictureImageView, NSString;

@interface IGProfilePeekViewControllerAnimation : NSObject <UIViewControllerAnimatedTransitioning> {

	char _presenting;
	IGProfilePictureImageView* _profilePic;
	CGRect _initialFrame;

}

@property (assign,nonatomic) char presenting;                                     //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) CGRect initialFrame;                                 //@synthesize initialFrame=_initialFrame - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)present:(id)arg1 ;
-(CGRect)cameraControllerFrameForContainerView:(id)arg1 presentingController:(id)arg2 ;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(id)initPresenting:(char)arg1 profilePicture:(id)arg2 initialFrame:(CGRect)arg3 ;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
-(void)dismiss:(id)arg1 ;
@end



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, IGProfilePictureImageView, IGAlbumViewerViewController, NSString;

@interface IGAlbumTrayPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	char _isPresenting;
	UIView* _backgroundSnapshot;
	UIView* _transitionImageViewContainer;
	IGProfilePictureImageView* _transitionProfileImageView;
	IGAlbumViewerViewController* _viewer;
	CGRect _trayProfileFrame;

}

@property (nonatomic,retain) UIView * backgroundSnapshot;                                         //@synthesize backgroundSnapshot=_backgroundSnapshot - In the implementation block
@property (nonatomic,retain) UIView * transitionImageViewContainer;                               //@synthesize transitionImageViewContainer=_transitionImageViewContainer - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * transitionProfileImageView;              //@synthesize transitionProfileImageView=_transitionProfileImageView - In the implementation block
@property (assign,nonatomic) CGRect trayProfileFrame;                                             //@synthesize trayProfileFrame=_trayProfileFrame - In the implementation block
@property (assign,nonatomic,__weak) IGAlbumViewerViewController * viewer;                         //@synthesize viewer=_viewer - In the implementation block
@property (assign,nonatomic) char isPresenting;                                                   //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithCell:(id)arg1 user:(id)arg2 viewer:(id)arg3 backgroundSnapshot:(id)arg4 isPresenting:(char)arg5 ;
-(void)setTransitionImageViewContainer:(UIView *)arg1 ;
-(UIView *)transitionImageViewContainer;
-(void)setTransitionProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(IGProfilePictureImageView *)transitionProfileImageView;
-(void)setTrayProfileFrame:(CGRect)arg1 ;
-(void)setViewer:(IGAlbumViewerViewController *)arg1 ;
-(void)setBackgroundSnapshot:(UIView *)arg1 ;
-(void)setIsPresenting:(char)arg1 ;
-(void)presentAnimation:(id)arg1 ;
-(void)dismissAnimation:(id)arg1 ;
-(UIView *)backgroundSnapshot;
-(CGRect)trayProfileFrame;
-(IGAlbumViewerViewController *)viewer;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)isPresenting;
@end


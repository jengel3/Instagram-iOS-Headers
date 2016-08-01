
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class IGAlbumViewerViewController, IGProfilePictureImageView, NSString;

@interface IGAlbumViewerPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	char _isPresenting;
	IGAlbumViewerViewController* _viewer;
	IGProfilePictureImageView* _profileImageView;

}

@property (assign,nonatomic,__weak) IGAlbumViewerViewController * viewer;                      //@synthesize viewer=_viewer - In the implementation block
@property (assign,nonatomic,__weak) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic) char isPresenting;                                                //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGProfilePictureImageView *)profileImageView;
-(void)configureWithProfileImageView:(id)arg1 viewer:(id)arg2 isPresenting:(char)arg3 ;
-(void)setViewer:(IGAlbumViewerViewController *)arg1 ;
-(void)setProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setIsPresenting:(char)arg1 ;
-(void)presentAnimation:(id)arg1 ;
-(void)dismissAnimation:(id)arg1 ;
-(IGAlbumViewerViewController *)viewer;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)isPresenting;
@end


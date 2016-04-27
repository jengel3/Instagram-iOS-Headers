
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumPlayerViewProgressDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGAlbumFocusCoordinatorDelegate.h>
#import <Instagram/IGUserTokenizerTypeaheadViewControllerDelegate.h>

@protocol IGAlbumFullscreenViewControllerDelegate;
@class IGKVOHandle, IGAlbumFocusCoordinator, IGAlbumPlayerView, IGAlbumPlayerViewConfiguration, IGGradientView, IGAlbumFullscreenHeaderView, IGTapButton, UITextView, IGAlbumFullscreenProgressView, UISwipeGestureRecognizer, UITapGestureRecognizer, NSString;

@interface IGAlbumFullscreenViewController : UIViewController <IGAlbumPlayerViewProgressDelegate, IGActionSheetDelegate, IGAlbumFocusCoordinatorDelegate, IGUserTokenizerTypeaheadViewControllerDelegate> {

	char _shouldShowCameraButton;
	char _isCurrentAlbum;
	IGKVOHandle* _focusCoordinatorObserver;
	IGAlbumFocusCoordinator* _focusCoordinator;
	id<IGAlbumFullscreenViewControllerDelegate> _delegate;
	IGAlbumPlayerView* _albumPlayerView;
	IGAlbumPlayerViewConfiguration* _albumPlayerConfig;
	IGGradientView* _topGradientView;
	IGAlbumFullscreenHeaderView* _headerView;
	IGTapButton* _collaborationButton;
	IGTapButton* _optionsButton;
	IGTapButton* _dismissButton;
	UITextView* _captionTextView;
	IGTapButton* _commentsButton;
	IGTapButton* _cameraButton;
	IGAlbumFullscreenProgressView* _progressView;
	UISwipeGestureRecognizer* _swipe;
	UITapGestureRecognizer* _tap;

}

@property (assign,nonatomic) char shouldShowCameraButton;                                                //@synthesize shouldShowCameraButton=_shouldShowCameraButton - In the implementation block
@property (nonatomic,readonly) IGKVOHandle * focusCoordinatorObserver;                                   //@synthesize focusCoordinatorObserver=_focusCoordinatorObserver - In the implementation block
@property (nonatomic,readonly) IGAlbumFocusCoordinator * focusCoordinator;                               //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerView * albumPlayerView;                                        //@synthesize albumPlayerView=_albumPlayerView - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerViewConfiguration * albumPlayerConfig;                         //@synthesize albumPlayerConfig=_albumPlayerConfig - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradientView;                                           //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenHeaderView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGTapButton * collaborationButton;                                          //@synthesize collaborationButton=_collaborationButton - In the implementation block
@property (nonatomic,retain) IGTapButton * optionsButton;                                                //@synthesize optionsButton=_optionsButton - In the implementation block
@property (nonatomic,retain) IGTapButton * dismissButton;                                                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UITextView * captionTextView;                                               //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,retain) IGTapButton * commentsButton;                                               //@synthesize commentsButton=_commentsButton - In the implementation block
@property (nonatomic,retain) IGTapButton * cameraButton;                                                 //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipe;                                           //@synthesize swipe=_swipe - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                               //@synthesize tap=_tap - In the implementation block
@property (assign,nonatomic) char isCurrentAlbum;                                                        //@synthesize isCurrentAlbum=_isCurrentAlbum - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFocusCoordinator:(id)arg1 delegate:(id)arg2 ;
-(void)setShouldShowCameraButton:(char)arg1 ;
-(IGKVOHandle *)focusCoordinatorObserver;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)currentItemUpdated;
-(void)postDeleted;
-(void)setAlbumPlayerView:(IGAlbumPlayerView *)arg1 ;
-(IGAlbumPlayerView *)albumPlayerView;
-(void)setTopGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)topGradientView;
-(void)setCaptionTextView:(UITextView *)arg1 ;
-(UITextView *)captionTextView;
-(void)dismissButtonTapped;
-(void)setOptionsButton:(IGTapButton *)arg1 ;
-(void)collaborationButtonTapped;
-(void)setCollaborationButton:(IGTapButton *)arg1 ;
-(IGTapButton *)collaborationButton;
-(void)setCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)cameraButton;
-(void)cameraButtonTapped;
-(char)shouldShowCameraButton;
-(void)commentsButtonTapped;
-(void)tapToAdvance;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tap;
-(void)swipeToDismiss;
-(IGAlbumPlayerViewConfiguration *)albumPlayerConfig;
-(void)updateHeader;
-(void)updateCaption;
-(void)commentsDoneTapped;
-(void)albumPlayerView:(id)arg1 didProgress:(float)arg2 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)albumFocusCoordinatorDidComplete:(id)arg1 ;
-(void)userTokenizerTypeaheadViewControllerShouldCloseWithSelectedUsers:(id)arg1 ;
-(void)setAlbumPlayerConfig:(IGAlbumPlayerViewConfiguration *)arg1 ;
-(IGTapButton *)commentsButton;
-(void)setCommentsButton:(IGTapButton *)arg1 ;
-(char)isCurrentAlbum;
-(void)setIsCurrentAlbum:(char)arg1 ;
-(void)dealloc;
-(id<IGAlbumFullscreenViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(IGAlbumFullscreenHeaderView *)headerView;
-(void)setHeaderView:(IGAlbumFullscreenHeaderView *)arg1 ;
-(void)setProgressView:(IGAlbumFullscreenProgressView *)arg1 ;
-(IGAlbumFullscreenProgressView *)progressView;
-(void)setSwipe:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipe;
-(IGTapButton *)dismissButton;
-(IGTapButton *)optionsButton;
-(void)optionsButtonTapped;
-(void)setDismissButton:(IGTapButton *)arg1 ;
@end



#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGAlbumTitleViewControllerDelegate;
@class IGAlbumCreationViewModel, UITextField, UIView, NSString;

@interface IGAlbumTitleViewController : UIViewController <UITextFieldDelegate, UIViewControllerTransitioningDelegate> {

	id<IGAlbumTitleViewControllerDelegate> _delegate;
	IGAlbumCreationViewModel* _viewModel;
	UITextField* _titleTextField;
	UIView* _showLocationsOverlay;

}

@property (assign,nonatomic,__weak) id<IGAlbumTitleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewModel * viewModel;                                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) UITextField * titleTextField;                                        //@synthesize titleTextField=_titleTextField - In the implementation block
@property (nonatomic,retain) UIView * showLocationsOverlay;                                       //@synthesize showLocationsOverlay=_showLocationsOverlay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 delegate:(id)arg2 ;
-(void)tappedView:(id)arg1 ;
-(void)finishedEditing;
-(UITextField *)titleTextField;
-(void)setTitleTextField:(UITextField *)arg1 ;
-(UIView *)showLocationsOverlay;
-(void)setShowLocationsOverlay:(UIView *)arg1 ;
-(IGAlbumCreationViewModel *)viewModel;
-(void)setViewModel:(IGAlbumCreationViewModel *)arg1 ;
-(void)setDelegate:(id<IGAlbumTitleViewControllerDelegate>)arg1 ;
-(id<IGAlbumTitleViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

